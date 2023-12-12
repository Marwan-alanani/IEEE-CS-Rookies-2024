#include <iostream>
#include <math.h>
using namespace std;
string conversion = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void ConvertFromDecimalToBase(long long N, long long base);
long long ConvertFromBaseTodecimal(string code, long long base);
int main()
{
    int T, X;
    cin >> T;
    if (T == 1)
    {
        string N;
        cin >> N >> X;
        cout << ConvertFromBaseTodecimal(N, X);
        return 0;
    }

    int N;
    cin >> N >> X;
    ConvertFromDecimalToBase(N, X);
    return 0;
}
long long log_a_to_base_b(long long a, long long base){return log(a) / log(base);}
void ConvertFromDecimalToBase(long long N, long long base)
{

    int max_power = log_a_to_base_b(N, base);
    long long divisor = pow(base, max_power);
    for (int i = 0; i < max_power + 1; i++)
    {

        long long index = N / divisor;
        long long x = N - divisor * index;
        divisor /= base;

        N = x;
        cout << conversion[index];
    }
}
long long ConvertFromBaseTodecimal(string code, long long base)
{

    int max_index = code.size();
    long long baseMultiplier = pow(base, max_index - 1);
    long long sum = 0;
    for (int i = 0; i < max_index; i++)
    {
        int digitValue = code[i]-'0';
        if(digitValue>9)
        {
            digitValue-=7;
        }
        sum += baseMultiplier * digitValue;
        baseMultiplier /= base;
    }
    return sum;
}
