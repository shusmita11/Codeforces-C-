#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int s;
    cin >> s;

    double a = ceil(static_cast<double>(s)/5);
    cout << a;
}