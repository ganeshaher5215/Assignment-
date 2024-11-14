#include<iostream>
using namespace std;
class complex{
int r,im;
public:
complex(){
r=0;
im=0;
}
complex(int a,int b){
r=a;
im=b;
}
void display(){
if(im>0){
 cout<<r<<"+"<<im<<"i \n";
}
else{
 cout<<r<<""<<im<<"i \n";
}
}
complex operator +(complex);
complex operator -(complex);
complex operator *(complex);
complex operator /(complex);

}c1,c2,c3;
complex complex::operator+(complex c2){
c3.r=r+c2.r;
c3.im=im+c2.im;
return c3;
}
complex complex::operator -(complex c2){
c3.r=r-c2.r;
c3.im=im-c2.im;
return c3;
}
complex complex::operator*(complex c2){
c3.r=r*c2.r-im*c2.im;
c3.im=r*c2.im+im*c2.r;
return c3;
}
int main(){
int a,b,ch;
cout<<"Enter first & second no:\n";
cin>>a>>b;
complex c1(a,b);
cout<<"Enter first & second no:\n";
cin>>a>>b;
complex c2(a,b);
do{
cout<<"Menu\n1.addition\n2.substraction\n3.mul\n4.Exist 0\n";
cout<<"enter your choice:\n";
cin>>ch;
switch(ch){
case 1:
c3=c1+c2;
c3.display();
break;
case 2:
c3=c1-c2;
c3.display();
break;
case 3:
c3=c1*c2;
c3.display();
}
}while(ch!=0);
return 0;
}
