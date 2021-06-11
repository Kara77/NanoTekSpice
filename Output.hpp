/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Output hpp
*/

#ifndef OUTPUT_HPP_
#define OUTPUT_HPP_

#include <map>
#include "IComponent.hpp"

class Output : public nts::IComponent {
	
    public:
		Output(std::string name);
		~Output();

        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;

        std::string _name;


	protected:
        std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;
	
    private:
};

#endif /* !OUTPUT_HPP_ */
