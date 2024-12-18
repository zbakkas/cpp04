#include "Cat.hpp"


Cat::Cat()
{
    type = "cat";
}

Cat::Cat(const Cat& cat)
{
    type=cat.type;
}
Cat & Cat::operator=(const Cat& cat)
{
    type =cat.type;
    return *this;
}
Cat::~Cat()
{

}


void Cat::makeSound()const
{
    std::cout<<"maw maw\n";
}