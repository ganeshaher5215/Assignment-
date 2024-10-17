#include <iostream>
#include <cstring> 
using namespace std;
int f=-1; 
int r=-1; 
class Pizza {
private:
    char *name;
    char *add;
    int q; 
public:
    Pizza() {
        name=new char[50];
        add=new char[100]; 
    }
    ~Pizza() {
        delete[] name; 
        delete[] add;  
    }
 void accept();
 void serve();
 void display();
 static int count;
}p[10]; 

void Pizza::accept() {
    if(r==9) {
       cout<< "Queue is full!" << endl; 
       return;
    }
    if(f==-1&&r==-1){ 
        f=0;
        r=0;
    } else{
        r++; 
    }
    
    cout<<"Enter the name, address, and quantity:\n";
    cin>>name>>add>>q; 
}
void Pizza::serve(){
 if(f==-1){
   cout<< "No orders to serve!" << endl; 
   return;
}
cout<<p[f].name<< ", "<<p[f].add<<", Quantity:"<<p[f].q<<", price:"<<p[f].q*100<<endl;
if(f==r){
  f=-1; 
  r=-1;
}else{
  f++;
}
}
void Pizza::display() {
  
}

int main() {
int n,choice;
cout<<"enter no of rec:";
cin>>n;
while(true) {
cout<<"1. Accept Order\n2. Serve Order\n3. Exit\nEnter your choice: ";
cin>>choice;
switch(choice) {
   case 1:
   for(int i=0;i<n;i++){
   p[i].accept(); 
   }
   break;
   case 2:
   for(int i=f;i<r+1;i++){
   p[i].serve(); 
   }
   break;
   case 3:
   return 0; 
   default:
   cout<<"Invalid choice, please try again.\n";
  }
}
return 0;
}
