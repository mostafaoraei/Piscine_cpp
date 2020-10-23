//
// Created by Mostafa Oraei on 10/23/20.
//

#include "Logger.h"
#include <ctime>
#include <iostream>
#include <fstream>

std::string Logger::makeLogEntry(const std::string& message) {
    time_t raw_time;
    time(&raw_time);
    char log_time[80];
    strftime(log_time, 80, "%Y-%m-%d %H:%M:%S", localtime(&raw_time));
    return std::string(log_time) + "\n" + message;
}

void Logger::logToFile(const std::string &message) {
    while (_fileName.empty()) {
        std::cout << "You must set file name first!" << std::endl;
        std::cout << "Enter file name: " << std::endl;
        std::cin >> _fileName;
    }
    std::ofstream myFile;
    myFile.open(_fileName);
    myFile << Logger::makeLogEntry(message) << std::endl;
    myFile.close();
}

void Logger::logToConsole(const std::string &message) {
    std::cout << Logger::makeLogEntry(message);
}

void Logger::log(const std::string &dest, const std::string &message) {
    std::string _dest[] = {"file", "console"};
    typedef void (Logger::*fcnPtr)(const std::string &message);
    fcnPtr functionPointers[] = {&Logger::logToFile, &Logger::logToConsole};
    for (int i = 0; i < 2; ++i) {
        if (_dest[i] == dest) {
            (this->*functionPointers[i])(message);
        }
    }
}

void Logger::getFileName(std::string fileName) {
    this->_fileName = fileName;
}
