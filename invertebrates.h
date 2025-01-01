#ifndef invertebrates_H
#define invertebrates_H
#include "animal.h"

class Invertebrates: public Animal
{
public:
    Invertebrates(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="invertebrates", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Invertebrates(Invertebrates &obj);
    ~Invertebrates();

    void displayAnimal();
    void addAnimal();
};

#endif


