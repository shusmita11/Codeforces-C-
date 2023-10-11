#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n, m, a, length, width, s;
    cin >> n >> m >> a;

    length = ceil(static_cast<double>(n)/a);
    width = ceil(static_cast<double>(m)/a);
    //cout << length << width;
    s=length*width;

    cout << s;
}
