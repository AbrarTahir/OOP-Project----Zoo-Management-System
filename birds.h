#ifndef birds_H
#define birds_H
#include "animal.h"

class Birds: public Animal
{
public:
    Birds(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="birds", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Birds(Birds &obj);
    ~Birds();

    void displayAnimal();
    void addAnimal();
};

#endif // birds_H
