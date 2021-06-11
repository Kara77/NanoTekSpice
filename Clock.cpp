/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Clock cpp
*/

#include "Clock.hpp"

Clock::Clock(std::string name, nts::Tristate value): _name(name), _value(value)
{
}

Clock::~Clock()
{
}

nts::Tristate Clock::inverse_state(nts::Tristate state)
{
    if (state == nts::FALSE) {
        _value = nts::TRUE;
        return (nts::TRUE);
    } else if (state == nts::TRUE) {
        _value = nts::FALSE;
        return (nts::FALSE);
    } else
        _value = nts::UNDEFINED;
        return (nts::UNDEFINED);
}

nts::Tristate Clock::compute(std::size_t pin)
{
    
    return (nts::TRUE);
}

void Clock::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{

}

void Clock::dump() const
{

}

nts::Tristate Clock::getValue() const
{
    return (_value);
}

std::string Clock::getName() const
{
    return (_name);
}

void Clock::setValue(nts::Tristate value)
{
    _value = value;
}