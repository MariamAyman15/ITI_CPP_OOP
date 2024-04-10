#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Base class
class MaterialObject {
public:
    virtual void display() = 0;
};

// Non-living things
class NonLivingThing : public MaterialObject {
public:
    virtual void display() = 0;
};

class Rock : public NonLivingThing {
public:
    void display() {
        cout << "I am a rock!" << endl;
    }
};

class Air : public NonLivingThing {
public:
    void display() {
        cout << "I am the air!" << endl;
    }
};

// Living things
class LivingThing : public MaterialObject {
protected:
    int age;
public:
    LivingThing() : age(0) {}
    void setAge(int age) { this->age = age; }
    virtual void display() = 0;
};

// Plants
class Plant : public LivingThing {
protected:
    string name;
public:
    Plant(string name) : name(name) {}
    void display() override {
        cout << "I am a plant named " << name << endl;
        cout << "I am " << age << " years old." << endl;
    }
};

// Animals
class Animal : public LivingThing {
protected:
    string name;
public:
    Animal(string name) : name(name) {}
    virtual void display() = 0;
};

// Mammals
class Mammal : public Animal {
public:
    Mammal(string name) : Animal(name) {}
    void display() override {
        cout << "I am a mammal named " << name << endl;
        cout << "I am " << age << " years old." << endl;
    }
};

// Humans
class Human : public Mammal {
public:
    Human(string name) : Mammal(name) {}
    virtual void display() = 0;
};

class Dentist : public Human {
public:
    Dentist(string name) : Human(name) {}
    void display() override {
        cout << "I am a dentist named " << name << endl;
        Mammal::display();
    }
};

class Shopkeeper : public Human {
public:
    Shopkeeper(string name) : Human(name) {}
    void display() override {
        cout << "I am a shopkeeper named " << name << endl;
        Mammal::display();
    }
};

class Artist : public Human {
public:
    Artist(string name) : Human(name) {}
    void display() override {
        cout << "I am an artist named " << name << endl;
        Mammal::display();
    }
};

int main() {
    // Map to store all objects
    map<string, MaterialObject*> objs;

    // Add some non-living things
    objs["rock"] = new Rock();
    objs["air"] = new Air();

    // Add some living things
    objs["rose"] = new Plant("Rose");
    objs["lily"] = new Plant("Lily");

    objs["cat"] = new Mammal("Cat");
    objs["dog"] = new Mammal("Dog");

    objs["john"] = new Dentist("John");
    objs["jane"] = new Shopkeeper("Jane");
    objs["bob"] = new Artist("Bob");

    // Set ages
    objs["rose"]->setAge(2);
    objs["rose"].setAge(2);
    objs["cat"]->setAge(3);
    objs["john"]->setAge(35);

    // Display all objects
    for (auto& obj : objs) {
        obj.second->display();
    }
}
