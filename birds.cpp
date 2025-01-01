#include <iostream>
#include <string>
#include "birds.h"

using namespace std;

Birds::Birds(string animalID, string Name, string Offsprings, string CellID, string Gender, int Age, float Weight, string category, bool Status, string keeper, string dietery, string foodSupply, string _Category , string habitat, string dob, string Category, string cellID, float areaOfCell, string cellLocation): Animal(animalID, Name, Offsprings, CellID, Gender, Age, Weight, category, Status, keeper, dietery, foodSupply, _Category , habitat, dob, Category, cellID, areaOfCell, cellLocation)
{

}

Birds::Birds(Birds &obj): Animal(obj)
{

}

Birds::~Birds()
{

}

void Birds::displayAnimal()
{
    Animal::displayAnimal();
}

void Birds::addAnimal()
{
    string animalID;
    string Name;
    string Offsprings;
    string CellID;
    string Gender;
    int Age;
    float Weight;

    cout<<"Enter the animal ID: ";
    cin>>animalID;
    cout<<"Enter the name of animal: ";
    cin>>Name;
    cout<<"Enter the number of Offsprings of the animal: ";
    cin>>Offsprings;
    cout<<"Enter the CellID: ";
    cin>>CellID;
    cout<<"Enter the Gender of the animal: ";
    cin>>Gender;
    while(Gender!="Male" && Gender!="Female" && Gender!="male" && Gender!="female")
    {
        cout<<"Invalid Gender! Please enter a valid Gender: ";
        cin>>Gender;
    }

    cout<<"Enter the Age of the animal: ";
    cin>>Age;
    cout<<"Enter the Weight of the animal: ";
    cin>>Weight;

    for(char& c : animalID)
    {
        c=tolower(c);
    }
    for(char& c : Name)
    {
        c=tolower(c);
    }
    for(char& c : CellID)
    {
        c=tolower(c);
    }
    for(char& c : Gender)
    {
        c=tolower(c);
    }

    setAnimalID(animalID);
    setName(Name);
    setOffSprings(Offsprings);
    setCellID(CellID);
    setGender(Gender);
    setAge(Age);
    setWeight(Weight);

    cout<<"Animal added successfully."<<endl;
}
