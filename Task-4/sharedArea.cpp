#include <iostream>
using namespace std;
void getSharedPoints(long long lowerLeft[], long long upperRight[], long long x3, long long y3, long long x4, long long y4);
long long getArea(long long lowerLeft[], long long upperRight[]);
int main()
{
    long long test_cases;
    cin >> test_cases;
    for (long long i = 0; i < test_cases; i++)
    {
        long long rects;
        cin >> rects;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long lowerLeft[] = {x1, y1};
        long long upperRight[] = {x2, y2};

        for (long long j = 0; j < rects - 1; j++)
        {
            long long x3, y3, x4, y4;
            cin >> x3 >> y3 >> x4 >> y4;
            getSharedPoints(lowerLeft, upperRight, x3, y3, x4, y4);
        }
        if (upperRight[0] > lowerLeft[0] && upperRight[1] > lowerLeft[1])
        {

            cout << "Case #" <<i+1 << ": " << getArea(lowerLeft, upperRight)<<endl;
        }
        else
        {
            cout << "Case #" <<i+1 << ": 0"<<endl;
        }
    }

    return 0;
}
void getSharedPoints(long long lowerLeft[], long long upperRight[], long long x3, long long y3, long long x4, long long y4)
{
    lowerLeft[0] = max(lowerLeft[0], x3);
    lowerLeft[1] = max(lowerLeft[1], y3);
    upperRight[0] = min(upperRight[0], x4);
    upperRight[1] = min(upperRight[1], y4);
}
long long getArea(long long lowerLeft[], long long upperRight[])
{
    return (upperRight[0] - lowerLeft[0]) * (upperRight[1] - lowerLeft[1]);
}