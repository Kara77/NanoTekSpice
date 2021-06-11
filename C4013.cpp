/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4013 cpp
*/

#include "C4013.hpp"

C4013::C4013()
{
}

C4013::~C4013()
{
}

nts::Tristate C4013::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4013::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4013::dump() const
{

}