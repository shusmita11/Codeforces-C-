#include<iostream>
using namespace std;

void Capitalization(string a)
{
    string Cs = "";
    for(int i=0; i<a.length(); i++)
    {
        if(int(a[0])>=65 && int(a[0]<=122))
        {
            if(int(a[0])>=97 && int(a[0]<=122))
            {
                a[0]=char(int(a[0])-32);
            }
        }
    }
    cout << a;
}

int main()
{
    string s;
    cin >> s;

    if(s.length()<=1000)
    {
        Capitalization(s);
    }
}
