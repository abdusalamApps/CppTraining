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
    Dog dog{"Reko", 5};
    std::cout << dog;
    return 0;
}
