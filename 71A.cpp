#include<iostream>
#include<cstring>
using namespace std;

void Abbreviation(string s)
{
    string ab = "";
    int count=0;
    int u = s.length();
    if(u>10)
    {
        for(int i=0; i<u; i++)
        {
            if(u>10)
            {
                count++;
            }
        }

        cout << s[0] << count-2 << s[u-1];
    }

    else
    {
        cout << s;
    }

}

int main()
{

    int a;
    cin >> a;

    for(int i=0; i<=a; i++)
    {
        string s;
        getline(cin, s);
        Abbreviation(s);
        cout << endl;
    }

}
