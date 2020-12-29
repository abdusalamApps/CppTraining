//
// Created by Abdusalam Yabrak on 2020-12-29.
//

#ifndef TRAINING_CAT_H
#define TRAINING_CAT_H

#include <iostream>
#include "Animal.h"

class Cat : public Animal {
public:
    using Animal::Animal;

    void makeSound() override {
        std::cout << "Meow Meow!\n";
    }

    std::string getSound() const override  {
        return "Meow Meow";
    }
};


#endif //TRAINING_CAT_H
