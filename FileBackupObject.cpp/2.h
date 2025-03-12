#ifndef FILE_BACKUP_OBJECT_H
#define FILE_BACKUP_OBJECT_H

#include BackupObject.h
#include string

class FileBackupObject  public BackupObject {
private
    stdstring filePath;
public
    explicit FileBackupObject(const stdstring& path);
    stdstring getPath() const override;
    stdstring getName() const override;
    size_t getSize() const override;
    bool exists() const override;
};

#endif