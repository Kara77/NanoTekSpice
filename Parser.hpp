/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** parser hpp
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>
#include <unordered_map>
#include <map>
#include <utility>
#include "Output.hpp"
#include "IComponent.hpp"

class Parser {
    
    public:
        Parser();
        ~Parser();

        void read_my_file(std::ifstream *file, char *argv[], std::string user_command);
        void set_my_input();
        void set_my_clock(std::string user_command);
        void display_result();
        std::vector <Output *> getOutput() const;
        int getNumber() const;

        std::map<std::size_t, std::pair<nts::IComponent &, std::size_t>> _my_links;

    protected:
        std::unordered_map<std::string, nts::IComponent*> _all_component;
        std::size_t _found_space;
        std::size_t _found_endline;
        std::size_t _found_last_space;
        std::size_t _found_colon;
        std::size_t _found_second_colon;
        std::size_t _found_equal;
        std::vector <Output *>_all_output;
        std::string _before_space;
        std::string _after_space;
        std::string _before_colon;
        std::string _after_colon;
        std::string _before_second_colon;
        std::string _after_second_colon;
        std::string _before_equal;
        std::string _after_equal;
        std::string _my_char;
        std::string _line;
        int _i = 2;
        int _j = 2;

    private:
};

#endif /* !PARSER_HPP_ */
