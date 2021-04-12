// CalculatorPlus - A calculator program made with C++
// Made by Robertas64

#include <iostream>
#include "CalculatorPlus.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "CalculatorPlus by Robertas64" << endl << endl;
    cout << "Calculate this format : (1*1, 1/1, 1+1, 1-1) : "
        << endl;

    CalculatorPlus c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "The result is : " << result << endl;
    }

    return 0;
}