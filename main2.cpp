#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,rem,bn,i=0,dec=0;
    cout<<"Enter binary number "<<endl;;
    cin>>num;
    bn=num;
    do
    {
        rem=bn%10;
        dec=dec+rem*pow(2,i);
        i++;
        bn=bn/10;
    }while(bn>0);
    cout<<"binary to decimal conversion is ="<<dec<<endl;
    return 0;
}