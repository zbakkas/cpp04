#include "Cat.hpp"


Cat::Cat()
{
     std::cout << "cat constructor called" << std::endl;
    type = "cat";
    brain = new Brain();
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    type=cat.type;
    brain = new Brain();
}
Cat & Cat::operator=(const Cat& cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    type =cat.type;
    brain = new Brain();
    return *this;
}
Cat::~Cat()
{
     std::cout << "Cat destructor called" << std::endl;
     delete brain;
}


void Cat::makeSound()const
{
    std::cout<<"maw maw\n";
}