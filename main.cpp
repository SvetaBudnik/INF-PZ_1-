#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include "FloatConverter.h"


int menu() {
	std::cout << "Enter a number:\n[1] Float to hex\n[2] Hex to float\n[3] Double to hex\n[4] Hex to double\n[5] Exit\n";
	int inp;
	if (!(std::cin >> inp))
		inp = 0;
	return inp;
}

int main() {
	int inp;
	while ((inp = menu()) != 5) {
		switch (inp)
		{
		case 1:
		{
			float f_inp;
			std::cout << "Enter float number in exponential form" << std::endl;
			if (std::cin >> std::scientific >> f_inp)
			{
				std::cout << FloatConverter::float_to_uint_str(f_inp) << std::endl;
			}
			else
			{
				std::cout << "Wrong input" << std::endl;
			}
			break;
		}
		case 2:
		{
			uint32_t hex_inp;
			std::cout << "Enter float hexadecimal representation" << std::endl;
			if (std::cin >> std::hex >> hex_inp)
				std::cout << std::scientific << FloatConverter::uint_to_float(hex_inp) << std::endl;
			else
				std::cout << "Wrong input" << std::endl;
			break;
		}
		case 3:
		{
			double f_inp;
			std::cout << "Enter double number in exponential form" << std::endl;
			if (std::cin >> f_inp) {
				std::cout <<  FloatConverter::double_to_uint_str(f_inp) << std::endl;
			}
			else {
				std::cout << "Wrong input" << std::endl;
			}
			break;
		}
		case 4:
		{
			uint64_t hex_inp;
			std::cout << "Enter double hexadecimal representation" << std::endl;
			if (std::cin >> std::hex >> hex_inp)
				std::cout << std::setprecision(std::numeric_limits<long double>::digits10 + 1) 
				<< std::scientific 
				<< FloatConverter::uint_to_double(hex_inp) 
				<< std::endl;
			else
				std::cout << "Wrong input" << std::endl;
			break;
		}
		default:
			std::cout << "Wrong input" << std::endl;
			break;
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}