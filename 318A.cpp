#include<iostream>
using namespace std;

int main()
{
    long long int s, a;

    cin >> s >> a;

    long long int count=(s+1)/2;

//odd
    if(a<=count)
    {
        cout << (a*2)-1 << endl;
    }

//even
    else
    {
        cout << (a-count)*2 << endl;
    }

   return 0; 
}
