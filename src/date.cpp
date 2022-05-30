#include <iostream>
#include <cstdlib>
#include "date.hpp"

Date::Date() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    time(&timeInSeconds);
    dateInfo = localtime(&timeInSeconds);
}

Date::~Date() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    time(&timeInSeconds);
    dateInfo = localtime(&timeInSeconds);
}

string Date::datef(string format) {
    
    
    // string formated;
    // strftime(formated, sizeof(format), format, dateInfo);
    // date = formated;
    return "";
} 