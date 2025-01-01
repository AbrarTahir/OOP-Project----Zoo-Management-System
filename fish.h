#ifndef fish_H
#define fish_H
#include "animal.h"

class Fish: public Animal
{
public:
    Fish(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="fish", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Fish(Fish &obj);
    ~Fish();

    void displayAnimal();
    void addAnimal();
};

#endif

