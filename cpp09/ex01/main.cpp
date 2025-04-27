#include "RPN.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <list>
#include <string>

/**
 * @brief Check if the input string is valid
 *
 * @param str input of the user
 * @return true if the input is valid
 */
bool check_input(std::string str) {
	std::string allowed = "0123456789 +-*/";
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (allowed.find(*it) == std::string::npos)
			return false;
	}
	return true;
}

/**
 * @brief split the input string into a list of tokens
 *
 * @param input input of the user (already checked)
 * @return std::list<tok> list of tokens
 */
std::list<tok> split_to_list(const std::string& input) {
	std::istringstream iss(input);
	std::string token;
	std::list<tok> tokens;
	e_op op;
	int tmp;

	while (iss >> token) {
		op = NUM;
		tmp = 0;
		if (token == "*") {
			op = MUL;
		}
		else if (token == "/") {
			op = DIV;
		}
		else if (token == "+") {
			op = ADD;
		}
		else if (token == "-") {
			op = SUB;
		}
		else {
			op = NUM;
			tmp = std::strtol(token.c_str(), 0, 10);
		}
		tok to_push = {op, tmp};
		tokens.push_back(to_push);
	}
	return tokens;
}

/**
 * @brief Execute the RPN algorithm
 *
 * @param tokens list of tokens
 * @return true if the execution was successful
 */
bool exec_rpn(std::list<tok> tokens) {
	if (tokens.size() < 3) {
		std::cerr << CLR_RED << "Error:\tNot enough operands" << CLR_RESET << std::endl;
		return false;
	}

	std::list<int> numbers;

	while (!tokens.empty()) {
		tok current = tokens.front();
		tokens.pop_front();

		if (current.type == NUM) {
			numbers.push_back(current.value);
		}
		else if (current.type == ADD || current.type == SUB || current.type == MUL || current.type == DIV) {
			if (numbers.size() < 2) {
				std::cerr << CLR_RED << "Error:\tNot enough operands for operator" << CLR_RESET << std::endl;
				return false;
			}

			int b = numbers.back();
			numbers.pop_back();
			int a = numbers.back();
			numbers.pop_back();

			if (current.type == ADD)
				numbers.push_back(a + b);
			else if (current.type == SUB)
				numbers.push_back(a - b);
			else if (current.type == MUL)
				numbers.push_back(a * b);
			else if (current.type == DIV) {
				if (b == 0) {
					std::cerr << CLR_RED << "Error:\tDivision by zero" << CLR_RESET << std::endl;
					return false;
				}
				numbers.push_back(a / b);
			}
		}
		else {
			std::cerr << CLR_RED << "Error:\tInvalid token" << CLR_RESET << std::endl;
			return false;
		}
	}

	if (numbers.size() != 1) {
		std::cerr << CLR_RED << "Error:\tInvalid final stack state" << CLR_RESET << std::endl;
		return false;
	}

	std::cout << CLR_GREEN << "Result:\t" << numbers.back() << CLR_RESET << std::endl;
	return true;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << CLR_RED << "Usage:\t" << argv[0] << " <string>" << CLR_RESET << std::endl;
		return 1;
	}
	std::string input = argv[1];
	if (!check_input(input)) {
		std::cerr << CLR_RED << "Error:\tYour input can only have digits, spaces and the operators '+' '-' '*' '/'" << CLR_RESET << std::endl;
		return 1;
	} else {
		std::list<tok> tokens = split_to_list(input);
		exec_rpn(tokens);
	}
}

