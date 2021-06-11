/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4013 cpp
*/

#include "C4017.hpp"

C4017::C4017()
{
}

C4017::~C4017()
{
}

nts::Tristate C4017::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4017::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4017::dump() const
{

}