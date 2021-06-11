/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Input hpp
*/

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include <map>
#include "IComponent.hpp"


class Input : public nts::IComponent {
	
    public:
		Input(std::string _name, nts::Tristate value = nts::UNDEFINED);
		~Input();
        
        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;
        std::string getName() const;
        void setValue(nts::Tristate value);
	
    protected:
        nts::Tristate _value;
        std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;
        std::string _name;
	
    private:
};

#endif /* !INPUT_HPP_ */
