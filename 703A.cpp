#include<iostream>
using namespace std;

int main()
{
    int n,m,c;
    int cnt1=0,cnt2=0;
    cin >> n;

    if(1<=n && n<=100)
    {
        for(int i=0; i<n; i++)
        {
            cin >> m >> c;
            if(m>c)
            {
                cnt1++;
            }

            if(m<c)
            {
                cnt2++;
            }
        }

        if(cnt1>cnt2)
        {
            cout << "Mishka";
        }

        else if(cnt1<cnt2)
        {
            cout << "Chris";
        }

        else
        {
            cout << "Friendship is magic!^^";
        }
    }
}