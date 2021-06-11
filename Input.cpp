/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Input cpp
*/

#include "Input.hpp"

Input::Input(std::string name, nts::Tristate value): _name(name), _value(value)
{
}

Input::~Input()
{
}

nts::Tristate Input::compute(std::size_t pin)
{
    return (_value);
}

void Input::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void Input::dump() const
{

}

std::string Input::getName() const
{
    return(_name);
}

void Input::setValue(nts::Tristate value)
{
    _value = value;
}


