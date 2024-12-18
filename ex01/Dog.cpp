#include "Dog.hpp"

Dog::Dog()
{
     std::cout << "Dog constructor called" << std::endl;
    type = "dog";
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    type = dog.type;
}

Dog& Dog::operator=(const Dog& dog)
{
        std::cout << "Dog assignation operator called" << std::endl;
    type =dog.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound()const
{
    std::cout<<"haw haw\n";
}