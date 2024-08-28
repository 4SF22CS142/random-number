#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(static_cast<unsigned int>(time(nullptr)));
int secretnumber =rand()%100+1;
int a;
cout<<"You have 5 tries"<<endl;
for(int i=1;i<=5;i++)
{
cout<<"Guess the number (between 1-100)"<<endl;
cin>>a;
if(secretnumber<a)
{
    cout<<"it is too high"<<endl;
}
else if(secretnumber>a)
{
    cout<<"it is too low"<<endl;
}
else
{
    cout<<"it is an exact number"<<endl;
    break;
}
}
cout<<"the number is"<<secretnumber<<endl;
return 0;
}
