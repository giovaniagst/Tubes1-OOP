// Species.cpp
#include "Species.hpp"
#include <iostream>
#include <string>

using namespace std;

Charizard::Charizard(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Fire", ""} , numskill) {
    //
}

Charizard::Charizard(const Charizard& c) : Engimon(c.getName(), c.getParentName(), c.getParentSpecies(), c.getSkill(), {"Fire", ""}, c.getNumSkill()) {
    //
}

Charizard& Charizard::operator=(const Charizard& c) {
    Engimon::operator=(c);
    return *this;
}

void Charizard::interact() {
    cout << "[" << this->getName() << "]: 불타오르네" << endl;
}

Glaceon::Glaceon(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) : 
Engimon(name, parentname, parentspecies, skill, {"Ice", ""}, numskill) {
    //
}

Glaceon::Glaceon(const Glaceon& g) : Engimon(g.getName(), g.getParentName(), g.getParentSpecies(), g.getSkill(), {"Ice", ""}, g.getNumSkill()) {
    //
}

Glaceon& Glaceon::operator=(const Glaceon& g) {
    Engimon::operator=(g);
    return *this;
}

void Glaceon::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Glaceon" << endl;
}

Onix::Onix(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) : 
Engimon(name, parentname, parentspecies, skill, {"Ground", ""}, numskill) {
    //
}

Onix::Onix(const Onix& o) : Engimon(o.getName(), o.getParentName(), o.getParentSpecies(), o.getSkill(), {"Ground", ""}, o.getNumSkill()) {
    //
}

Onix& Onix::operator=(const Onix& o) {
    Engimon::operator=(o);
    return *this;
}

void Onix::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Onix" << endl;
}

Pikachu::Pikachu(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Electric", ""} , numskill) {
    //
}

Pikachu::Pikachu(const Pikachu& p) : Engimon(p.getName(), p.getParentName(), p.getParentSpecies(), p.getSkill(), {"Electric", ""}, p.getNumSkill()) {
    //
}

Pikachu& Pikachu::operator=(const Pikachu& p) {
    Engimon::operator=(p);
    return *this;
}

void Pikachu::interact() {
    cout << "[" << this->getName() << "]: pika pika pika pika" << endl;
}

Squirtle::Squirtle(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", ""} , numskill) {
    //
}

Squirtle::Squirtle(const Squirtle& s) : Engimon(s.getName(), s.getParentName(), s.getParentSpecies(), s.getSkill(), {"Water", ""}, s.getNumSkill()) {
    //
}

Squirtle& Squirtle::operator=(const Squirtle& s) {
    Engimon::operator=(s);
    return *this;
}

void Squirtle::interact() {
    cout << "[" << this->getName() << "]: splish splash" << endl;
}

Rotom::Rotom(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Fire", "Electric"} , numskill) {
    //
}

Rotom::Rotom(const Rotom& r) : Engimon(r.getName(), r.getParentName(), r.getParentSpecies(), r.getSkill(), {"Water", "Electric"}, r.getNumSkill()) {
    //
}

Rotom& Rotom::operator=(const Rotom& r) {
    Engimon::operator=(r);
    return *this;
}

void Rotom::interact() {
    cout << "[" << this->getName() << "]: i AM GOD Of ThuNDeR" << endl;
}


Wooper::Wooper(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", "Ground"} , numskill) {
    //
}

Wooper::Wooper(const Wooper& w) : Engimon(w.getName(), w.getParentName(), w.getParentSpecies(), w.getSkill(), {"Water", "Ground"}, w.getNumSkill()) {
    //
}

Wooper& Wooper::operator=(const Wooper& w) {
    Engimon::operator=(w);
    return *this;
}

void Wooper::interact() {
    cout << "[" << this->getName() << "]: woooPpPppSiiiE" << endl;
}

Cloyster::Cloyster(string name, string* parentname, string* parentspecies, Skill* skill, int numskill) :
Engimon(name, parentname, parentspecies, skill, {"Water", "Ice"} , numskill) {
    //
}

Cloyster::Cloyster(const Cloyster& c) : Engimon(c.getName(), c.getParentName(), c.getParentSpecies(), c.getSkill(), {"Water", "Ice"}, c.getNumSkill()) {
    //
}

Cloyster& Cloyster::operator=(const Cloyster& c) {
    Cloyster::operator=(c);
    return *this;
}

void Cloyster::interact() {
    cout << "[" << this->getName() << "]: bless me achoo" << endl;
}