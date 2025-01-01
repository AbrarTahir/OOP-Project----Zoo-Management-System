#ifndef habitat_H
#define habitat_H

class Habitat
{
private:
    std::string habitat_history;
    std::string birth_date;
    std::string category;
    std::string cell_id;
    float area_of_cell;
    std::string location_of_cell;

public:
    Habitat(std::string="", std::string="", std::string="", std::string="", float=0, std::string="");
    Habitat(Habitat &obj);
    ~Habitat();

    void setHabitatHistory(std::string);
    void setBirthDate(std::string);
    void setCategory(std::string);
    void setCellId(std::string);
    void setAreaOfCell(float);
    void setLocationOfCell(std::string);

    std::string getHabitatHistory();
    std::string getBirthDate();
    std::string getCategory();
    std::string getCellId();
    float getAreaOfCell();
    std::string getLocationOfCell();

    void displayHabitat();
    void addHabitat();
};

#endif // habitat_H
