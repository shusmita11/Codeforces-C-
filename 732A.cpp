#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int Shovel(int k, char t)
{
    int count;
    for(int i=1; i<=100; i++)
    {
        string s = to_string(k*i);
        if(s[s.length()-1]==t)
        {
            count=i;
            break;
        }

        else if (s[s.length()-1]=='0')
        {
            count=i;
            break;
        }
        
    }


    return count;
}

int main()
{
    int k;
    char t;
    cin >> k >> t;
    cout << Shovel(k,t);
}