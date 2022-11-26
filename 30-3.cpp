#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;

    cout<<"Enter the values of a and b : "<<endl;
    cin>>a>>b;

    try
    {
        if (b==0)
            throw "Denominator is zero : Error! ";

        c=a/b;
        cout<<endl<<"a/b = "<<c<<endl;
    }

    catch (const char* msg )
    {
        cout<<msg<<endl;
    }

    return 0;
}
