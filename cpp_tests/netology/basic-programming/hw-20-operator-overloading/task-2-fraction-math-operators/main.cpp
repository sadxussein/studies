#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
    bool operator<(Fraction & other) const {
        return numerator_ * other.denominator_ < other.numerator_ * denominator_;
    }
    bool operator>(Fraction & other) const {
        return numerator_ * other.denominator_ > other.numerator_ * denominator_;
    }
    bool operator<=(Fraction & other) const {
        return numerator_ * other.denominator_ <= other.numerator_ * denominator_;
    }
    bool operator>=(Fraction & other) const {
        return numerator_ * other.denominator_ >= other.numerator_ * denominator_;
    }
    bool operator==(Fraction & other) const {
        return numerator_ * other.denominator_ == other.numerator_ * denominator_;
    }
    bool operator!=(Fraction & other) const {
        return numerator_ * other.denominator_ != other.numerator_ * denominator_;
    }
    Fraction operator+(const Fraction& other) const {
        return {numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_};
    }
    Fraction operator-(const Fraction& other) const {
        return {numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_};
    }
    Fraction operator*(const Fraction& other) const {
        return {numerator_ * other.numerator_, denominator_ * other.denominator_};
    }
    Fraction operator/(const Fraction& other) const {
        return {numerator_ * other.denominator_, denominator_ * other.numerator_};
    }
    Fraction operator-() const {
        return {-numerator_, denominator_};
    }
    Fraction operator++(int) {
        Fraction temp(*this);
        numerator_ += denominator_;
        return temp;
    }
    Fraction& operator++() {
        numerator_ += denominator_;
        return *this;
    }
    Fraction operator--(int) {
        Fraction temp(*this);
        numerator_ -= denominator_;
        return temp;
    }
    Fraction& operator--() {
        numerator_ -= denominator_;
        return *this;
    }
    [[nodiscard]] std::string print() const {
        return std::to_string(numerator_) + "/" + std::to_string(denominator_);
    }
};

int main()
{
    int n1, d1, n2, d2;
    std::cout << "Input numerator 1: ";
    std::cin >> n1;
    std::cout << "Input denominator 1: ";
    std::cin >> d1;
    std::cout << "Input numerator 2: ";
    std::cin >> n2;
    std::cout << "Input denominator 2: ";
    std::cin >> d2;

	Fraction f1(n1, d1);
	Fraction f2(n2, d2);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    std::cout << f1.print() << " + " << f2.print() << " = " << Fraction(f1 + f2).print() << std::endl;
    std::cout << f1.print() << " - " << f2.print() << " = " << Fraction(f1 - f2).print() << std::endl;
    std::cout << f1.print() << " * " << f2.print() << " = " << Fraction(f1 * f2).print() << std::endl;
    std::cout << f1.print() << " / " << f2.print() << " = " << Fraction(f1 / f2).print() << std::endl;
    std::cout << (++f1).print() << " + " << f2.print() << " = " << Fraction(f1 + f2).print() << std::endl;
    std::cout << "f1 fraction equals " << f1.print() << std::endl;
    std::cout << (f1--).print() << " + " << f2.print() << " = " << Fraction(f1 + f2).print() << std::endl;
    std::cout << "f1 fraction equals " << f1.print() << std::endl;

	return 0;
}