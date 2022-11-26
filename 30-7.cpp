#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char username[100];
    int i,length, digit=0, spcl_sym=0 ;

    cout<<"Enter your username : ";
    gets(username);
    cout<<endl;

    length= strlen(username);

    for (i=0; username[i]; i++)
    {
        if ((username[i]>=32 && username[i]<=47) || (username[i]>=58 && username[i]<=64) || (username[i]>=91 && username[i]<=96) || (username[i]>=123 && username[i]<=126) )
            spcl_sym++;
    }

    for (i=0; username[i]; i++)
    {
        if (username[i]>='0' && username[i]<='9')
            digit++;
    }

    try
    {
        if (length<6)
           throw "Username must contain atleast 6 characters!";

        if (digit==0 && spcl_sym==0)
           throw 's';

        if (spcl_sym!=0 && digit==0)
            throw 1;

        if (spcl_sym==0 && digit!=0)
            throw 1.2;

        if (length>=6 && spcl_sym!=0 && digit!=0)
            throw "Valid username!";

    }
    catch (const char * msg)
    {
        cout<<msg<<endl;
    }

    catch(int d)
    {
        cout<<"Username must contain atleast one digit!";
    }

    catch ( double d)
    {
        cout<<"Username must contain atleast one special symbol!";
    }

    catch (char a)
    {
       cout<<"Username must contain atleast one digit and one special symbol!";
    }

    cout<<endl;

    return 0;
}
