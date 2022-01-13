#include <iostream>
using namespace std;
int main()
{
    long double i=1,fact=1,num;
    cout<<"\nEnter Numbers you want Factorial: ";
    cin>>num;
    for(i;i<=num;i++)
    {
        fact=fact*i;
        cout<<fact<<endl;
    }
        cout<<"\n\tFactorial of "<<num<<"! : "<<fact;
    return 0;
}
