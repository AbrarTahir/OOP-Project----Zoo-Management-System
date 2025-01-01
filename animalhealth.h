#ifndef animalhealth_H
#define animalhealth_H

class AnimalHealth
{
private:
    bool status;
    std::string keeper_details;
    std::string dietary_conditions;
    std::string food_supply_details;
    std::string category;

public:
    AnimalHealth(bool=true, std::string="", std::string="", std::string="", std::string="");
    AnimalHealth(AnimalHealth &obj);
    ~AnimalHealth();

    void setStatus(bool);
    void setKeeperDetails(std::string);
    void setDietaryConditions(std::string);
    void setFoodSupplyDetails(std::string);
    void setCategory(std::string);

    bool getStatus();
    std::string getKeeperDetails();
    std::string getDietaryConditions();
    std::string getFoodSupplyDetails();
    std::string getCategory();

    void displayHealthDetails();
    void addAnimalHealth();
};

#endif // animalhealth_H
