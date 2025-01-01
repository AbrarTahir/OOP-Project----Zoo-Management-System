#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

Animal::Animal(string animalID, string Name, string Offsprings, string CellID, string Gender, int Age, float Weight, string category, bool Status, string keeper, string dietery, string foodSupply, string _Category , string habitat, string dob, string Category, string cellID, float areaOfCell, string cellLocation): health(Status, keeper, dietery, foodSupply, _Category), habitat(habitat, dob, Category, cellID, areaOfCell, cellLocation)
{
     setAnimalID(animalID);
     setName(Name);
     setOffSprings(Offsprings);
     setCellID(CellID);
     setGender(Gender);
     setAge(Age);
     setWeight(Weight);
     setCategory(category);
}

Animal::Animal(Animal &obj): health(obj.health), habitat(obj.habitat)
{
    setAnimalID(obj.getAnimalID());
    setName(obj.getName());
    setOffSprings(obj.getOffSprings());
    setCellID(obj.getCellID());
    setGender(obj.getGender());
    setAge(obj.getAge());
    setWeight(obj.getWeight());
    setCategory(obj.getCategory());
}

Animal::~Animal()
{

}

void Animal::setAnimalID(string a)
{
    animal_id=a;
}

void Animal::setName(string b)
{
    name=b;
}

void Animal::setOffSprings(string c)
{
    offsprings=c;
}

void Animal::setCellID(string d)
{
    cell_id=d;
}

void Animal::setGender(string e)
{
    gender=e;
}

void Animal::setAge(int f)
{
    age=f;
}

void Animal::setWeight(float g)
{
    weight=g;
}

void Animal::setCategory(string h)
{
    category=h;
}

string Animal::getAnimalID()
{
    return animal_id;
}

string Animal::getName()
{
    return name;
}

string Animal::getOffSprings()
{
    return offsprings;
}

string Animal::getCellID()
{
    return cell_id;
}

string Animal::getGender()
{
    return gender;
}

int Animal::getAge()
{
    return age;
}

float Animal::getWeight()
{
    return weight;
}

string Animal::getCategory()
{
    return category;
}

void Animal::displayAnimal()
{
    cout<<"Animal ID: "<<getAnimalID()<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Offspring: "<<getOffSprings()<<endl;
    cout<<"Cell ID: "<<getCellID()<<endl;
    cout<<"Gender: "<<getGender()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Weight: "<<getWeight()<<endl;
}

AnimalHealth& Animal::getHealthDetails()
{
    return health;
}

Habitat& Animal::getHabitatDetails()
{
    return habitat;
}

void Animal::deleteAnimal(Animal* animals[], int& num, string id)
{
    int index=-1;
    for (int i=0;i<num;i++)
    {
        if(animals[i]->getAnimalID()==id)
        {
            index=i;
        }
    }

    if(index!=-1)
    {
        delete animals[index];

        for (int i=index;i<num-1;i++)
        {
            animals[i]=animals[i+1];
        }
        num--;

        cout<<"Animal deleted successfully.\n";
    }
    else
    {
        cout<<"Animal id was not found. Unable to delete\n";
    }
}

void Animal::findAnimalByID(Animal* animals[], int& num, string id)
{
    int index=-1;
    int counter=0;
    for (int i=0;i<num;i++)
    {
        if(animals[i]->getAnimalID()==id)
        {
            index=i;
            counter=1;
            cout<<"Animal has been found at index: "<<index<<endl;
            animals[index]->displayAnimal();
        }
    }

    if(counter!=1)
    {
        cout<<"Animal was not found\n";
    }
}

void Animal::findAnimalByLocation(Animal* animals[], int& num, string location)
{
    int counter=0;

    cout<<"Animals in location "<<location<<": "<<endl;
    for(char& c : location)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getHabitatDetails().getLocationOfCell() == location)
        {
            animals[i]->displayAnimal();
            counter++;
        }
    }

    if(counter==0)
    {
        cout<<"No Animals found in this location"<<endl;
    }
}

void Animal::listByCategory(Animal* animals[], int& num, string category)
{
    int counter=0;
    cout<<"The animals that are in the "<<category<<" are: "<<endl;
    for(char& c : category)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getCategory()==category)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Animals found in this category"<<endl;
    }
}

void Animal::listByCategory(Animal* animals[], int& num, string category, string category2)
{
    int counter=0;
    cout<<"The animals that are in the "<<category<<" and "<<category2<<" are: "<<endl;
    for(char& c : category)
    {
        c=tolower(c);
    }
    for(char& c : category2)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if((animals[i]->getCategory()==category) && (animals[i]->getHealthDetails().getCategory()==category2))
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            animals[i]->getHealthDetails().displayHealthDetails();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Animals found in this category"<<endl;
    }
}

