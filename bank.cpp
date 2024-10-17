#include <iostream>
using namespace std;
int i;
class mybank
{
public:
int n,accno,amt,pn;
char name[10];

void accept();
void display();
void search();
}b[100];
void mybank::accept(){
cout<<"Enter the no of records to add:\n";
cin>>n;
for(i=0;i<n;i++){
  cout<<"Enter Name\nAmount\nAccount No\npolicy no:\n";
cin>>name>>amt>>accno;
}
}
void mybank::display(){
for(i=0;i<n;i++){
cout<<"\nName:"<<name;
cout<<"\nAmount:"<<amt;
cout<<"\nAccount No:"<<amt;
}
}
void mybank::search(){
 int pno,f=0;
 cout<<"Enter the policy noP:\n";
 cin>>pno;
 for(i=0;i<n;i++){
   if(pno==b[i].pn){
      f=1;
      cout<<"record is present\n";
   }
   if(f==0)
    cout<<"record is not found\n";
 }
}
int main(){
int ch;
do{
cout<<"Menu\n1.accept\n2.Display\n3.Search\n4.Exist:\n";
cout<<"Enter Your choice:";
cin>>ch;
switch(ch){
case 1:
b[i].accept();
break;
case 2:
b[i].display();
break;
case 3:
b[i].search();
break;
}
}while(ch!=0);
return 0;
}
