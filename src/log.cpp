#include <iostream>
#include "log.hpp"
#include "date.hpp"

string now = Date().datef("");

Logger::Logger(string filename, string path)
{
    name =  filename;
    string mimetype = ".log";
    localStorage = path + "/" + filename + mimetype;
    logger = std::ofstream();
    logger.open(localStorage);
    logger.close();
}

void Logger::setLogger(string name)
{
    Logger::name = name;
}

void Logger::setPath(string path)
{
    localStorage = path +"/" + name;
}

void Logger::log(string message)
{
    logger.open(localStorage, std::ios::app);
    logger << now + " " + name + ": " + message << std::endl;
    logger.close();
}

void Logger::error(string message)
{
    logger.open(localStorage, std::ios::app);
    logger << now + " " + name + " error: " + message << std::endl;
    logger.close();

}

void Logger::success(string message)
{
    logger.open(localStorage, std::ios::app);
    logger << now + " " + name + " success: " + message << std::endl;
    logger.close();

}

void Logger::info(string message)
{
    logger.open(localStorage, std::ios::app);
    logger << now + " " + name + " info: " + message << std::endl;
    logger.close();

}

void Logger::warning(string message)
{
    logger.open(localStorage, std::ios::app);
    logger << now + " " + name + " warning: " + message << std::endl;
    logger.close();

}

void Logger::clear()
{
    logger.open(localStorage, std::ios::out);
    logger.close();
}
