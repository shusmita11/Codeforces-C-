#include<iostream>
#include<string>
using namespace std;

void Polyhedrons(int t)
{
    string s;
    int faces=0;
    for(int i=0; i<t; i++)
    {
        cin >> s;
        if(s=="Tetrahedron")
        {
            faces=faces+4;
        }
        if(s=="Cube")
        {
            faces=faces+6;
        }

        if(s=="Octahedron")
        {
            faces=faces+8;
        }

        if(s=="Dodecahedron")
        {
            faces=faces+12;
        }

        if(s=="Icosahedron")
        {
            faces=faces+20;
        }
    }

    cout << faces;

}

int main()
{
    int t;
    cin >> t;
    Polyhedrons(t);
    return 0;
}