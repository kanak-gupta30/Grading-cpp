#include<iostream.h>
#include<conio.h>
char grade[5];
char name[20];
int avg,sum;
class grades{
public:
void input();
void calculation();
void highest();
void lowest();
};
void grades::highest()
{
char high=grade[0];
for(int i=0;i<5;i++)
{
if(grade[i]<high)
high=grade[i];
}
cout<<endl<<"highest grade is "<<high<<endl;
}
void grades::lowest()
{
char low=grade[0];
for(int i=0;i<5;i++)
{
if(grade[i]>low)
low=grade[i];
}
cout<<"lowest grade "<<low<<endl;
}
void grades::input(){
cout<<"-----[ Average Grade ] , [ Highest Grade ] , [ Lowest Grade ]-----"<<endl;
cout<<endl<<"Enter student name :";
cin>>name;
for(int i=0;i<5;i++)
{
cout<<"Enter your grades in "<< i+1<<" subject:";
cin>>grade[i];
}
}
void grades::calculation()
{
for(int i=0;i<5;i++)
{
if(grade[i]==65 || grade[i]==97)
sum+=95;
else if(grade[i]==66 || grade[i]==98)
sum+=85;
else if(grade[i]==67 || grade[i]==99)
sum+=75;
else if(grade[i]==68 || grade[i]==100)
sum+=65;
else if(grade[i]==69 || grade[i]==101)
sum=+55;
else
sum+=45;
}
avg=sum/5;
cout<<endl<<"Average Grade is ";
if(avg<100 && avg>=90)
{cout<<"A grade";     }
else{
 if(avg<90 && avg>=80)
{cout<<"B grade"; }
else{
 if(avg<80 && avg>=70)
{cout<<"C grade"; }
else {
if(avg<70 && avg>=60)
{cout<<"D grade";  }
else {
if(avg<60 && avg>=50)
{cout<<"E grade";    }
else
cout<<"F grade"; }  } }}
}
void main()
{
class grades ob;
clrscr();
ob.input();
ob.calculation();
ob.highest();
ob.lowest();
getch();
}