#include<iostream>
using namespace std;
int n,i,r=0,f=0,max,ele,ch;
int arr[10];
class linque
{
public:
int f=-1,r=-1;
int max=n-1;
int ele;

linque(){
 f==-1;
 r==-1;
}
void empty();
void full();
void enqueue();
void dequeue();
void peak();
}t[10];
void linque::empty(){
  if(f==-1&&r==-1){
   cout<<"Queue is empty\n";
  }
}
void linque::full(){
 if(r==max){
   cout<<"Queue is full\n";
 }
}
void linque::enqueue(){
 int ele;
 if(r==-1&&f==-1){
   f=0;
   r=0;
 cout<<"Enter the elemement";
 cin>>ele;
   arr[r]=ele;
   r++;
 } 
 else{
    cout<<"Enter the elemement";
 cin>>ele;
    arr[r]=ele;
    r++;
 }
}
void linque::dequeue(){
  if(r==-1&&f==-1){
   cout<<"Queue is empty\n";
  }
  else if(f==r){
    cout<<"element deleted is: "<<f<<"\n";
    f=r=-1;
  }
  else{
  cout<<"element deleted is: "<<f<<"\n";
    f++;
  }
}
void display(){
 for(i=f;i<r+1;i++){
  cout<<arr[i];
 }
}
int main(){
 int ch,i;
 cout<<"Enter the queue Size";
 cin>>n;
 do{
   cout<<"Menu\n1.enqueue\n2.dequeue\n3.empty\n4.full\n5.display\n6.exist\n";
   cout<<"Enter your choice :\n";
   cin>>ch;
   switch(ch){
    case 1:
     for(i=0;i<n;i++){
      arr[i].enqueue();
     }
     break;
     case 2:
      for(i=f;i<r+1;i++){
       arr[i].display();
      }
      break;
   }
 }while(ch!=5);
 
}
