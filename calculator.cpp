#include "calculator.h"
#include <iostream>
#include <cmath>
#include <string>
double calculator::calculate(double x, char op, double y) {
	switch (op) {
		case '+' : 
			return x + y;
		case '-' :
			return x - y;
		case '*' :
			return x * y;
		case '/':
			return x / y;
        case '^':
            return pow(x, y);
		default: 
			return 0.0;
	}
}
using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b | a^b"
        << endl
        << "Press exit to exit"
        << endl;

    calculator c;
    while (true)
    {
        string a;
        cin >> a;
        if (a == "exit") return  0;
        cin >> oper >> y;
        x = stof(a);
        result = c.calculate(x, oper, y);
        cout << "Result is: " << result << endl;
    }

    return 0;
}