#include<iostream>
#include<vector>

using namespace std;

void Division(int t)
{
    vector<string>v;
    for(int i=0; i<t; i++)
    {
        int rating;
        cin >> rating;

        if(1900<=rating && rating<=5000)
        {
            v.push_back("Division 1");
        }

        else if(1600<=rating && rating<=1899)
        {
            v.push_back("Division 2");
        }

        else if(1400<=rating && rating<=1599)
        {
            v.push_back("Division 3");
        }
        else if(-5000<=rating && rating<=1399)
        {
            v.push_back("Division 4");
        }
    }

    for(int i=0; i<v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    Division(t);
}