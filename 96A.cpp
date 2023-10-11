#include<iostream>
#include<cstring>

using namespace std;

bool checkDangerous(string s)
{
    int countZero=0, countOne=0;
    for(char c: s)
    {
        if(c=='0')
        {
            countZero++;
            countOne=0;
        }
        else
        {
            countOne++;
            countZero=0;
        }

        if(countZero>=7 || countOne>=7)
        {
            return true;
        }
    }

    /*if(countZero>=7 || countOne>=7)
        {
            return true;
        }*/
    return false;    
}

int main()
{
    string S;
    cin >> S;

    if(checkDangerous(S))
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}