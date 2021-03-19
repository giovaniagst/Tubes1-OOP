// Engimon.hpp
#ifndef ENGIMON_HPP
#define ENGIMON_HPP

#include <iostream>
using namespace std;

class Engimon {
  public:
    // ctor, cctor, dtor, operator
    Engimon();
    Engimon(string name, string* parentname, string* parentspecies, Skill* skill, string* element,
    int level, int experience, int cumulative_experience, int num_skill);
    Engimon(const Engimon&);
    virtual ~Engimon();
    Engimon& operator=(const Engimon&);
    
    // getter & setter
    string getName();
    void setName(string name);
    string* getParentName();
    void setParentName(string parent1, string parent2);
    Skill* getSkill();
    void setSkill(SKill skill, int idx);
    string* getElements();
    void setElements(string element1, int i);
    int getLevel();
    void setLevel(int level);
    int getExperience();
    void setExperience(int experience);
    int getCumulativeExperience();
    void setCumulativeExperience(int cumulative_experience);
    int getNumSkill();
    void setNumSkill(int num);

  private:
    string name;
    string* parent_name;
    string* parent_species;
    Skill* skills; // maksimal 4
    string* elements; // bisa lebih dari 1
    int level;
    int experience;
    int cumulative_experience;
    int num_skill;
    static int max_num_of_skills;
};

#endif