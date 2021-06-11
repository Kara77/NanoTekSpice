/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C4030 cpp
*/

#include "C4030.hpp"

C4030::C4030()
{
}

C4030::~C4030()
{
}

nts::Tristate C4030::xor_gate(nts::Tristate a, nts::Tristate b)
{
    if (((a == nts::FALSE) && (b == nts::FALSE)) || ((a == nts::TRUE) && (b == nts::TRUE)))
        return (nts::FALSE);
    else if (((a == nts::TRUE) && (b == nts::FALSE)) || ((a == nts::FALSE) && (b == nts::TRUE)))
        return (nts::TRUE);
    else
        return (nts::UNDEFINED);
}

nts::Tristate C4030::compute(std::size_t pin)
{
    if (pin == 3) {
        return (xor_gate(_my_links[1].first->compute(_my_links[1].second), _my_links[2].first->compute(_my_links[2].second)));
    } else if (pin == 4) {
        return (xor_gate(_my_links[5].first->compute(_my_links[5].second), _my_links[6].first->compute(_my_links[6].second)));
    } else if (pin == 10) {
        return (xor_gate(_my_links[8].first->compute(_my_links[8].second), _my_links[9].first->compute(_my_links[9].second)));
    } else if (pin == 11) {
        return (xor_gate(_my_links[12].first->compute(_my_links[12].second), _my_links[13].first->compute(_my_links[13].second)));
    }
    return (nts::UNDEFINED);
}

void C4030::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
{
    _my_links[pin] = std::make_pair(&other, otherPin);
}

void C4030::dump() const
{

}