#pragma once
#ifndef FLOATCONVERTER_H
#define FLOATCONVERTER_H


#include <sstream>
class FloatConverter
{
private:
	union U32 {
		float FLOAT;
		uint32_t HEX;
	};

	union U64 {
		double DOUBLE;
		uint64_t HEX;
	};
public:
	static uint32_t float_to_uint(float inp);
	static uint64_t double_to_uint(double inp);

	static float uint_to_float(uint32_t str);
	static double uint_to_double(uint64_t str);

	static float uint_str_to_float(std::string str);
	static double uint_str_to_double(std::string str);

	static std::string float_to_uint_str(float inp);
	static std::string double_to_uint_str(double inp);
};

#endif // !FLOATCONVERTER_H