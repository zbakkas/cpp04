#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal& animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    type = animal.type;
}

Animal& Animal::operator=(const Animal& animal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    type = animal.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}


std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout<<"no sound\n";
}