#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int a, count=0;
    string s;
    cin >> a >> s;

    if(s.length()==a)
    {
        for(int i=0; i<a; i++)
        {
            if(int(s[i])==int(s[i+1]))
            {
                s[i]=s[i+1];
                //a--;
                count++;
            }
        }

        cout << count;
    }
}