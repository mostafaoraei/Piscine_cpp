//
// Created by Mostafa Oraei on 10/23/20.
//

#ifndef EX09_LOGGER_H
#define EX09_LOGGER_H

#include <string>

class Logger {
    void logToConsole(const std::string &message);

    void logToFile(const std::string &message);

    std::string makeLogEntry(const std::string &message);

    std::string _fileName;

public:
    void log(std::string const & dest, std::string const & message);

    void (*fcnPtr)(const std::string &);

    void getFileName(std::string fileName);
};


#endif //EX09_LOGGER_H
