#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n-1;

    while(mid<high)
    {
        if(a[low]==0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        } else if(a[mid]==2) {
            swap(a[mid], a[high--]);
        } else {
            mid++;
        }
    }
}

int main()
{
    int n = 10;
    int a[n] = {0, 2, 1, 2, 2, 2, 1, 1,  0, 2};

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}