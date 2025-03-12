#ifndef UTILS_H
#define UTILS_H

#include <string>

bool fileExists(const std::string& path);
size_t getFileSize(const std::string& path);
bool createDirectory(const std::string& path);
std::string getFileName(const std::string& path);
bool copyFile(const std::string& sourcePath, const std::string& destPath);

#endif