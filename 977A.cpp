#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int v, k;
    cin >> v >> k;

    for(int i=0; i<k; i++)
    {
        string s = to_string(v);
        int a = s.length();

        if(s[a-1]=='0')
        {
            v = stoi(s)/10;
        }

        else
        {
            v = stoi(s)-1;
        }
    }

    cout << v;

}