#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
{
    // Your code here
    int sum = 0;
    int l = 0;
    int r = 0;
    vector<int> ans;

    if (s==0)
    {
        ans.push_back(-1);
        return ans;
    }
    

    while (l<n) 
    {
        if(sum<s) sum+=arr[r++];
        else if(sum>s) sum-=arr[l++];

        if(s==sum) {
            ans.push_back(++l);
            ans.push_back(r);
            return ans;
        }
    }

    ans.push_back(-1);
    return ans;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    long long s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res;
    res = subarraySum(arr, n, s);

    for (int ele : res)
    {
        cout << ele << " ";
    }

    return 0;
}