void Animal::listByCategory(Animal* animals[], int& num, string category, string category2, string category3)
{
    int counter=0;
    cout<<"The animals that are in the '"<<category<<"' and '"<<category2<<"' and '"<<category3<<"' are: "<<endl;
    for(char& c : category)
    {
        c=tolower(c);
    }
    for(char& c : category2)
    {
        c=tolower(c);
    }
    for(char& c : category3)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if((animals[i]->getCategory()==category) && (animals[i]->getHealthDetails().getCategory()==category2) && (animals[i]->getHabitatDetails().getCategory()==category3))
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            animals[i]->getHealthDetails().displayHealthDetails();
            animals[i]->getHabitatDetails().displayHabitat();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Animals found in this category"<<endl;
    }
}

void Animal::listByKeeper(Animal* animals[], int& num, string keeper)
{
    int counter=0;
    cout<<"The animals that are being taken care of by '"<<keeper<<"' are: "<<endl;
    for(char& c : keeper)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getHealthDetails().getKeeperDetails()==keeper)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<"Keeper: "<<animals[i]->getHealthDetails().getKeeperDetails();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Animals found that are being taken care under the keeper: "<<keeper<<endl;
    }
}

void Animal::listByDietary(Animal* animals[], int& num, string dietary)
{
    int counter=0;
    cout<<"The animals that have the dietary condition '"<<dietary<<"' are: "<<endl;
    for(char& c : dietary)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getHealthDetails().getDietaryConditions()==dietary)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<"Dietary condition: "<<animals[i]->getHealthDetails().getDietaryConditions();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Animals found by this dietary condition"<<endl;
    }
}

void Animal::listAnimalsByConditions(Animal* animals[], int& num, string category, string category2, string category3, string keeper, string dietary)
{
    int counter=0;

    for(char& c : category)
    {
        c=tolower(c);
    }
    for(char& c : category2)
    {
        c=tolower(c);
    }
    for(char& c : category3)
    {
        c=tolower(c);
    }
    for(char& c : keeper)
    {
        c=tolower(c);
    }
    for(char& c : dietary)
    {
        c=tolower(c);
    }

    if(category2=="none" && category3=="none")
    {
        for(int i=0;i<num;i++)
        {
            if((animals[i]->getCategory()==category) && (animals[i]->getHealthDetails().getKeeperDetails()==keeper) && (animals[i]->getHealthDetails().getDietaryConditions()==dietary))
            {
                cout<<"----------Animal "<<counter+1<<"----------"<<endl;
                animals[i]->displayAnimal();
                cout<<endl;
                counter++;
            }
        }
    }
    else if(category3=="none")
    {
        for(int i=0;i<num;i++)
        {
            if((animals[i]->getCategory()==category) && (animals[i]->getHealthDetails().getCategory()==category2) && (animals[i]->getHealthDetails().getKeeperDetails()==keeper) && (animals[i]->getHealthDetails().getDietaryConditions()==dietary))
            {
                cout<<"----------Animal "<<counter+1<<"----------"<<endl;
                animals[i]->displayAnimal();
                cout<<endl;
                counter++;
            }
        }
    }
    else if(category2=="none")
    {
        for(int i=0;i<num;i++)
        {
            if((animals[i]->getCategory()==category) && (animals[i]->getHabitatDetails().getCategory()==category3) && (animals[i]->getHealthDetails().getKeeperDetails()==keeper) && (animals[i]->getHealthDetails().getDietaryConditions()==dietary))
            {
                cout<<"----------Animal "<<counter+1<<"----------"<<endl;
                animals[i]->displayAnimal();
                cout<<endl;
                counter++;
            }
        }
    }
    else
    {
        for(int i=0;i<num;i++)
        {
            if((animals[i]->getCategory()==category) && (animals[i]->getHealthDetails().getCategory()==category2) && (animals[i]->getHabitatDetails().getCategory()==category3) && (animals[i]->getHealthDetails().getKeeperDetails()==keeper) && (animals[i]->getHealthDetails().getDietaryConditions()==dietary))
            {
                cout<<"----------Animal "<<counter+1<<"----------"<<endl;
                animals[i]->displayAnimal();
                cout<<endl;
                counter++;
            }
        }
    }

    if(counter==0)
    {
        cout<<"No Animals found in this category"<<endl;
    }
}

void Animal::listSickAnimalByCategory(Animal* animals[], int& num, string category)
{
    int counter=0;
    for(char& c : category)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getCategory()==category && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
        else if(animals[i]->getHealthDetails().getCategory()==category && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
        else if(animals[i]->getHabitatDetails().getCategory()==category && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Sick Animals found in this category"<<endl;
    }
}

void Animal::listSickAnimalByAge(Animal* animals[], int& num, int tempage)
{
    int counter=0;

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getAge()==tempage && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Sick Animals found in this category"<<endl;
    }
}

void Animal::listSickAnimalByGender(Animal* animals[], int& num, string tempgender)
{
    int counter=0;
    for(char& c : tempgender)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getGender()==tempgender && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Sick Animals found in this category"<<endl;
    }
}

