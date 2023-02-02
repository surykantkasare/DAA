#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int jumpSearch(vector<int> &v, int x)
{
    int n = v.size();
    int step = sqrt(n);
    int prev = 0;
    while (v[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (v[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (v[prev] == x)
        return prev;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "Enter element to find:";
    int x;
    cin >> x;
    int result = jumpSearch(v, x);
    if (result ==-1)
        cout << "Element not present in the array" << endl;
    else
        cout << "Element found at index: " << result << endl;
    return 0;
}
