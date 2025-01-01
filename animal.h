#ifndef animal_H
#define animal_H
#include "habitat.h"
#include "animalhealth.h"

class Animal
{
private:
    std::string animal_id;
    std::string name;
    std::string offsprings;
    std::string cell_id;
    std::string gender;
    int age;
    float weight;
    std::string category;
    AnimalHealth health;
    Habitat habitat;

public:
    Animal(std::string="", std::string="", std::string="", std::string="", std::string="", int=0, float=0, std::string="", bool=true, std::string="", std::string="", std::string="", std::string="",std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Animal(Animal &obj);
    ~Animal();

    std::string getAnimalID();
    std::string getName();
    std::string getOffSprings();
    std::string getCellID();
    std::string getGender();
    int getAge();
    float getWeight();
    std::string getCategory();
    AnimalHealth& getHealthDetails();
    Habitat& getHabitatDetails();

    void setAnimalID(std::string);
    void setName(std::string);
    void setOffSprings(std::string);
    void setCellID(std::string);
    void setGender(std::string);
    void setAge(int);
    void setWeight(float);
    void setCategory(std::string);

    virtual void displayAnimal();
    virtual void addAnimal()=0;
    void deleteAnimal(Animal* animals[], int&, std::string);
    void findAnimalByID(Animal* animals[], int&, std::string);
    void findAnimalByLocation(Animal* animals[], int&, std::string);
    void listByCategory(Animal* animals[], int&, std::string);
    void listByCategory(Animal* animals[], int&, std::string, std::string);
    void listByCategory(Animal* animals[], int&, std::string, std::string, std::string);
    void listByKeeper(Animal* animals[], int&, std::string);
    void listByDietary(Animal* animals[], int&, std::string);
    void listAnimalsByConditions(Animal* animals[], int&, std::string, std::string, std::string, std::string, std::string);
    void listSickAnimalByCategory(Animal* animals[], int&, std::string);
    void listSickAnimalByAge(Animal* animals[], int&, int);
    void listSickAnimalByGender(Animal* animals[], int&, std::string);
    void listSickAnimalByLocation(Animal* animals[], int&, std::string);
    void ListSickAnimalsBetweenDates(Animal* animals[], int&, std::string);
    void ListAnimalsBornBetweenDate(Animal* animals[], int&, std::string);
    void listFequencyOfSickAnimals(Animal* animals[], int&);
    void destroyAllRecords(Animal* animals[], int&);
};

#endif // animal_H
