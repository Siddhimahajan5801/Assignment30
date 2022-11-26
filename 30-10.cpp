#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
    char nickname[100];
    int i, length, digit=0, spcl_sym=0, space=0;

    cout<<"Enter your nickname : ";
    gets(nickname);
    cout<<endl;

    length= strlen(nickname);

    for (i=0; nickname[i]; i++)
    {
        if (nickname[i]>='0' && nickname[i]<='9')
            digit++;
    }
     for (i=0; nickname[i]; i++)
    {
        if (nickname[i]==32)
            space++;
    }
     for (i=0; nickname[i]; i++)
    {
        if ((nickname[i]>32 && nickname[i]<=47) || (nickname[i]>=58 && nickname[i]<=64) || (nickname[i]>=91 && nickname[i]<=96) || (nickname[i]>=123 && nickname[i]<=126) )
        spcl_sym++;
    }

    try
    {
        if (length>8)
            throw "Nickname should not contain more than 8 characters! ";

        if (digit>0 || spcl_sym>0 || space>0)
            throw 0;

        else throw "Valid Nickname!";
    }

    catch (const char * msg )
    {
        cout<<msg<<endl<<endl;
    }
    catch (int a)
    {
        cout<<"Nickname should not contain a digit, a special symbol or a space !"<<endl<<endl;
    }



    return 0;
}

