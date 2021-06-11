/*
** EPITECH PROJECT, 2019
** Nano
** File description:
** main cpp
*/

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cstddef>
#include <vector>
#include <utility>
#include <map>
#include "Parser.hpp"
#include "Input.hpp"
#include "Output.hpp"
#include "Clock.hpp"
#include "True.hpp"
#include "False.hpp"
#include "C4001.hpp"
#include "C4008.hpp"
#include "C4011.hpp"
#include "C4013.hpp"
#include "C4017.hpp"
#include "C4030.hpp"
#include "C4040.hpp"
#include "C4069.hpp"
#include "C4071.hpp"
#include "C4081.hpp"
#include "C4094.hpp"
#include "C4514.hpp"
#include "C4081.hpp"

int main(int argc, char *argv[])
{
    std::string modify_argv;
    Parser my_parser;
    std::string user_command;
    std::vector <Output *> all_output;

    std::ifstream file(argv[1]);
	if (file)
		my_parser.read_my_file(&file, argv, user_command);
    while (std::cin) {
        printf("> ");
        std::cin >> user_command;
        if (user_command == "exit")
            exit(EXIT_SUCCESS);
        else if (user_command == "display")
            for (auto i : all_output = my_parser.getOutput())
                std::cout << i->_name << "=" << i->compute() << std::endl;
        else if (user_command == "simulate")
            my_parser.read_my_file(&file, argv, user_command);
    }
    return (0);
}