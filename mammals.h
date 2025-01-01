#ifndef mammals_H
#define mammals_H
#include "animal.h"

class Mammals: public Animal
{
public:
    Mammals(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="mammals", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Mammals(Mammals &obj);
    ~Mammals();

    void displayAnimal();
    void addAnimal();
};

#endif



