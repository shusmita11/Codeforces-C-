#include<iostream>
#include<vector>

using namespace std;

void IQ(int t)
{
    int even=0, odd=0;
    vector<int>v;
    for(int i=0; i<t; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    for(int i=0; i<t; i++)
    {
        if(v[i]%2==0)
        {
            even++;
        }

        else
        {
            odd++;
        }
    }

    int flag;

    if(even>odd)
    {
        for(int i=0; i<t; i++)
        {
            if(v[i]%2!=0)
            {
                flag=i;
            }
        }
    }

    else if(odd>even)
    {
        for(int i=0; i<t; i++)
        {
            if(v[i]%2==0)
            {
                flag=i;
            }
        }
    }

    cout << flag+1;
}
int main()
{
    int t;
    cin >> t;
    IQ(t);
}