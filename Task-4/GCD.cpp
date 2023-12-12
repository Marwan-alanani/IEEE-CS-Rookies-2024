#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long A, B;
    cin >> A >> B;
    long long greater = B, less = A;
    long long GCD = 1, LCM;
    if (A > B)
    {
        greater = A;
        less = B;
    }
    // If they are multiples
    if (greater % less == 0)
    {
        GCD = less;
        LCM = greater;
    }

    else
    {
        for (long long i = 2; i <= sqrt(less); i++)
        {
            if (less % i == 0)
            {
                if (greater % i == 0)
                {
                    GCD = i;
                }
                long long y = less / i;
                if (greater % y == 0)
                {
                    GCD = y;
                    break;
                }
            }
        }
        LCM = greater / GCD * less;
    }
    cout << GCD << " " << LCM;
    return 0;
}