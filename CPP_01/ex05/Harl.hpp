#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>
#include <algorithm>

class Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(const std::string &level);
};

#endif