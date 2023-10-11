#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int up=0;
    int low=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
        up++;
        }

        if(s[i]>=97& s[i]<=122)
        {
        low++;
        }
    }

    for(int i=0; i<s.length(); i++)
    {
        if(up==low || low>up)
        {
            s[i]=tolower(s[i]);
        }

        if(low<up)
        {
            s[i]=toupper(s[i]);
        }
    }

    cout << s;
}
