#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int binnum, decnum=0, i=0, rem;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        int c=pow(2,i);
        decnum = decnum + (rem*c);
        i = i+1;
        binnum = binnum/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<decnum;
    cout<<endl;
    return 0;
}
