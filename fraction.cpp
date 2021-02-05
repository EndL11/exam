#include <iostream>
class Fraction {
	float numerator;
	float denominator;
public:
	Fraction() : numerator(1), denominator(2)
	{}
	Fraction(float _num, float _denom) : numerator(_num), denominator(_denom)
	{}
	~Fraction() {
		std::cout << "Fraction destroyed" << std::endl;
	};
	bool isCorrect() {
		return this->numerator < this->denominator;
	}
};
int main() {
	float _numerator, _denominator;
	std::cout << "Enter numerator: ";
	std::cin >> _numerator;
	std::cout << "Enter denominator: ";
	std::cin >> _denominator;
	Fraction fraction(_numerator, _denominator);
	std::cout << "Is correct fraction?: " << (fraction.isCorrect() ? "Yes" : "No") << std::endl;
	system("pause");
	return 0;
}
