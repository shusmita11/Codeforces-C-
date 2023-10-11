#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int an=0;
    int dan=0;

    char S[a];

    cin >> S;

    for(int i=0; i<a; i++)
    {
        if(S[i]=='A')
        {
            an++;
        }

        if(S[i]=='D')
        {
            dan++;
        }
    }

    if(an>dan)
    {
         cout << "Anton";
    }

    else if(an<dan)
    {
        cout << "Danik";
    }

    else
    {
        cout << "Friendship";
    }

}
