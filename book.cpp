#include<iostream>
#include<string.h>
int i,rec;
using namespace std;
class books{
public:
int price,stock;
char *tt,*at,*pub;

books(){
  tt=new char();
  at=new char();
  pub=new char();
  price=100;
  stock=20;
}
void accept(){
 cout<<"enter the book name:";
 cin>>tt;
 cout<<"Athour:";
 cin>>at;
 cout<<"pub:";
 cin>>pub;
 cout<<"price:";
 cin>>price;
 cout<<"enter the stoke:";
 cin>>stock;
}
void display(){
 cout<<tt<<at<<pub<<price<<stock;
}
}b[20];
void search(){
char *name;
name=new char();
cout<<"enter the name of the book:"<<endl;
cin>>name;
for(i=0;i<rec;i++){
  if(strcmp(b[i].tt,name)==0){
     cout<<"book is avalable:"<<endl;
  }
  else
  cout<<"book is not present"<<endl;
}
}
int main(){
 int ch;
  do{
    cout<<"\t\tmenu\n1.accept details\n2.display\n3.search\n enter 0 for exist:"<<endl;
    cout<<"enter tour choice:"<<endl;
    cin>>ch;
    switch(ch){
      case 1:
      cout<<"enter no of records add:"<<endl;
      cin>>rec;
      for(int i=0;i<rec;i++){
        b[i].accept();
      }
      break;
      case 2:
       cout<<"Title:\tAthour\tpublisher\tprice\tstock"<<endl;
 
      for(int i=0;i<rec;i++){
        b[i].display();    
      }
      break;
      case 3:
         search();
      break;   
    }
    
  }while(ch!=0);
return 0;
} 



