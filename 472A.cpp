#include<iostream>
#include<cmath>
using namespace std;

bool check_prime(int k)
{
    if(k<=1)
    {
        return false;
    }

    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i==0)
        {
            return false;
        }
    }
    return true;
}

void DT(int s)
{
    if(!check_prime(s/2) && s%2==0)
    {
        cout << s/2 << " " << s/2;
    }

    else
    {
        for(int i=4; i<s; i+=2)
        {
            if(check_prime(s-i))
            {
                continue;
            }

            else
            {
                cout << i << " " << s-i;
                break;
            }

        }
    }
}

int main()
{
    int s;
    cin >> s;
    DT(s);
}