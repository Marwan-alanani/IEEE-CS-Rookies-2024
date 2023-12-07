#include <iostream>
using namespace std;
void shift(int ar[],int size,int times);
int main()
{
    int size;
    int times;
    cin>> size;
    cin >> times;
    int ar[size];
    for(int i=0;i<size;i++)
    {
        cin >> ar[i];
    }
    shift(ar,size,times);
    for(int i=0;i<size;i++)
    {
        cout<< ar[i]<< " ";
    }
    return 0;
}
void shift(int ar[],int size,int times)
{
    if(times>=size)
    {
        return shift(ar,size,times-size);
    }
    for(int i=0;i<times;i++)
    {
        
        int tmp = ar[size-1];
        for(int j=size-1;j>0;j--)
        {
            ar[j] = ar[j-1];

        }
        ar[0] = tmp;
        
    }
}