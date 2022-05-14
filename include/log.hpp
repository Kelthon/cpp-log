#ifndef CPPLOG_H
#define CPPLOG_H

#include <iostream>
#include <fstream>
typedef std::string string;

class Logger {
    private:
        string localStorage;
        string name;
        string buffer;
        std::ofstream logger;
    public:
        Logger(string filename, string path);
        void setLogger(string name);
        // void setName(string filename);
        void setPath(string path);
        void log(string message);
        void error(string message);
        void success(string message);
        void info(string message);
        void warning(string message);
        void clear();
};

#endif