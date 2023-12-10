#include <iostream>
using namespace std;
int main()
{
    string sentenece;
    bool flag;
    int counter = 0;
    getline(cin, sentenece);
    for (int i = 0; i < sentenece.size(); i++)
    {
 
        if (sentenece[i] != ' ' && sentenece[i] != '?' && sentenece[i] != '!' && sentenece[i] != ',' && sentenece[i] != '.')
        {
            flag = true;
        }
        if ((!(sentenece[i] != ' ' && sentenece[i] != '?' && sentenece[i] != '!' && sentenece[i] != ',' && sentenece[i] != '.') || i == sentenece.size() - 1) && flag)
        {
            counter++;
            flag = false;
        }
    }
    cout << counter << endl;
}
