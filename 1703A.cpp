#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if(1<=t && t<=1000)
    {
        for(int i=0; i<t; i++)
        {
            string S;
            cin >> S;

            if((S[0]=='Y' || S[0]=='y') && (S[1]=='E' || S[1]=='e') && (S[2]=='S' || S[2]=='s'))
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
}