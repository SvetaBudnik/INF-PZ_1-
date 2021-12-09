#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>

union U32 {
	float FLOAT;
	uint32_t HEX;
};

union U64 {
	double DOUBLE;
	uint64_t HEX;
};


int menu() {
	std::cout << "Enter a number:\n[1] Float to hex\n[2] Hex to float\n[3] Double to hex\n[4] Hex to double\n[5] Exit\n";
	int inp;
	if (!(std::cin >> inp))
		inp = 0;
	return inp;
}

uint32_t float_to_str_u(float inp) {
	U32 hf;
	hf.FLOAT = inp;
	return hf.HEX;
}

uint64_t double_to_str_u(double inp) {
	U64 hf;
	hf.DOUBLE = inp;
	return hf.HEX;
}

float str_to_float_u(uint32_t str) {
	U32 hf;
	hf.HEX = str;
	return hf.FLOAT;
}

double str_to_double_u(uint64_t str) {
	U64 hf;
	hf.HEX = str;
	return hf.DOUBLE;
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
				std::cout.width(sizeof(float));
				std::cout.fill('0');
				std::cout << std::hex << std::uppercase << float_to_str_u(f_inp) << std::endl;
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
				std::cout << std::scientific << str_to_float_u(hex_inp) << std::endl;
			else
				std::cout << "Wrong input" << std::endl;
			break;
		}
		case 3:
		{
			double f_inp;
			std::cout << "Enter double number in exponential form" << std::endl;
			if (std::cin >> f_inp) {
				std::cout.width(sizeof(double));
				std::cout.fill('0');
				std::cout << std::hex << std::uppercase << double_to_str_u(f_inp) << std::endl;
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
				std::cout << std::setprecision(std::numeric_limits<long double>::digits10 + 1) << std::scientific << str_to_double_u(hex_inp) << std::endl;
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

/*
#define _CRT_SECURE_NO_WARNINGS
#include<string>

template <typename T>
class Hex_float {

private:
	unsigned char _hex[sizeof(T)];

public:
	Hex_float() {
		num_to_hex(0);
	}

	Hex_float(T num) {
		num_to_hex(num);
	}

	Hex_float(char* str) {
		int buff[sizeof(T)];
		for (int i = 0; i < sizeof(T); ++i) {
			sscanf(str + 2 * i, "%02X", buff + sizeof(T) - 1 - i);
			memcpy(_hex + sizeof(T) - 1 - i, buff + sizeof(T) - 1 - i, 1);
		}
	}

	void num_to_hex(T num) {
		memcpy(_hex, &num, sizeof(T));
	}

	T hex_to_num() {
		T result;
		memcpy(&result, _hex, sizeof(T));
		return result;
	}

	void print_str(bool newline = true) {
		for (int i = sizeof(T) - 1; i >= 0; --i) {
			printf("%02X", _hex[i]);
		}
		if (newline) printf("\n");
	}
};

int menu() {
	printf("Enter a number:\n1. Float to hex\n2. Hex to float\n3. Double to hex\n4. Hex to double\n5. Exit\n");
	int inp;
	if (scanf("%d", &inp) != 1)
		inp = 0;
	return inp;
}

template <typename T>
void float_to_str(T inp) {
	Hex_float<T> hf(inp);
	hf.print_str();
}

template <typename T>
void str_to_float(char* inp) {
	Hex_float<T> hf(inp);
	printf("%g\n", hf.hex_to_num());
}

void flush() {
	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
	int inp = 0;
	char s_inp[255];
	while ((inp = menu()) != 5) {
		switch (inp)
		{
		case 1:
		{
			float f_inp;
			scanf("%e", &f_inp);
			float_to_str<float>(f_inp);
			break;
		}
		case 2:
		{
			scanf("%s", s_inp);
			str_to_float<float>(s_inp);
			break; }
		case 3:
		{
			double f_inp;
			scanf("%le", &f_inp);
			float_to_str<double>(f_inp);
			break;
		}
		case 4:
		{
			scanf("%s", s_inp);
			str_to_float<double>(s_inp);
			break; }
		default:
			printf("Wrong input\n");
			break;
		}
		flush();
	}
}*/

//tests
/*float test_f[]{NAN, -INFINITY, -3.40282347e+38, -1.17549435e-38,-1.17549421e-38, -1.40129846e-45, -0, +0, 1.40129846e-45,1.17549421e-38, 1.17549435e-38, 3.40282347e+38, INFINITY, NAN};
	Hex_float<float> res_f;
	for (float i : test_f) {
		res_f.num_to_hex(i);
		res_f.print();
		printf("\t%e\n",res_f.hex_to_num());
	}
	double test[]{NAN, -INFINITY, -1.797693134862315708e+308, -2.225073858507201383e-308, -2.225073858507200889e-308, -4.940656458412465441e-324 -0,
		+0, 4.940656458412465441e-324, 2.225073858507200889e-308, 2.225073858507201383e-308, 1.797693134862315708e+308, INFINITY, NAN};
	Hex_float<double> res;
	for (double i : test) {
		res.num_to_hex(i);
		res.print();
		printf("\t%e\n", res.hex_to_num());
	}*/

