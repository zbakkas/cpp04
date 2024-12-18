#include "Cat.hpp"


Cat::Cat()
{
     std::cout << "cat constructor called" << std::endl;
    type = "cat";
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    type=cat.type;
}
Cat & Cat::operator=(const Cat& cat)
{
        std::cout << "Cat assignation operator called" << std::endl;
    type =cat.type;
    return *this;
}
Cat::~Cat()
{
     std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound()const
{
    std::cout<<"maw maw\n";
}