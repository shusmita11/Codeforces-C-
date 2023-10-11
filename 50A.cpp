#include<iostream>
using namespace std;

int main()
{
    int M, N, domino;
    cin >> M >> N;

    if((1<=M && M<=16) &&(1<=N && N<=16))
    {
        domino = (M*N)/2;
        cout << domino;
    }

    return 0;
}