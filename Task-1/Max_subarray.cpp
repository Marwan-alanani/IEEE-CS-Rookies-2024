#include <iostream>
using namespace std;
void printMax(int ar[],int start,int end,int size);
int main()
{
    int testCases;
    cin >> testCases;
    int* test[testCases];
    int sizeOfTestCases[testCases];
    // get input
    for(int i=0;i<testCases;i++)
    {
        
        cin >> sizeOfTestCases[i];
        test[i] = (int*) malloc(sizeof(int)*sizeOfTestCases[i]);
        for(int j=0;j<sizeOfTestCases[i];j++)
        {
            cin >> test[i][j];
        }
       
    }
 //output 
    for(int i=0;i<testCases;i++)
    {
        for(int j=0;j<sizeOfTestCases[i];j++)
        {
            
            for(int k=j;k<sizeOfTestCases[i];k++)
            {
                printMax(test[i],j,k+1,sizeOfTestCases[i]);
            }
        }
        cout<< "\n";
        free(test[i]);
    }
    return 0;
}

void printMax(int ar[],int start,int end,int size)
{
        // manage duplicates
    if(start>1 && start != end)
    {
        if(ar[start-1] == ar[end-1])
        {
            return;
        }
    }
    int max = ar[start];
    for(int i=start;i<end;i++)
    {
        // get max
        if(ar[i]>max)
        {
            max = ar[i];
        }
    }
    cout << max;
    cout << " ";
}