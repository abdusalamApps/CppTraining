#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

std::ostream &operator<<(std::ostream &strm, const Animal &animal) {
    return strm << animal.getName() << " is " << animal.getAge() <<
                " years old" << ", and says " << animal.getSound() << "!\n";
}

int main() {
    Cat cat{"lucy", 3};
    std::cout << cat;
    std::string dogName = "Reko";
    Dog dog{dogName, 5};
    Dog dog1 = dog;
    std::cout << "dog1: " << dog1;
    std::cout << dog;
    return 0;
}
