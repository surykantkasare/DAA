#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &v, int &target)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (v[m] == target)
        {
            return m;
        }
        else if (v[m] < target)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}
int main()
{
    cout << "Enter size of array : ";
    int n;
    cin >> n;
    vector<int> v(n);
    cout << "Enter sorted array : " << endl;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout<<"Enter find element : ";
    int target;cin>>target;
    int x=binary_search(v,target);
    if(x==-1)
    {
        cout<<"Element is not present"<<endl;
    }
    else cout<<"Element are present at index  : "<<x<<endl;
}