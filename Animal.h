//
// Created by Abdusalam Yabrak on 2020-12-29.
//

#ifndef TRAINING_ANIMAL_H
#define TRAINING_ANIMAL_H


#include <string>

class Animal {
public:
    Animal(std::string name, int age) : name{name}, age{age} {}

    virtual void makeSound() = 0;

    virtual std::string getSound() const = 0;

    std::string getName() const {
        return this->name;
    }

    int getAge() const {
        return this->age;
    }

private:
    std::string name;
    int age;
};


#endif //TRAINING_ANIMAL_H
