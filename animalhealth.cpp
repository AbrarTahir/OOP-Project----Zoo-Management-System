#include <iostream>
#include <string>
#include <cctype>
#include "animalhealth.h"

using namespace std;

AnimalHealth::AnimalHealth(bool Status, string keeper, string dietery, string foodSupply, string Category)
{
    setStatus(Status);
    setKeeperDetails(keeper);
    setDietaryConditions(dietery);
    setFoodSupplyDetails(foodSupply);
    setCategory(Category);
}

AnimalHealth::AnimalHealth(AnimalHealth &obj)
{
    setStatus(obj.getStatus());
    setKeeperDetails(obj.getKeeperDetails());
    setDietaryConditions(obj.getDietaryConditions());
    setFoodSupplyDetails(obj.getFoodSupplyDetails());
    setCategory(obj.getCategory());
}

AnimalHealth::~AnimalHealth()
{

}

void AnimalHealth::setStatus(bool a)
{
    status=a;
}

void AnimalHealth::setKeeperDetails(string b)
{
    keeper_details=b;
}

void AnimalHealth::setDietaryConditions(string c)
{
    dietary_conditions=c;
}

void AnimalHealth::setFoodSupplyDetails(string d)
{
    food_supply_details=d;
}

void AnimalHealth::setCategory(string e)
{
    category=e;
}

bool AnimalHealth::getStatus()
{
    return status;
}

string AnimalHealth::getKeeperDetails()
{
    return keeper_details;
}

string AnimalHealth::getDietaryConditions()
{
    return dietary_conditions;
}

string AnimalHealth::getFoodSupplyDetails()
{
    return food_supply_details;
}

string AnimalHealth::getCategory()
{
    return category;
}

void AnimalHealth::displayHealthDetails()
{
    if(getStatus()==1)
    {
        cout<<"Status of Animal: Fit"<<endl;
    }
    else
    {
        cout<<"Status of Animal: Unfit"<<endl;
    }
    cout<<"Keeper details: "<<getKeeperDetails()<<endl;
    cout<<"Dietary conditions: "<<getDietaryConditions()<<endl;
    cout<<"Food supply details: "<<getFoodSupplyDetails()<<endl;
    cout<<"Animal Health Category: "<<getCategory()<<endl;
}

void AnimalHealth::addAnimalHealth()
{
    bool status;
    string keeper;
    string dietary;
    string food_supply;
    string _category;

    cout<<"Enter the status of the animal (1 for fit/0 for unfit): ";
    cin>>status;
    cin.ignore();
    cout<<"Enter the keeper name: ";
    getline(cin, keeper);
    cout<<"Enter the dietary conditions of the animal: ";
    getline(cin, dietary);
    cout<<"Enter the food supply of the animal: ";
    getline(cin, food_supply);
    cout<<"Enter the category of the animal(Cannibals, Carnivore, Herbivore, Omnivore, Scavengers): ";
    cin>>_category;
    while(_category!="Cannibals" &&_category!="Carnivore" &&_category!="Herbivore" &&_category!="Omnivore" &&_category!="Scavengers" &&_category!="cannibals" &&_category!="carnivore" &&_category!="herbivore" &&_category!="omnivore" &&_category!="scavengers")
    {
       cout<<"Invalid category! Please enter a valid category: ";
       cin>>_category;
    }

    for(char& c : keeper)
    {
        c=tolower(c);
    }
    for(char& c : dietary)
    {
        c=tolower(c);
    }

    for(char& c : food_supply)
    {
        c=tolower(c);
    }

    for(char& c : _category)
    {
        c=tolower(c);
    }

    setStatus(status);
    setKeeperDetails(keeper);
    setDietaryConditions(dietary);
    setFoodSupplyDetails(food_supply);
    setCategory(_category);

    cout<<"Animal Health added successfully."<<endl;
}
