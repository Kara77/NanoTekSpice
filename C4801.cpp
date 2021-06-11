/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4801 cpp
*/

#include "C4801.hpp"

C4801::C4801()
{
}

C4801::~C4801()
{
}

nts::Tristate C4801::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C4801::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4801::dump() const
{

}