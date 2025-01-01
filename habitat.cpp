#include <iostream>
#include <string>
#include "habitat.h"

using namespace std;

Habitat::Habitat(string habitat, string dob, string Category, string cellID, float areaOfCell, string cellLocation)
{
    setHabitatHistory(habitat);
    setBirthDate(dob);
    setCategory(Category);
    setCellId(cellID);
    setAreaOfCell(areaOfCell);
    setLocationOfCell(cellLocation);
}

Habitat::Habitat(Habitat &obj)
{
    setHabitatHistory(getHabitatHistory());
    setBirthDate(getBirthDate());
    setCategory(getCategory());
    setCellId(getCellId());
    setAreaOfCell(getAreaOfCell());
    setLocationOfCell(getLocationOfCell());
}

Habitat::~Habitat()
{

}

void Habitat::setHabitatHistory(string a)
{
    habitat_history=a;
}

void Habitat::setBirthDate(string b)
{
    birth_date=b;
}

void Habitat::setCategory(string c)
{
    category=c;
}

void Habitat::setCellId(string d)
{
    cell_id=d;
}

void Habitat::setAreaOfCell(float e)
{
    area_of_cell=e;
}

void Habitat::setLocationOfCell(string f)
{
    location_of_cell=f;
}

string Habitat::getHabitatHistory()
{
    return habitat_history;
}

string Habitat::getBirthDate()
{
    return birth_date;
}

string Habitat::getCategory()
 {
    return category;
}

string Habitat::getCellId()
{
    return cell_id;
}

float Habitat::getAreaOfCell()
{
    return area_of_cell;
}

string Habitat::getLocationOfCell()
{
    return location_of_cell;
}

void Habitat::displayHabitat()
{
    cout<<"Habitat history: "<<getHabitatHistory()<<endl;
    cout<<"Birth Date: "<<getBirthDate()<<endl;
    cout<<"Category: "<<getCategory()<<endl;
    cout<<"Cell ID: "<<getCellId()<<endl;
    cout<<"Area of cell: "<<getAreaOfCell()<<"sqft"<<endl;
    cout<<"Location of cell: "<<getLocationOfCell()<<endl;
}

void Habitat::addHabitat()
{
    string habitat_history;
    string birth_date;
    string category;
    string cell_id;
    float area_of_cell;
    string location_of_cell;

    cin.ignore();
    cout<<"Enter habitat history of the animal: ";
    getline(cin, habitat_history);
    cout<<"Enter birth date of the animal in DD/MM/YYYY: ";
    getline(cin, birth_date);
    while(birth_date[2]!='/' && birth_date[5]!='/')
    {
        cout<<"Invalid date format used. Please enter the date correctly: ";
        getline(cin, birth_date);
    }

    cout<<"Enter category of the animal from the following(Endangered/Common): ";
    getline(cin, category);
    while(category!="Endangered" && category!="endangered" && category!="Common" && category!="common")
    {
        cout<<"Invalid category! Please enter a valid category: ";
        getline(cin, category);
    }
    cout<<"Enter cell id of the animal: ";
    getline(cin, cell_id);
    cout<<"Enter the area of the cell in (sqft): ";
    cin>>area_of_cell;
    cin.ignore();
    cout<<"Enter location of the cell: ";
    getline(cin, location_of_cell);

    for(char& c : habitat_history)
    {
        c=tolower(c);
    }
    for(char& c : category)
    {
        c=tolower(c);
    }
    for(char& c : cell_id)
    {
        c=tolower(c);
    }
    for(char& c : location_of_cell)
    {
        c=tolower(c);
    }

    setHabitatHistory(habitat_history);
    setBirthDate(birth_date);
    setCategory(category);
    setCellId(cell_id);
    setAreaOfCell(area_of_cell);
    setLocationOfCell(location_of_cell);

    cout<<"Habitat added successfully."<<endl;
}
