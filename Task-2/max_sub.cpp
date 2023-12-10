#include <iostream>
using namespace std;
int max_sub(string word, int size);
int main()
{
    int size;
    cin >> size;
    string word;
    cin >> word;
    cout << max_sub(word, size);
    return 0;
}

int max_sub(string word, int size)
{
    int maxSub=0;
    int i=0;
    char current = word[i];
    char adjacent = word[++i];
    while(true)
    {
        if(current != adjacent)
        {
            maxSub ++;
        }
        if(adjacent == '\0')
        {
            break;
        }
        current = adjacent;
        adjacent = word[++i];
    }
    return maxSub;
}