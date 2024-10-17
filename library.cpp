#include<iostream>
using namespace std;
class book{
      int cost;
      char name[15];
      char athour[15];
    public:
     void accept();
     void display();
     void ac_or();
     void dc_or();

}b[20],tem;
void book::accept(){
  cout<<"enter the name:"<<endl;
  cin>>name;
  cout<<"enter the author:"<<endl;
  cin>>athour;
  cout<<"enter the cost:"<<endl;
  cin>>cost;
}
void book::display(){
  cout<<"name: \t"<<name;
  cout<<"athour: \t"<<athour;
  cout<<"cost: \t"<<cost;
}
void ac_or(){
int i;
for(int i=0;i<n;i++){
  for(int j=i;j<n;j++){
    if(b[i].cost>b[j].cost){
         tem=b[i];
         b[i]=b[j];
         b[j]=tem;
      }
    }
  }
for(int i=0;i<n;i++){
   b[i].display();
    }
}
void dc_or(){
 int i,tem;
for(int i=0;i<n;i++){
   for(int j=i;j<n;j++){
     if(b[i].cost < b[j].cost){
        tem=b[i];
        b[i]=b[j];
        b[j]=tem;
      }
    }
  }
for(int i=0;i<n;i++){
   b[i].display();
    }
}

int main(){
int ch,book;
do{
  cout<<"enter the choice:"<<endl;
  cout<<"1.accept:"<<endl;
  cout<<"2.display:"<<endl;
  cout<<"3.accending order:"<<endl;
  cout<<"4.decending order:"<<endl;
  cout<<"ending...:"<<endl;
  cin<<ch;
switch(ch){
case 1:
     cout<<"enter the number of books to add:"<<endl;
     cin>>book;
     for(int i=0;i<book;i++){
          b[i].accept();
    }
    break;
case 2:
     for(int i=0;i<book;i++){
         b[i].display();
    }
    break;
case 3: 
        ac_or();
    break;
case 4: 
        dc_or();
    break;
    default:
   cout<<"invalid choice";
}
}while(1);
end :
return 0;
}
