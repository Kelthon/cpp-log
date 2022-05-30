#include <iostream>
#include <cstdlib>

typedef std::string string;

class Date {
    private:
        string date;
        time_t timeInSeconds;
        tm *dateInfo;;
        
    public:
        Date();
        ~Date();
        string datef(string);
        int seconds();
        int minutes();       
        int hours();
        int days();
        int weeks();
        int months();
        int years();
};