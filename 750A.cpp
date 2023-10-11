#include<iostream>
using namespace std;

void made_It(int s, int a)
{
    int v=240-a;
    int count=0;
    for(int i=1; i<=s; i++)
    {
        if((v-5*i)>=0)
        {
            count++;
            v=v-5*i;
        }
    }

    cout << count;
}

int main()
{
    int n,k;
    cin >> n >> k;
    made_It(n,k);
}