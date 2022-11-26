#include<iostream>
using namespace std;

int main ()
{
    int mobile_num, count=0;

    cout<<"Enter your mobile number : ";
    cin>>mobile_num;
    cout<<endl;

    for (int i=0; mobile_num; i++){
        count++;
        mobile_num= mobile_num/10;
    }

    try
    {
        if (count!=10)
            throw count;

            else
                throw "Valid mobile number!";
    }
    catch (int a)
    {
        cout<<"The mobile number should contain 10 digits!";
    }

    catch (const char * msg)
    {
        cout<<endl<<msg<<endl;
    }


    return 0;

}
