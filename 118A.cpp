#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ss = "";
    for(int i=0; i<s.length(); i++)
    {
        char a=tolower(s[i]);
        if(a!='a' && a!='e' && a!='i' && a!='o' && a!='u' && a!='y')  
        {
            ss=ss+'.'+a;
        }
    }

    cout <<ss;

}