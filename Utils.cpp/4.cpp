#ifndef UTILS_H  // Защита от повторного включения заголовочного файла.
#define UTILS_H  // Определяет макрос UTILS_H для предотвращения дублирования.

#include <string>  // Подключение стандартной библиотеки для работы со строками.

// Объявление функции для проверки существования файла.
bool fileExists(const std::string& path);
// Комментарий: Принимает путь к файлу или директории и возвращает true, если он существует.

// Объявление функции для получения размера файла.
size_t getFileSize(const std::string& path);
// Комментарий: Принимает путь к файлу и возвращает его размер в байтах. Если файл не существует, возвращает 0.

// Объявление функции для создания директории.
bool createDirectory(const std::string& path);
// Комментарий: Принимает путь к директории и создает её. Возвращает true, если директория успешно создана.

// Объявление функции для получения имени файла из полного пути.
std::string getFileName(const std::string& path);
// Комментарий: Принимает полный путь к файлу и возвращает только имя файла.

// Объявление функции для копирования файла.
bool copyFile(const std::string& sourcePath, const std::string& destPath);
// Комментарий: Принимает путь к исходному файлу и путь к целевому файлу. Копирует содержимое исходного файла в целевой. Возвращает true, если операция успешна.

#endif  // Завершение блока условной компиляции (#ifndef).