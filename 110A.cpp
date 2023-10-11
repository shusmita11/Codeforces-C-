#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

bool NearlyLuckyNumber(long long int v)
{
    int count=0;
    string s=to_string(v);

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }

    string ss=to_string(count);
    for(int i=0; i<ss.length(); i++)
    {
        if(ss[i]=='4'||ss[i]=='7')
        {
            return true;
        }
    }

    return false;

}

int main()
{
    long long int a;
    cin >> a;

    if(NearlyLuckyNumber(a)==true)
    {
        cout<< "YES";
    }

    else
    {
        cout << "NO";
    }

}
