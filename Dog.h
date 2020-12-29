//
// Created by Abdusalam Yabrak on 2020-12-29.
//

#ifndef TRAINING_DOG_H
#define TRAINING_DOG_H

#include <iostream>
#include "Animal.h"
#include "string"


class Dog : public Animal {
public:
    using Animal::Animal;

    void makeSound() override {
        std::cout << "Woof woof!\n";
    }
    std::string getSound() const override  {
        return "Woof woof";
    }

};

#endif //TRAINING_DOG_H
