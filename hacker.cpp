#include<iostream>
using namespace std;
void range(int x)
{
   if(x>=13 && x<=19)
   {
       throw 1;
   }
   else if(x<0)
   {
       throw 2;
   }
   else
   {
       cout<<"not egligible";
   }
   
}
int main()
{
    int age;
    cin>>age;
    try
    {
        range(age);
    }
    catch(int a)
    {
        if(a==1)
        {
         cout<<"egligible";   
        }
        else if(a==2)
        {
            cout<<"wrong ans";
        }
        else
        {
            cout<<"not egligible";
        }
        
        
    }
    return 0;
}