/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** False cpp
*/

#include "False.hpp"

False::False(std::string name, nts::Tristate value): _name(name), _value(nts::FALSE)
{
}

False::~False()
{
}

nts::Tristate False::compute(std::size_t pin)
{
    return (_value);
}

void False::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void False::dump() const
{

}