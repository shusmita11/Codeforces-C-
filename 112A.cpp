#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int count=0;

    for(int i=0; i<s1.length(); i++)
    {
         s1[i]=tolower(s1[i]);
         s2[i]=tolower(s2[i]);

        if(int(s1[i])==int(s2[i]))
        {
            count=0;
        }

        else if(int(s1[i])<int(s2[i]))
        {
            count=-1;
            break;
        }

        else
        {
            count=1;
            break;
        }
    }

    cout << count;
}
