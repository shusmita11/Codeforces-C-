#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int length=s.length();
    int count=0;

    for(int i=0; i<length; i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
    }

    if(count==length || ((count==length-1) && islower(s[0])))
    {
        for(int i=0; i<length; i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }

            else
            {
                s[i]=toupper(s[i]);
            }
        }
    }
  
    cout << s;

    return 0;
}
