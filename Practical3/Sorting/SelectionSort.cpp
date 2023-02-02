#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int j=i;
        j=min_element(v.begin()+i,v.end())-v.begin();
        swap(v[i],v[j]);
    }
}
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    selectionSort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}