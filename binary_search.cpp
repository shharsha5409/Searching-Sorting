#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[],int n,int key)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]==key) return mid;
        else if (a[mid]>key) h=mid-1;
        else l=mid+1;
    }
    return -1;
}

int main()
{
    //In Binary search the elements must be sorted either in ascending or desceding order
    int a[]={52,73,11,38,75,35,14,98},n=8,key=75;
    sort(a,a+n);            //sorted order:- 11 14 35 38 52 73 75 98
    cout<<"Element is found at index "<<binary_search(a,n,key);
}