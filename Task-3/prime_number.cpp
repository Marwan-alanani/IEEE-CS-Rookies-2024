// A school method based C++ program
// to check if a number is prime
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n == 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

// Driver code
int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin>> n;
        isPrime(n) ? cout << " YES\n" : cout << " NO\n";
    }

    return 0;
}
