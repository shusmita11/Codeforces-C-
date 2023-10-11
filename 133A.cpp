#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag=false;

    for(int i=0; i<s.length(); i++)
    {
        if(int(s[i])>=33 && int(s[i])<=126)
        {
            if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
            {
                flag=true;
                break;
            }

            if(s[i]=='+')
            {
                
            }
        }
    }

    if(flag)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}