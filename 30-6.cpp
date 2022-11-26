#include<iostream>
using namespace std;

int main ()
{
    int pincode, count=0;

    cout<<"Enter your area's pin code : ";
    cin>>pincode;
    cout<<endl;

    for (int i=0; pincode; i++){
        count++;
        pincode= pincode/10;
    }

    try
    {
        if (count!=6)
            throw count;

            else
                throw "Valid area pin code!";
    }
    catch (int a)
    {
        cout<<"The area's pincode should contain 6 digits!";
    }

    catch (const char * msg)
    {
        cout<<endl<<msg<<endl;
    }


    cout<<endl;
    return 0;

}
