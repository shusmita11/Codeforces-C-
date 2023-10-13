#include<iostream>
using namespace std;

void Vus_the_Cossack()
{
    int t, pen, book;
    cin >> t >> pen >> book;

    if(t<=pen && t<=book)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{
    Vus_the_Cossack();
}