#include<iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    if(1<=t && t<=162)
    {
        for(int i=0; i<t; i++)
        {
            cin >> a >> b >> c;
            if((a+b)==c)
            {
                cout << "+" << endl;
            }

            else
            {
                cout << "-" << endl;
            }
        }
    }
}