#ifndef reptiles_H
#define reptiles_H
#include "animal.h"

class Reptiles: public Animal
{
public:
    Reptiles(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="reptiles", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Reptiles(Reptiles &obj);
    ~Reptiles();

    void displayAnimal();
    void addAnimal();
};

#endif




