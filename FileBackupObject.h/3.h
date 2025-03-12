#include "FileBackupObject.h"
#include "Utils.h"

FileBackupObject::FileBackupObject(const std::string& path) : filePath(path) {}

std::string FileBackupObject::getPath() const { return filePath; }

std::string FileBackupObject::getName() const { return getFileName(filePath); }

size_t FileBackupObject::getSize() const { 
    return exists() ? getFileSize(filePath) : 0; 
}

bool FileBackupObject::exists() const { return fileExists(filePath); }