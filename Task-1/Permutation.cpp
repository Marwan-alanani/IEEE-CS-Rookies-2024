#include <iostream>
using namespace std;
void sort(int ar[],int size);
bool check(int second[],int original[],int size);
int main()
{
    int size;
    cin>>size;
    int original[size];
    int second[size];
    for(int i=0;i<size;i++)
    {
        cin >> original[i];
    }
    for(int i=0;i<size;i++)
    {
        cin >> second[i];
    }
    sort(original,size);
    sort(second,size);
    if(check(original,second,size))
    {
        cout << "yes";
        return 0;
    }
    cout << "no";
    return 0;
}

void sort(int ar[],int size)
{
    for(int i=0;i<size;i++)
    {
        int tmp = ar[i];
        for(int j=i+1;j<size;j++)
        {
            if(ar[j]<tmp)
            {
                ar[i] = ar[j];
                ar[j] = tmp;
                tmp = ar[i];
            }
        }
       
    }
}
bool check(int second[],int original[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(original[i]!=second[i])
        {
            return false;
        }
    }
    return true;
}

