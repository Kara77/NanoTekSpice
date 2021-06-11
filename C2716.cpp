/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C2716 cpp
*/

#include "C2716.hpp"

C2716::C2716()
{
}

C2716::~C2716()
{
}

nts::Tristate C2716::compute(std::size_t pin)
{
    return (nts::TRUE);
}

void C2716::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C2716::dump() const
{

}