#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int key)
{
    for (int i=0;i<n;++i)
    if (a[i]==key)
    return i;
    return -1;
}

int main()
{
    int a[]={52,73,11,38,75,35,14,98},n=8,key=75;
    cout<<"Element is found at index "<<linear_search(a,n,key);
}