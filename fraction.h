class Fraction
{
public:
	void setNumerator(int newNumerator);
	//Precondition: newNumerator >= 0.
	//Postcondition: Sets the variable numerator equal to the value of newNumerator.
	void setDenominator(int newDenominator);
	//Precondition: newDenominator > 0.
	//Postcondition: Sets the variable denominator equal to the value of newDenominator.
	int getNumerator();
	//Postcondition: Returns the value of the variable numerator.
	int getDenominator();
	//Postcondition: Returns the value of the variable denominator.
	double getQuotient();
	//Postcondition: Returns the quotient of the ratio, made up of the variables numerator and denominator.
	void reduceToLowestTerms();
	//Postcondition: Reduces the quotient to its lowest term.
	void input();
	//Postcondition: Reads in values from the keyboard.
	void output();
	//Outputs the values of all the private member variables.

private:
	int numerator;
	int denominator;
};
