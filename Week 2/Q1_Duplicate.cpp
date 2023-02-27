/*input
2
5
1 2 2 3 4
2
5
1 1 1 3 4
1
*/



#include <bits/stdc++.h>
using namespace std;
const int M=100000000;
int hsh[M];
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            hsh[a[i]]++;
        }
        int key;
        cin>>key;
        if(hsh[key]) cout<<hsh[key]<<endl;
        else cout<<"Not present\n";
    }
    return 0;
}