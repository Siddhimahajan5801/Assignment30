#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char password[100];
    int i,length, digit=0, spcl_sym=0 ,cap_letter=0 ;
    int arr[5];

    cout<<"Enter your password : ";
    gets(password);
    cout<<endl;

    length= strlen(password);

    for (i=0; password[i]; i++)
    {
        if ((password[i]>=32 && password[i]<=47) || (password[i]>=58 && password[i]<=64) || (password[i]>=91 && password[i]<=96) || (password[i]>=123 && password[i]<=126) )
            spcl_sym++;
    }

    for (i=0; password[i]; i++)
    {
        if (password[i]>='0' && password[i]<='9')
            digit++;
    }
    for (i=0; password[i]; i++)
    {
        if (password[i]>=65 && password[i]<=90)
        cap_letter++;
    }

    try
    {
        if (length<6)
           throw "Password must contain atleast 6 characters!";

        if (digit==0)
            throw 'c';

        if (spcl_sym==0)
            throw 0;

        if (cap_letter==0)
            throw 4.5;

        if (length>=6 && spcl_sym!=0 && digit!=0 && cap_letter!=0)
            throw "Valid password!";

    }
    catch (const char * msg)
    {
        cout<<msg<<endl;
    }

    catch(char a)
    {
        if (spcl_sym==0 || cap_letter==0)
        cout<<"Password must contain atleast one digit, one capital letter and one special symbol!";

        else
        cout<<"Password must contain atleast one digit!";
    }

    catch ( int d)
    {
        if (cap_letter==0)
        cout<<"Password must contain atleast one digit, one capital letter and one special symbol!";

        else
        cout<<"Password must contain atleast one special symbol!";
    }

    catch ( double d)
    {
        cout<<"Password must contain atleast one Capital letter!";
    }


    cout<<endl;

    return 0;
}
