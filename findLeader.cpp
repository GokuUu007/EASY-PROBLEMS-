#include <iostream>
#include <vector>
using namespace std;

void leaders(int a[], int n)
{
    // Code here
    vector<int> leader;
    int high = n - 1;
    int mx = a[high];
    leader.push_back(mx);

    for (int i = high-1; i >= 1; i--)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            leader.push_back(mx);
        }
    }

    for(int ele:leader)
    {
        cout<<ele<<" ";
    }
}

int main()
{
    int n = 10;
    int a[n] = {16, 17, 4, 3, 17, 17, 17, 2, 4, 3};
    leaders(a, n);
}