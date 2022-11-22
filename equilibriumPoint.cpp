#include <iostream>
using namespace std;

// Function to find equilibrium point in the array.

int equilibriumPoint(int a[], int n)
{
    int sum = 0;
    int prefixSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (prefixSum == sum)
        {
            return ++i;
        }
        prefixSum += a[i];
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    equilibriumPoint(a, n);

    return 0;
}
