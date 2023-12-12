#include <iostream>
using namespace std;
long long **multiplyMatrices(long long **matrixA, long long **matrixB, int RACB, int Ca, int Rb);
int main()
{
    int Ra, Ca;
    cin >> Ra >> Ca;
    long long **matrixA = new long long *[Ra];
    // get matrix A
    for (int i = 0; i < Ra; i++)
    {
        matrixA[i] = new long long[Ca];
        for (int j = 0; j < Ca; j++)
        {
            cin >> matrixA[i][j];
        }
    }
    int Rb, Cb;
    cin >> Rb >> Cb;
    long long **matrixB = new long long *[Rb];
    // get matrixB
    for (int i = 0; i < Rb; i++)
    {
        matrixB[i] = new long long[Cb];
        for (int j = 0; j < Cb; j++)
        {
            cin >> matrixB[i][j];
        }
    }

    long long **result;

    result = multiplyMatrices(matrixB, matrixA, Rb, Cb, Ra);
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

long long **multiplyMatrices(long long **matrixA, long long **matrixB, int RACB, int Ca, int Rb)
{
    long long **result = new long long *[Rb];
    for (int i = 0; i < Rb; i++)
    {
        result[i] = new long long[Ca];
        for (int j = 0; j < Ca; j++)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < Rb; i++)
    {
        for (int j = 0; j < Ca; j++)
        {
            for (int k = 0; k < RACB; k++)
            {
                result[i][j] += matrixA[k][j] * matrixB[i][k];
            }
        }
    }

    return result;
}
