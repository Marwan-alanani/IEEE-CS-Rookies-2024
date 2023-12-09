#include <iostream>
using namespace std;
int get_count(int ar[], int size);
int main(void)
{
    int test_cases;
    cin >> test_cases;
    int sizeOfTestCase[test_cases];
    int *test[test_cases];
    // Get input
    for (int i = 0; i < test_cases; i++)
    {
        cin >> sizeOfTestCase[i];
        test[i] = (int *)malloc(sizeof(int) * sizeOfTestCase[i]);
        for (int j = 0; j < sizeOfTestCase[i]; j++)
        {
            cin >> test[i][j];
        }
    }
    for (int i = 0; i < test_cases; i++)
    {
        int count = sizeOfTestCase[i];
        for (int j = 0; j < sizeOfTestCase[i]; j++)
        {
            for(int k=j+1;k<sizeOfTestCase[i];k++)
            {
                if(test[i][k-1] > test[i][k])
                {
                    break;
                }
                count++;
            }
        }
        free(test[i]);
        cout<<count<<endl;
    }
    return 0;
}
