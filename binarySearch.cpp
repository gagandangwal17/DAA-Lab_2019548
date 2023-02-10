#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int n, int key)
{
    int s=0;
    int e=n-1;
    while(s!=e)
    {
        int m=s+e/2;
        if(key==a[m]) return true;
        else if(key>a[m]) s=m;
        else e=m;
    }
}

int main()
{
    int arr[]={1,2,3,4,5},key;
    
    cout<<"Enter the key to search: ";
    cin>>key;

    if(binarySearch(arr,sizeof(arr)/sizeof(arr[0]),key)) cout<<"Element Found";
    else cout<<"Element doesnt exist";

    return 0;
}