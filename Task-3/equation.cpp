#include <iostream>
using namespace std;
unsigned long long int Equation(int base, int power);
int main()
{
    int base;
    int power;
    cin >> base;
    cin >> power;
    unsigned long long int sum = Equation(base, power);
    cout << sum;
}

unsigned long long int Equation(int base, int power)
{
    if (power < 2)
    {
        return 0;
    }
    else if (power < 4)
    {
        return base * base;
    }
    else if (power < 6)
    {
        return Equation(base, 2) + Equation(base,2) * Equation(base,2);
    }
    else if (power < 8)
    {
        return Equation(base, 4) + Equation(base,2) * Equation(base,2)* Equation(base,2);
    }
    else if (power < 10)
    {
        return Equation(base, 6) +  Equation(base,2) * Equation(base,2)* Equation(base,2)* Equation(base,2);
    }
    else
    {
        return Equation(base, 8) + Equation(base,2) * Equation(base,2)* Equation(base,2)* Equation(base,2)* Equation(base,2);
    }
}
