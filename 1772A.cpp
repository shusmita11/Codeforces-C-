#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        if(1<=t && t<=100)
        {
            string s;
            cin >> s;
            char a = s[0];
            char b = s[2];
            cout << static_cast<int>(a)+static_cast<int>(b)-96 << endl;
        }
    }
    return 0;
}