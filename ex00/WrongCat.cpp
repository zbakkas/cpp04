


#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& wrongcat)
{
    type=wrongcat.type;
}
WrongCat & WrongCat::operator=(const WrongCat& wrongcat)
{
    type =wrongcat.type;
    return *this;
}
WrongCat::~WrongCat()
{

}


void WrongCat::makeSound()const
{
    std::cout<<"maw maw\n";
}