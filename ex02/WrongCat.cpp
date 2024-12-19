


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wrongcat)
{
    std::cout << "Wrongcat copy constructor called" << std::endl;
    type=wrongcat.type;
}
WrongCat & WrongCat::operator=(const WrongCat& wrongcat)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    type =wrongcat.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}


void WrongCat::makeSound()const
{
    std::cout<<"maw maw\n";
}