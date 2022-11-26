#include <iostream>
using namespace std;

int main ()

{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<endl;

    try
    {
        if (x==1)
        throw x;

        else throw "Error!";
    }

    catch (int x)
    {
        cout<<"No Error!";
    }
    catch (const char* msg)
    {
        cout<<msg<<endl;
    }

    cout<<endl;


    return 0;
}
