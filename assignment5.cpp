#include <iostream>
#include <string>
#include "assignment5.h"
#include "animal.h"
#include "animalhealth.h"
#include "habitat.h"
#include "amphibians.h"
#include "birds.h"
#include "fish.h"
#include "invertebrates.h"
#include "mammals.h"
#include "reptiles.h"

using namespace std;

const int MAX_ANIMALS = 100;

void task()
{
    Animal* animals[MAX_ANIMALS];
    int numAnimals=0;

    int choice=0;
    int loop=1;
    do
    {
        cout<<"Select an option to execute a task\n(1)Add an animal\n(2)Delete an animal by ID\n(3)Find an animal by ID\n(4)Find all animals within particular location\n(5)List animals with specified category\n(6)List all animals with a specified keeper\n(7)List all animals with specified dietary conditions\n(8)List all animals with a combination of category, keeper, or dietary conditions\n(9)Display animals that have been reported sick based on category\n(10)Display animals that have been reported sick based on age\n(11)Display animals that have been reported sick based on gender\n(12)Display animals that have been reported sick based on location\n(13)Display animals that have been reported sick Between today and given date\n(14)Frequency of animals reported sick\n(15)Destroy all records for animals\n(16)Number of animals born between today and any given date\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                int choice2=0;
                cout<<"What Animal would you like to add?\n(1)Amphibians\n(2)Birds\n(3)Fish\n(4)Invertebrates\n(5)Mammals\n(6)Reptiles\n";
                cin>>choice2;

                switch(choice2)
                {
                case 1:
                    {
                        animals[numAnimals]=new Amphibians();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                case 2:
                    {
                        animals[numAnimals]=new Birds();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                case 3:
                    {
                        animals[numAnimals]=new Fish();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                case 4:
                    {
                        animals[numAnimals]=new Invertebrates();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                case 5:
                    {
                        animals[numAnimals]=new Mammals();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                case 6:
                    {
                        animals[numAnimals]=new Reptiles();
                        animals[numAnimals]->addAnimal();
                        animals[numAnimals]->getHealthDetails().addAnimalHealth();
                        animals[numAnimals]->getHabitatDetails().addHabitat();

                        cout<<"Animal has been successfully added to the database!!!\n";
                        numAnimals++;
                    }
                    break;
                default:
                    {
                        cout<<"Invalid Choice. Please try again\n";
                    }
                }
            }
            break;
        case 2:
            {
                string tempid;
                cout<<"Enter the id of the animal that you want to delete: ";
                cin>>tempid;

                animals[numAnimals]->deleteAnimal(animals, numAnimals, tempid);
            }
            break;
        case 3:
            {
                string tempid;
                cout<<"Enter the id of the animal that you want to find: ";
                cin>>tempid;

                animals[numAnimals]->findAnimalByID(animals, numAnimals, tempid);
            }
            break;
        case 4:
            {
                string templocation;
                cout<<"Enter the location of the animal that you want to find: ";
                cin>>templocation;

                animals[numAnimals]->findAnimalByLocation(animals, numAnimals, templocation);
            }
            break;
        case 5:
            {
                int choice3=0;

                cout<<"How many categories of animals would you like to display?\n(1)1 Category(Animal Category)\n(2)2 Categories(Animal and Animal Health)\n(3)3 Categories(Animal, Animal Health and Habitat\n";
                cin>>choice;

                switch(choice3)
                {
                case 1:
                    {
                        string tempcategory;

                        cout<<"Enter the category of Animal: ";
                        cin>>tempcategory;

                        while(tempcategory!="Amphibians" && tempcategory!="amphibians" && tempcategory!="Birds" && tempcategory!="birds" && tempcategory!="Fish" && tempcategory!="fish" && tempcategory!="Invertebrates" && tempcategory!="invertebrates" && tempcategory!="Mammals" && tempcategory!="mammals" && tempcategory!="Reptiles" && tempcategory!="reptile")
                        {
                            cout<<"Invalid Category. Enter a valid category of Animal: ";
                            cin>>tempcategory;
                        }

                        animals[numAnimals]->listByCategory(animals, numAnimals, tempcategory);
                    }
                    break;
                case 2:
                    {
                        string tempcategory;
                        string tempcategory2;

                        cout<<"Enter the category of Animal: ";
                        cin>>tempcategory;
                        while(tempcategory!="Amphibians" && tempcategory!="amphibians" && tempcategory!="Birds" && tempcategory!="birds" && tempcategory!="Fish" && tempcategory!="fish" && tempcategory!="Invertebrates" && tempcategory!="invertebrates" && tempcategory!="Mammals" && tempcategory!="mammals" && tempcategory!="Reptiles" && tempcategory!="reptile")
                        {
                            cout<<"Invalid Category. Enter a valid category of Animal: ";
                            cin>>tempcategory;
                        }

                        cout<<"Enter the category of Animal Health: ";
                        cin>>tempcategory2;
                        while(tempcategory2!="Cannibals" && tempcategory2!="Carnivore" &&tempcategory2!="Herbivore" &&tempcategory2!="Omnivore" &&tempcategory2!="Scavengers" &&tempcategory2!="cannibals" &&tempcategory2!="carnivore" &&tempcategory2!="herbivore" &&tempcategory2!="omnivore" &&tempcategory2!="scavengers")
                        {
                           cout<<"Invalid category! Please enter a valid category: ";
                           cin>>tempcategory2;
                        }

                        animals[numAnimals]->listByCategory(animals, numAnimals, tempcategory, tempcategory2);
                    }
                    break;
                case 3:
                    {
                        string tempcategory;
                        string tempcategory2;
                        string tempcategory3;

                        cout<<"Enter the category of Animal: ";
                        cin>>tempcategory;
                        while(tempcategory!="Amphibians" && tempcategory!="amphibians" && tempcategory!="Birds" && tempcategory!="birds" && tempcategory!="Fish" && tempcategory!="fish" && tempcategory!="Invertebrates" && tempcategory!="invertebrates" && tempcategory!="Mammals" && tempcategory!="mammals" && tempcategory!="Reptiles" && tempcategory!="reptile")
                        {
                            cout<<"Invalid Category. Enter a valid category of Animal: ";
                            cin>>tempcategory;
                        }

                        cout<<"Enter the category of Animal Health: ";
                        cin>>tempcategory2;
                        while(tempcategory2!="Cannibals" && tempcategory2!="Carnivore" &&tempcategory2!="Herbivore" &&tempcategory2!="Omnivore" &&tempcategory2!="Scavengers" &&tempcategory2!="cannibals" &&tempcategory2!="carnivore" &&tempcategory2!="herbivore" &&tempcategory2!="omnivore" &&tempcategory2!="scavengers")
                        {
                           cout<<"Invalid category! Please enter a valid category of Animal Health: ";
                           cin>>tempcategory2;
                        }

                        cout<<"Enter the category of Habitat: ";
                        cin>>tempcategory3;
                        while(tempcategory3!="Endangered" && tempcategory3!="endangered" && tempcategory3!="Common" && tempcategory3!="common")
                        {
                            cout<<"Invalid category! Please enter a valid category of Habitat: ";
                            cin>>tempcategory3;
                        }

                        animals[numAnimals]->listByCategory(animals, numAnimals, tempcategory, tempcategory2, tempcategory3);
                    }
                    break;
                default:
                    {
                        cout<<"Invalid Choice. Please try again\n";
                    }
                }
            }
            break;
        case 6:
            {
                string tempkeeper;

                cin.ignore();
                cout<<"Enter the name of the keeper: ";
                getline(cin, tempkeeper);

                animals[numAnimals]->listByKeeper(animals, numAnimals, tempkeeper);
            }
            break;
        case 7:
            {
                string tempdietary;

                cin.ignore();
                cout<<"Enter the dietary conditions of the Animal: ";
                getline(cin, tempdietary);

                animals[numAnimals]->listByDietary(animals, numAnimals, tempdietary);
            }
            break;
        case 8:
            {
                string tempcategory;
                string tempcategory2;
                string tempcategory3;
                string tempkeeper;
                string tempdietary;

                cout<<"Enter the category of Animal: ";
                cin>>tempcategory;
                while(tempcategory!="Amphibians" && tempcategory!="amphibians" && tempcategory!="Birds" && tempcategory!="birds" && tempcategory!="Fish" && tempcategory!="fish" && tempcategory!="Invertebrates" && tempcategory!="invertebrates" && tempcategory!="Mammals" && tempcategory!="mammals" && tempcategory!="Reptiles" && tempcategory!="reptile")
                {
                    cout<<"Invalid Category. Enter a valid category of Animal: ";
                    cin>>tempcategory;
                }

                cout<<"Enter the category of Animal Health(If you do not want to enter this category enter 'none'): ";
                cin>>tempcategory2;
                while(tempcategory2!="None" && tempcategory2!="none" && tempcategory2!="Cannibals" && tempcategory2!="Carnivore" &&tempcategory2!="Herbivore" &&tempcategory2!="Omnivore" &&tempcategory2!="Scavengers" &&tempcategory2!="cannibals" &&tempcategory2!="carnivore" &&tempcategory2!="herbivore" &&tempcategory2!="omnivore" &&tempcategory2!="scavengers")
                {
                    cout<<"Invalid category! Please enter a valid category of Animal Health: ";
                    cin>>tempcategory2;
                }

                cout<<"Enter the category of Habitat(If you do not want to enter this category enter 'none'): ";
                cin>>tempcategory3;
                while(tempcategory3!="None" && tempcategory3!="none" && tempcategory3!="Endangered" && tempcategory3!="endangered" && tempcategory3!="Common" && tempcategory3!="common")
                {
                    cout<<"Invalid category! Please enter a valid category of Habitat: ";
                    cin>>tempcategory3;
                }

                cin.ignore();
                cout<<"Enter the name of the keeper: ";
                getline(cin, tempkeeper);

                cout<<"Enter the dietary conditions of the Animal: ";
                getline(cin, tempdietary);

                animals[numAnimals]->listAnimalsByConditions(animals, numAnimals, tempcategory, tempcategory2, tempcategory3, tempkeeper, tempdietary);
            }
            break;
        case 9:
            {
                string tempcategory;

                cout<<"Enter any category of the Animal: ";
                cin>>tempcategory;

                while(tempcategory!="Endangered" && tempcategory!="endangered" && tempcategory!="Common" && tempcategory!="common" && tempcategory!="Cannibals" && tempcategory!="Carnivore" && tempcategory!="Herbivore" && tempcategory!="Omnivore" && tempcategory!="Scavengers" && tempcategory!="cannibals" && tempcategory!="carnivore" && tempcategory!="herbivore" && tempcategory!="omnivore" && tempcategory!="scavengers" && tempcategory!="Amphibians" && tempcategory!="amphibians" && tempcategory!="Birds" && tempcategory!="birds" && tempcategory!="Fish" && tempcategory!="fish" && tempcategory!="Invertebrates" && tempcategory!="invertebrates" && tempcategory!="Mammals" && tempcategory!="mammals" && tempcategory!="Reptiles" && tempcategory!="reptile")
                {
                    cout<<"Invalid Category. Enter a valid category of Animal: ";
                    cin>>tempcategory;
                }

                animals[numAnimals]->listSickAnimalByCategory(animals, numAnimals, tempcategory);
            }
            break;
        case 10:
            {
                int tempage;

                cout<<"Enter the age of the Animal: ";
                cin>>tempage;

                animals[numAnimals]->listSickAnimalByAge(animals, numAnimals, tempage);

            }
            break;
        case 11:
            {
                string tempgender;

                cout<<"Enter gender of the Animal: ";
                cin>>tempgender;

                while(tempgender!="Male" && tempgender!="Female" && tempgender!="male" && tempgender!="female")
                {
                    cout<<"Invalid Gender! Please enter a valid Gender: ";
                    cin>>tempgender;
                }

                animals[numAnimals]->listSickAnimalByGender(animals, numAnimals, tempgender);
            }
            break;
        case 12:
            {
                string templocation;

                cin.ignore();
                cout<<"Enter the location of the Animal: ";
                getline(cin, templocation);

                animals[numAnimals]->listSickAnimalByLocation(animals, numAnimals, templocation);
            }
            break;
        case 13:
            {
                string tempdate;

                cin.ignore();
                cout<<"Enter the date that you want to start the search from in DD/MM/YYYY: ";
                getline(cin, tempdate);

                while(tempdate[2]!='/' && tempdate[5]!='/')
                {
                    cout<<"Invalid date format used. Please enter the date correctly: ";
                    getline(cin, tempdate);
                }
                animals[numAnimals]->ListSickAnimalsBetweenDates(animals, numAnimals, tempdate);
            }
            break;
        case 14:
            {
                cout<<"Displaying the frequency of sick Animals...\n";
                animals[numAnimals]->listFequencyOfSickAnimals(animals, numAnimals);
            }
            break;
        case 15:
            {
                int choice4=0;
                cout<<"Are you sure you want to destroy all records? Enter 1 for YES/Enter 0 for NO\n";
                cin>>choice4;

                if(choice4==1)
                {
                    cout<<"Destroying all records...\n";
                    animals[numAnimals]->destroyAllRecords(animals, numAnimals);
                }
                else
                {
                    cout<<"Exiting...\n";
                }
            }
            break;
        case 16:
            {
                string tempdate;

                cin.ignore();
                cout<<"Enter the date that you want to start the search from in DD/MM/YYYY: ";
                getline(cin, tempdate);

                while(tempdate[2]!='/' && tempdate[5]!='/')
                {
                    cout<<"Invalid date format used. Please enter the date correctly: ";
                    getline(cin, tempdate);
                }
                animals[numAnimals]->ListAnimalsBornBetweenDate(animals, numAnimals, tempdate);
            }
            break;
        default:
            {
                cout<<"Invalid Choice. Please try again\n";
            }
        }
        cout<<"Do you want to execute another task? If not press 0 to EXIT\n";
        cin>>loop;
    }
    while(loop!=0);
}
