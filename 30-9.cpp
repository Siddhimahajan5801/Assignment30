#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
    char gmail[100];
    int i,j,count= 0, valid=0;
    int length1,length2;

    cout<<"Enter the gmail address : "<<endl;
    gets(gmail);
    cout<<endl;

    for ( j=0; gmail[j]; j++)
    {
        if (gmail[j]=='@'){
            length1=j;
            count++;
        }
    }
    for ( i=0; gmail[i]; i++)
    {
        if (gmail[i]=='g' && gmail[i+1]=='m' && gmail[i+2]=='a' && gmail[i+3]=='i' && gmail[i+4]=='l' && gmail[i+5]=='.' && gmail[i+6]=='c' && gmail[i+7]=='o' && gmail[i+8]=='m')
       {
        length2=i;
        valid++;
       }
    }

    try
    {
         if (valid==0)
             throw 0;

          else if (count==0)
             throw "\nInvalid gmail address! ";

          else if ((length1+1)!=length2)
          throw "@ should come just before gmail.com ";

            else throw "Valid gmail address!";
    }

    catch (const char * msg)
    {
        cout<<msg<<endl;
    }

    catch (int x)
    {
        cout<<endl<<"Invalid gmail address! \nIt should contain 'gmail.com' "<<endl;
    }

    return 0;
}
