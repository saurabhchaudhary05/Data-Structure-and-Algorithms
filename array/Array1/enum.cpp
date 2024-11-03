#include<iostream>
using namespace std;
main()
{
enum days{sun,mon,tues,wed,thur,fri,sat};
days day1,day2;
day1=sun;
day2=fri;
cout<<day1<<" "<<day2;
if(day1>day2)
{
cout<<"day1 comes after day2";
}
else
{
cout<<"day1 comes before day2";
}
}
