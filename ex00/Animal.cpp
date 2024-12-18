#include "Animal.hpp"

Animal::Animal()
{

}
Animal::Animal(const Animal& animal)
{
    type = animal.type;
}

Animal& Animal::operator=(const Animal& animal)
{
    type = animal.type;
    return *this;
}

Animal::~Animal()
{

}


std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout<<"no sound\n";
}