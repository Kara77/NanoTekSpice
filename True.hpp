/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** True hpp
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include <map>
#include "IComponent.hpp"


class True : public nts::IComponent {
	
    public:
		True(std::string name, nts::Tristate value = nts::TRUE);
		~True();
        
        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;
	
    protected:
        std::string _name;
        nts::Tristate _value;
        std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;
	
    private:
};

#endif /* !INPUT_HPP_ */
