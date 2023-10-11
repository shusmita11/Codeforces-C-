#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s;
    cin >> s;

    if(s.length()==a)
    {
        for(int i=0; i<a; i++)
        {
            s[i]=tolower(s[i]);
        }

        bool panagram = true;

        for(char i= 'a'; i<='z'; i++)
        {
            bool check=false;
            for(int j=0; j<a; j++)
            {
                if(s[j]==i)
                {
                    check=true;
                    break;
                }
            }

            if(check!=true)
            {
                panagram=false;
                break;
            }
        }

        if(panagram==true)
        {
            cout << "YES";
        }

        else
        {
        cout << "NO";
        }
    }

}
