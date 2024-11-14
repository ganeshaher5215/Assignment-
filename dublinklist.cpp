#include<iostream>
using namespace std;
class donor {
public:

string name, add;  
donor *next, *temp;
void accept();
void display();
void search();
}*start=NULL;
void donor::accept(){
donor *newnode=new donor; 
cout<<"Enter the Name and Address: \n";
cin>>newnode->name>>newnode->add;
newnode->next=NULL; 
if(start==NULL){
start=newnode;  
 }else{
 temp=start;
 while(temp->next!=NULL){
 temp=temp->next;  
 }
 temp->next=newnode;  
}
}
void donar::search(){
  string cc;
  cout<<"Enter the string to search:\n";
  cin>>cc;
  temp=start;
while(temp!=NULL){
 if(  )

}
void donor::display(){
if(start==NULL){
 cout<<"No donors in the list.\n";
}
else{
    temp=start;
    while(temp != NULL){
     cout<<"Name: "<<temp->name<<", Address: "<<temp->add<< endl;
     temp=temp->next;  
        }
    }
}
int main(){
    donor d;
    int choice;
    string searchn;
    while(true){
        cout<<"\n1. Add Donor\n2. Display Donors\n3.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                d.accept();
                break;
            case 2:
                d.display();
                break;
            case 3:
                cout<<"Exiting program.\n";
                break;
             }
        }  
        return 0;
    } 
