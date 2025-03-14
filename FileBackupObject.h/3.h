#include "FileBackupObject.h"  // Подключение заголовочного файла класса FileBackupObject.
#include "Utils.h"            // Подключение заголовочного файла с вспомогательными функциями.

// Реализация конструктора класса FileBackupObject.
FileBackupObject::FileBackupObject(const std::string& path) : filePath(path) {}
// Комментарий: Конструктор принимает путь к файлу и инициализирует поле filePath этим значением.

// Реализация метода getPath().
std::string FileBackupObject::getPath() const { return filePath; }
// Комментарий: Метод возвращает путь к файлу, хранящийся в поле filePath.

// Реализация метода getName().
std::string FileBackupObject::getName() const { return getFileName(filePath); }
// Комментарий: Метод вызывает функцию getFileName (из Utils.h), чтобы извлечь имя файла из пути filePath.

// Реализация метода getSize().
size_t FileBackupObject::getSize() const { 
    return exists() ? getFileSize(filePath) : 0; 
}
// Комментарий: Метод проверяет существование файла через метод exists(). Если файл существует,
// вызывается функция getFileSize (из Utils.h) для получения размера файла. Если файл не существует,
// возвращается значение 0.

// Реализация метода exists().
bool FileBackupObject::exists() const { return fileExists(filePath); }
// Комментарий: Метод вызывает функцию fileExists (из Utils.h), чтобы проверить, существует ли файл
// по указанному пути filePath. Возвращает true, если файл существует, и false в противном случае.