#ifndef amphibians_H
#define amphibians_H
#include "animal.h"

class Amphibians: public Animal
{
public:
    Amphibians(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="amphibians", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Amphibians(Amphibians &obj);
    ~Amphibians();

    void displayAnimal();
    void addAnimal();
};

#endif