void Animal::listSickAnimalByLocation(Animal* animals[], int& num, string templocation)
{
    int counter=0;
    for(char& c : templocation)
    {
        c=tolower(c);
    }

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getHabitatDetails().getLocationOfCell()==templocation && animals[i]->getHealthDetails().getStatus()==0)
        {
            cout<<"----------Animal "<<counter+1<<"----------"<<endl;
            animals[i]->displayAnimal();
            cout<<endl;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"No Sick Animals found in this category"<<endl;
    }
}

void Animal::ListSickAnimalsBetweenDates(Animal* animals[], int& num, string tempdate)
{
int counter=0;
    string startday;
    string startmonth;
    string startyear;
    string todayday="7";
    string todaymonth="7";
    string todayyear="2023";
    string objectdate;
    string objectday;
    string objectmonth;
    string objectyear;

    for(int i=0;i<=1;i++)
    {
        startday=startday+tempdate[i];
    }
    for(int i=3;i<=4;i++)
    {
        startmonth=startmonth+tempdate[i];
    }

    for(int i=6;i<=9;i++)
    {
        startyear=startyear+tempdate[i];
    }

    for(int i=0;i<num;i++)
    {
        cout<<"----------Animal "<<counter+1<<"----------"<<endl;
        objectdate=animals[i]->getHabitatDetails().getBirthDate();
        for(int i=0;i<=1;i++)
        {
            objectday=objectday+objectdate[i];
        }
        for(int i=3;i<=4;i++)
        {
            objectmonth=objectmonth+objectdate[i];
        }

        for(int i=6;i<=9;i++)
        {
            objectyear=objectyear+objectdate[i];
        }

        if(objectyear>startyear && objectyear<todayyear && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectyear==todayyear && objectmonth>startmonth && objectmonth<todaymonth && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectyear==todayyear && objectmonth==startmonth && objectmonth==todaymonth && objectday>startday && objectday<todayday && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear>startyear &&  objectmonth<todaymonth && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectmonth==startmonth && objectday>=startday && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==todayyear && objectmonth==todaymonth && objectday<=todayday && animals[i]->getHealthDetails().getStatus()==0)
        {
            animals[i]->displayAnimal();
            counter++;
        }
    }
    cout<<"Total number of sick animals born between the dates are: "<<counter<<endl;
    if(counter==0)
    {
        cout<<"No Animals found between given dates"<<endl;
    }
}

void Animal::ListAnimalsBornBetweenDate(Animal* animals[], int& num, string tempdate)
{
    int counter=0;
    string startday;
    string startmonth;
    string startyear;
    string todayday="7";
    string todaymonth="7";
    string todayyear="2023";
    string objectdate;
    string objectday;
    string objectmonth;
    string objectyear;

    for(int i=0;i<=1;i++)
    {
        startday=startday+tempdate[i];
    }
    for(int i=3;i<=4;i++)
    {
        startmonth=startmonth+tempdate[i];
    }

    for(int i=6;i<=9;i++)
    {
        startyear=startyear+tempdate[i];
    }

    for(int i=0;i<num;i++)
    {
        cout<<"----------Animal "<<counter+1<<"----------"<<endl;
        objectdate=animals[i]->getHabitatDetails().getBirthDate();
        for(int i=0;i<=1;i++)
        {
            objectday=objectday+objectdate[i];
        }
        for(int i=3;i<=4;i++)
        {
            objectmonth=objectmonth+objectdate[i];
        }

        for(int i=6;i<=9;i++)
        {
            objectyear=objectyear+objectdate[i];
        }

        if(objectyear>startyear && objectyear<todayyear)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectyear==todayyear && objectmonth>startmonth && objectmonth<todaymonth)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectyear==todayyear && objectmonth==startmonth && objectmonth==todaymonth && objectday>startday && objectday<todayday)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear>startyear &&  objectmonth<todaymonth)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==startyear && objectmonth==startmonth && objectday>=startday)
        {
            animals[i]->displayAnimal();
            counter++;
        }
        else if(objectyear==todayyear && objectmonth==todaymonth && objectday<=todayday)
        {
            animals[i]->displayAnimal();
            counter++;
        }
    }
    cout<<"Total number of animals born between the dates are: "<<counter<<endl;
    if(counter==0)
    {
        cout<<"No Animals found between given dates"<<endl;
    }
}

void Animal::listFequencyOfSickAnimals(Animal* animals[], int& num)
{
    int counter=0;

    for(int i=0;i<num;i++)
    {
        if(animals[i]->getHealthDetails().getStatus()==0)
        {
            counter++;
        }
    }

    cout<<"Number of Animals that have been reported sick: "<<counter<<endl;
}

void Animal::destroyAllRecords(Animal* animals[], int& num)
{
    for(int i=0;i<num;i++)
    {
        delete animals[i];
    }
    num=0;
    cout<<"All records of animals have been destroyed!!!\n";
}
