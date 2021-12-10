#include "FloatConverter.h"

uint32_t FloatConverter::float_to_uint(float inp)
{
	U32 hf{};
	hf.FLOAT = inp;
	return hf.HEX;
}

uint64_t FloatConverter::double_to_uint(double inp)
{
	U64 hf{};
	hf.DOUBLE = inp;
	return hf.HEX;
}

float FloatConverter::uint_to_float(uint32_t str)
{
	U32 hf{};
	hf.HEX = str;
	return hf.FLOAT;
}

double FloatConverter::uint_to_double(uint64_t str)
{
	U64 hf{};
	hf.HEX = str;
	return hf.DOUBLE;
}

float FloatConverter::uint_str_to_float(std::string str)
{
	std::stringstream ss;
	uint32_t hex_inp;
	ss << str;
	ss >> std::hex >> hex_inp;
	return uint_to_float(hex_inp);
}

double FloatConverter::uint_str_to_double(std::string str)
{
	std::stringstream ss;
	uint64_t hex_inp;
	ss << str;
	ss >> std::hex >> hex_inp;
	return uint_to_double(hex_inp);
}

std::string FloatConverter::float_to_uint_str(float inp)
{
	std::stringstream ss;
	uint32_t hex = float_to_uint(inp);
	std::string res;
	ss.width(sizeof(float) * 2);
	ss.fill('0');
	ss << std::uppercase << std::hex << hex;
	
	ss  >> res;
	return res;
}

std::string FloatConverter::double_to_uint_str(double inp)
{
	std::stringstream ss;
	uint64_t hex = double_to_uint(inp);
	std::string res;
	ss.width(sizeof(double) * 2);
	ss.fill('0');
	ss <<std::uppercase<<std::hex << hex;
	
	ss  >> res;
	return res;
}
