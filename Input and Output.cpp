#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    long long int a[100000],n,i,m=-9999999,c=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        m=max(m,a[i]);
    }
    for(i=0; i<n; i++)
    {
       if(a[i]==m)
       {
           c++;
       }
    }
    cout<<c<<endl;
    return 0;
}
