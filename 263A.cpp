#include<iostream>
using namespace std;

int main()
{
    int S[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> S[i][j];
        }
    }

    int row, column,r_count=0,c_count=0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(S[i][j]==1)
            {
                row=i;
                column=j;
            }
        }
    }


    if(row>2)
    {
        r_count=row-2;
    }

    else
    {
        r_count=2-row;
    }

    if(column>2)
    {
        c_count=column-2;
    }

    else
    {
        c_count=2-column;
    }

    cout << r_count+c_count;
}
