#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>

class Logger {
private:
    std::ofstream m_file;

public:
    Logger(const std::string& filename);

    void log(const std::string& message);
};

#endif