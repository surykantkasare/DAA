#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &v, int x) 
{
    int n = v.size();
    for (int i = 0; i < n; i++) 
    {
        if (v[i] == x)
            return i;
    }
    return -1;
}

int main() 
{
    vector<int> v = {12, 11, 13, 5, 6};
    int x = 5;
    int result = linearSearch(v, x);
    if (result == -1)
        cout << "Element not present in the vay" << endl;
    else
        cout << "Element found at index: " << result << endl;
    return 0;
}
