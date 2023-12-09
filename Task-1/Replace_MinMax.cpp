#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int ar[size];
    for(int i=0;i<size;i++)
    {
        cin >> ar[i];
    }
    int min_index = 0;
    int max_index = 0;
    int max = ar[min_index];
    int min = ar[max_index];
    for(int i=0;i<size;i++)
    {
        if(ar[i]<ar[min_index])
        {
            min_index = i;
            min = ar[i];
        }
        if (ar[i]>ar[max_index])
        {
            max_index = i;
            max = ar[i];
        }
        
    }
    ar[min_index] = max;
    ar[max_index] = min;
    for(int i=0;i<size;i++)
    {
        cout<<ar[i];
        cout<<" ";
    } 
    return 0;
}