#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
    char email[100];
    int count= -1;

    cout<<"Enter the email address : "<<endl;
    gets(email);

    for (int i=0; email[i]; i++)
    {
        if (email[i]=='@')
            count++;
    }

    try
    {
       if (count!=0)
            throw "\nInvalid email address! ";

            else
                throw count;
    }

    catch (const char * msg)
    {
        cout<<msg<<endl;
    }

    catch (int x)
    {
        cout<<endl<<"Valid email address! "<<endl;
    }

    return 0;
}
