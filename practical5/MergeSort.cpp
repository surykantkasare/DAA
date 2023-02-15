#include<bits/stdc++.h>
using namespace std;
void merge(int l,int m,int r,vector<int>&v)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];       

}
void merge_sort(int l,int r,vector<int>&v)
{
    int m=(l+r)/2;
    merge_sort(m+1,r,v);
    merge_sort(l,m,v);
    merge(l,m,r,v);
}
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    merge_sort(0,n-1,v);

}