// Engimon.hpp
#ifndef ENGIMON_HPP
#define ENGIMON_HPP
#include "../Skill/Skill.hpp"
#include <iostream>
#include <string>

using namespace std;

class Engimon {
  public:
    // ctor, cctor, dtor, operator
    Engimon();
    Engimon(string name, string* parentname, string* parentspecies, string* element, int num_skill);
    Engimon(const Engimon&);
    virtual ~Engimon();
    Engimon& operator=(const Engimon&);
    
    // getter & setter
    string getName();
    void setName(string name);
    string* getParentName();
    void setParentName(string parent1, string parent2);
    string* getParentSpecies();
    void setParentSpecies(string species1, string species2);
    // Skill* getSkill();
    // void setSkill(Skill skill, int idx);
    string* getElements();
    void setElements(string element1, int i);
    int getLevel();
    void setLevel(int level);
    int getExperience();
    void setExperience(int experience);
    int getCumulativeExperience(); // cek di main
    void setCumulativeExperience(int cumulative_experience);
    // int getNumSkill();
    // void setNumSkill(int num);
    int getX();
    int getY();
    void setCoordinate(int x, int y);
    bool getActive();
    void setActive(bool active);

    // other methods 
    void levelUp(); // cek di main
    virtual void interact();
    virtual void printInfo();
    
    // hapus engimon di main
    // cek posisi di class map ya :)

  private:
    string name;
    string* parent_name;
    string* parent_species;
    int num_skill;
    // Skill* skills; // maksimal 4
    string* elements; // bisa lebih dari 1
    int level;
    int experience;
    int cumulative_experience;
    int x;
    int y;
    bool active;
    static int max_num_of_skills;
    static int max_cum_experience;
};

#endif