/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** C2716.hpp
*/

#ifndef C2716_HPP_
#define C2716_HPP_

#include <map>
#include "IComponent.hpp"

class C2716 : public nts::IComponent {
	
	public:
		C2716();
		~C2716();

        nts::Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
        void dump() const override;

	protected:
		std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _my_links;
	
	private:
};

#endif /* !C2716_HPP_ */
