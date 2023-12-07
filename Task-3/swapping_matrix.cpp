#include <iostream>
using namespace std;
void swap(int **matrix, int N, int X, int Y);
int main()
{
    int N;
    int X;
    int Y;
    cin >> N;
    cin >> X;
    cin >> Y;
    int** matrix = new int*[N];
     for(int i=0;i<N;i++)
    {
        matrix[i] = new int[N];
        for(int j=0;j<N;j++)
        {
            cin >> matrix[i][j];
        }
    }
    swap(matrix, N, X-1, Y-1);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
void swap(int **matrix, int N, int X, int Y)
{
    int tmp[N];
    // get input
   

    // swap rows
    for (int i = 0; i < N; i++)
    {
        tmp[i] = matrix[X][i];
        matrix[X][i] = matrix[Y][i];
        matrix[Y][i] = tmp[i];
    }
    // swap columns
    for (int i = 0; i < N; i++)
    {
        tmp[i] = matrix[i][X];
        matrix[i][X] = matrix[i][Y];
        matrix[i][Y] = tmp[i];
    }
    return;
}