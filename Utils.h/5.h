#include "Utils.h"
#include <sys/stat.h>
#include <direct.h>
#include <io.h>
#include <fstream>

bool fileExists(const std::string& path) {
    return _access(path.c_str(), 0) == 0;
}

size_t getFileSize(const std::string& path) {
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    return file ? static_cast<size_t>(file.tellg()) : 0;
}

bool createDirectory(const std::string& path) {
    return _mkdir(path.c_str()) == 0;
}

std::string getFileName(const std::string& path) {
    size_t pos = path.find_last_of("/\\");
    return pos == std::string::npos ? path : path.substr(pos + 1);
}

bool copyFile(const std::string& sourcePath, const std::string& destPath) {
    std::ifstream src(sourcePath, std::ios::binary);
    std::ofstream dst(destPath, std::ios::binary);
    if (!src || !dst) return false;
    dst << src.rdbuf();
    return true;
}