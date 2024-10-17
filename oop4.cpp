#include<iostream>
using namespace std;
int i,n=0;
class student{
public:
int prn,n;
string name;
void get();
};
class test:public student
{
public:
  string subject[5];
  int c[5];
  int e[5];
  void getm();
  void dis();
}t[10];
void student::get(){
  cout<<"enter the name and prn:\n";
  cin>>name;
  cin>>prn;
}
void test::getm(){
for(i=0;i<=5;i++){
  cout<<"Enter the subject:\n";
  cin>>subject[i];
  cout<<"enter cla marks:\n";
  cin>>c[i];
  cout<<"enter end sem marks:\n";
  cin>>e[i];
  }
  n++;
}
void test::dis(){
for(i=0;i<n;i++)
  cout<<"prn"<<"\t"<<"name"<<endl;
  cout<<prn<<"\t"<<name<<endl;
  for(i=0;i<5;i++){
    cout<<subject[i]<<"\t"<<c[i]<<"\t"<<e[i]<<"\n";
    }
    n++;
}
int main(){
int ch,i;
do{
cout<<"menu\n1.accept\n2.display\n";
cout<<"Enter your choice:";
cin>>ch;
switch(ch){
case 1:
   t[n].get();
   t[n].getm();
 break;
case 2:
  t[n].dis();
 
 break;
}
}while(ch!=0);
return 0;
}
