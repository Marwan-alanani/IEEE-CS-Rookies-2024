#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getMax(int numbers[], int size);
int getMin(int numbers[], int size);
int numberOfPrime(int numbers[], int size, int count = 0);
int numberOfPalindrome(int numbers[], int size, int count = 0);
int getMaxNumberOfDivisors(int numbers[], int size);

int main()
{
    int size;
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    cout << "The maximum number : " << getMax(numbers, size) << endl;
    cout << "The minimum number : " << getMin(numbers, size) << endl;
    cout << "The number of prime numbers : " << numberOfPrime(numbers, size) << endl;
    cout << "The number of palindrome numbers : " << numberOfPalindrome(numbers, size) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxNumberOfDivisors(numbers, size);
}

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

int numberOfPrime(int numbers[], int size, int count)
{

    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == 1)
        {
            count++;
            continue;
        }

        for (int j = 2; j <= sqrt(numbers[i]); j++)
        {
            if (numbers[i] % j == 0)
            {
                count++;
                break;
            }
        }
    }
    return (size - count);
}
bool isPalindrome(int number, int divisor = 10)
{
    if (number % 10 == floor(number / divisor))
    {
        return true;
    }
    return false;
}

int numberOfPalindrome(int numbers[], int size, int count)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < 10)
        {
            count++;
            continue;
        }
        if (isPalindrome(numbers[i]))
        {
            count++;
        }
    }
    return count;
}

int getNumberofDivisors(int number, int count = 2)
{

    if (number == 1)
    {
        return 1;
    }

    if (number == 2)
    {
        return 2;
    }
    double squareRoot = sqrt(number);
    int i = 2;
    for (; i < squareRoot; i++)
    {
        if (number % i == 0)
        {
            count += 2;
        }
    }
    if (i == squareRoot)
    {
        count++;
    }
    return count;
}
int getMaxNumberOfDivisors(int numbers[], int size)
{
    int maxIndex = 0;
    int divisorsMax = getNumberofDivisors(numbers[0]);
    for (int i = 1; i < size ; i++)
    {
        int comparison = getNumberofDivisors(numbers[i]);
        if(divisorsMax <  comparison)
        {
            divisorsMax = comparison;
            maxIndex = i;
        }
        else if(divisorsMax == comparison)
        {
            if(numbers[maxIndex]<numbers[i])
            {
                maxIndex = i;
            }
        }
    }
    
    return numbers[maxIndex];
}