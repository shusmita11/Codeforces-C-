#include<iostream>
#include<set>
using namespace std;

int main()
{
    string v;
    getline(cin, v);
    int a;
    a=v.length();

    if(a<=100)
    {
        set<char>s;
        for(int i=0; i<a; i++)
        {
            s.insert(v[i]);
        }

        int m=s.size();
        if(m%2!=0)
        {
            cout << "IGNORE HIM!";
        }

        else
        {
            cout << "CHAT WITH HER!";
        }
    }
}
