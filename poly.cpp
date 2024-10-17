#include<iostream>
using namespace std;
class person  {
 public:
  string name;
  int sal;
  int id;
  string occ;
  virtual void accept()=0;
  void display(){
    cout<<"\n\t"<<name<<"\t"<<occ<<"\t"<<id<<endl;
  }
};
class doctor:public person{
  public:
    
    void accept(){
    cout<<"Enter name,occupashion and id and sal:\n";
    cin>>name>>id>>sal;
  }
    void display(){
    cout<<"\n\t"<<name<<"\t"<<occ<<"\t"<<id<<endl;
  }
};
class astaff:public person{
    public:
    int sal;
    void accept(){
       cout<<"Enter name,occupashion and id and sal:\n";
       cin>>name>>occ>>id>>sal;
    }
    void display(){
    cout<<"\n\t"<<name<<"\t"<<occ<<"\t"<<id<<endl;
    }
};
class patient:public person{
  public:
  int bill;
  void accept(){
       cout<<"Enter name,occupashion and id and bill:\n";
       cin>>name>>occ>>id>>bill;
    }
  void display(){
    cout<<"\n\t"<<name<<"\t"<<occ<<"\t"<<id<<"\t"<<bill<<endl;
    }
};
int main(){

 
doctor d;
astaff a;
patient p;
d.accept();
a.accept();
p.accept();
d.display();
a.display();
p.display();
return 0;
}

