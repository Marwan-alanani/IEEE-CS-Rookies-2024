#include <iostream>
using namespace std;
long long getQ(long long q, long long a, long long b);
int main()
{
    long long A, B, Q;
    cin >> A >> B >> Q;
    cout << (getQ(Q, A, B));
    return 0;
}
long long getQ(long long q, long long a, long long b)
{
    long long x = q % 3;
    if (x == 1)
    {
        return a;
    }
    else if (x == 2)
    {
        return b;
    }
    else
    {
        return a ^ b;
    }
}