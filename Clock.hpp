/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** Clock hpp
*/

#ifndef CLOCK_HPP_
#define CLOCK_HPP_

#include <map>
#include "IComponent.hpp"

class Clock : public nts::IComponent {
	
    public:
		Clock(std::string name, nts::Tristate value = nts::FALSE);
		~Clock();

		nts::Tristate inverse_state(nts::Tristate state);
		nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;
		nts::Tristate getValue() const;
		std::string getName() const;
		void setValue(nts::Tristate value);

	protected:
		std::string _name;
		nts::Tristate _value;
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;

	private:
};

#endif /* !CLOCK_HPP_ */
