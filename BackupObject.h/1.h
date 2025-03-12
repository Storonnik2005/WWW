#ifndef BACKUP_OBJECT_H
#define BACKUP_OBJECT_H

#include string

class BackupObject {
public
    virtual ~BackupObject() = default;
    virtual stdstring getPath() const = 0;
    virtual stdstring getName() const = 0;
    virtual size_t getSize() const = 0;
    virtual bool exists() const = 0;
};

#endif