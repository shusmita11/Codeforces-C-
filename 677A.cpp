#include<iostream>
using namespace std;

int main()
{
    int a,s,v;
    int count=0;

    cin >> a >> s;
    for(int i=0; i<a; i++)
    {
        cin >> v;
        if(v>s)
        {
            count+=2;
        }

        else
        {
            count++;
        }
    }

    cout << count;
}