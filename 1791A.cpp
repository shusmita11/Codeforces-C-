#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if(1<=t && t<=26)
    {
        for(int i=0; i<t; i++)
        {
            char s;
            cin >> s;

            if(s=='c' || s=='o' || s=='d' || s=='e' || s=='f' || s=='o' || s=='r' || s=='r' || s=='e' || s=='s')
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}