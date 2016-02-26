#include <iostream>
#include <sstream>

using namespace std;

class Fraction
{
private:
	float numerator;
	float denominator;

public:

	Fraction  getNumDenom(Fraction f1);
	Fraction setNumDenom(Fraction f1, Fraction f2);
	float add(Fraction f1);
	float subtract(Fraction f1);
	float divide(Fraction f1);
	float multiply(Fraction f1);
	void print(Fraction f1);
	Fraction(float f1, float f2);



};

Fraction::Fraction(float f1, float f2)
{
	numerator = f1;
	denominator = f2;


}
float Fraction::add(Fraction f1)
{
	float  num, denom;

	denom = denominator * f1.denominator;
	num = (denominator * f1.numerator) + (f1.denominator * numerator);
	return (num / denom);
}

float Fraction::subtract(Fraction f1)
{
	float  num, denom;

	denom = f1.denominator * denominator;
	num = (denominator * f1.numerator) - (f1.denominator * numerator);
	return (num / denom);
}

float Fraction::multiply(Fraction f1)
{
	float num, denom;

	denom = f1.denominator * denominator;
	num = f1.numerator * numerator;
	return (num / denom);
}

float Fraction::divide(Fraction f1)
{
	float num, denom;

	denom = f1.denominator * denominator;
	num = f1.numerator * denominator;
	return (num / denom);
}

Fraction Fraction::getNumDenom(Fraction f1)
{
	return f1;
}

Fraction Fraction::setNumDenom(Fraction final, Fraction initial)
{
	initial = final;
	return initial;
}

void Fraction::print(Fraction f1)
{
	cout << "the numerator of fraction 1 is" << numerator << endl;
	cout << "the denominator of fraction 1 is" << denominator << endl;
	cout << "the numerator of fraction 2 is" << f1.numerator << endl;
	cout << "the denominator of fraction 2 is" << f1.denominator << endl;
}

int main()
{


	float num, denom;

	cout << "Enter the numerator of fraction 1" << endl;
	cin >> num;

	cout << "Enter the denominator of fraction 1" << endl;
	cin >> denom;


	Fraction frac1(num, denom);

	cout << "Enter the numerator of fraction 2" << endl;
	cin >> num;

	cout << "Enter the denominator of fraction 2" << endl;
	cin >> denom;

	Fraction frac2(num, denom);

	float sum;
	sum = frac1.add(frac2);


	//ss << ans.getNumDenom(sum);//

	float diff;
	diff = frac1.subtract(frac2);

	float prod;
	prod = frac1.multiply(frac2);

	float quo;
	quo = frac1.divide(frac2);

	cout << "the sum is " << sum << endl;
	cout << " " << endl;

	cout << "the diferrence is " << diff << endl;
	cout << " " << endl;

	cout << "the product is " << prod << endl;
	cout << " " << endl;

	cout << "the quotient is " << quo << endl;
	cout << " " << endl;

	frac1.print(frac2);

	return 0;

}