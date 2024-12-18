#include "Dog.hpp"

Dog::Dog()
{
    type = "dog";
}

Dog::Dog(const Dog& dog)
{
    type = dog.type;
}

Dog& Dog::operator=(const Dog& dog)
{
    type =dog.type;
    return *this;
}


void Dog::makeSound()const
{
    std::cout<<"haw haw\n";
}