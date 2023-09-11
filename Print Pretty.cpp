#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int q,i,j,t,x;
    map<string,int>m;
    string a;
    cin>>q;
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>a>>x;
            if(m.find(a)==m.end())
            {

                m.insert(make_pair(a,x));
            }
            else
            {
                m[a]=m[a]+x;
            }
        }

        else if(t==2)
        {
            cin>>a;
            m.erase(a);
        }

        else if(t==3)
        {
            cin>>a;

            //cout<<m.find(a)->second<<endl;
            cout<<m[a]<<endl;
        }
    }
    return 0;
}




