#include <iostream>
#include <cstdlib>
#include <cmath>
#include "fraction.h"

using namespace std;

void Fraction::input()
{
    int n, d;

    cout<<"Enter numerator: ";
    cin>>n;
    cout<<"Enter denominator: ";
    cin>>d;
    cout<<endl;

    if (n >= 0 && d > 0)
    {
        numerator = n;
        denominator = d;
    }
    else
    {
        cout<<"Invalid integers: Aborting program.";
        exit(1);
    }
}

void Fraction::setNumerator(int newNumerator)
{
    if (newNumerator >= 0)
        numerator = newNumerator;
    else
    {
        cout<<"Invalid value set to numerator: Aborting progarm.";
        exit(1);
    }
}

void Fraction::setDenominator(int newDenominator)
{
    if (newDenominator > 0)
        denominator = newDenominator;
    else
    {
        cout<<"Invalid argument to mutator function: Aborting Program.\n";
        exit(1);
    }
}

int Fraction::getNumerator()
{
    return numerator;
}

int Fraction::getDenominator()
{
    return denominator;
}

double Fraction::getQuotient()
{
    double fPNumerator = numerator, fPDenominator = denominator;
    return (fPNumerator/fPDenominator);
}

void Fraction::reduceToLowestTerms()
{
    int numeratorCopy = numerator, denominatorCopy = denominator;
    for (int i = 1; i <= min(numeratorCopy, denominatorCopy); i++)
    {
        if (numeratorCopy%i == 0 && denominatorCopy%i == 0)
        {
            numerator = numeratorCopy/i;
            denominator = denominatorCopy/i;
        }
    }
}

void Fraction::output()
{
    cout<<"Numerator: "<<numerator<<"\nDenominator: "<<denominator<<endl;
    cout<<"Quotient: "<<getQuotient()<<"\nIn lowest terms: ";
    reduceToLowestTerms();
    cout<<numerator<<"/"<<denominator<<"\n\n";
}
