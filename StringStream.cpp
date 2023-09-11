#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int i;

    getline(cin,line);

    for(i=0; i<line.length(); i++)
    {
        if(line[i]==',')
        {
            line[i]=' ';
        }
    }
    stringstream ss(line);
    string word;
    int count = 0;
    while (ss>>word)
    {

        cout<<word<<endl;
    }
    // cout<<endl;
    return 0;
}
