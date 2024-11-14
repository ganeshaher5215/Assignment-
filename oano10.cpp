#include <iostream>
using namespace std;
class mls{
public:
    string name, singer;
    mls* next; 
    mls* pre;  
    void accept();  
    void display();
    void search(); 
}*start=NULL;
void mls::accept(){
    mls* newnode=new mls;
    cout<<"Enter the Name and singer: \n";
    cin>>newnode->name>>newnode->singer;
    newnode->next=NULL; 
    if(start==NULL){
     //start=newnode;  
    }else{
        mls* temp=start;
        while(temp->next!=NULL){
            temp=temp->next; 
        }
        temp->next=newnode;  
        newnode->pre=temp;   
    }
}
void mls::display(){
    if(start==NULL){
        cout<< "No mls in the list.\n";
    }else{
        mls* temp=start;
        while(temp!=NULL){
            cout<<"Name:"<<temp->name<<",Singer:"<<temp->singer<<endl;
            temp=temp->next;
        }
    }
}
void mls::search() {
    string cc;
    cout<<"Enter the string to search song: \n";
    cin>>cc;  
    mls* temp=start;
    int f=0;
    while(temp != NULL){
        if(temp->name==cc||temp->singer==cc){
            cout<<"Found - Name: "<<temp->name << ", Singer: "<<temp->singer << endl;
            f=1;
            break;
        }
        temp=temp->next;
    }
if(f!=0){
   cout << "No match found for " << cc << ".\n";
}
}
int main(){
    mls d;
    int choice;
    
    do{
        cout<<"\n1. Add \n2. Display \n3. Search \n4. Exit\n";
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
                d.search();
                break;
            case 4:
                cout<<"Exiting program.\n";
                break;
        }
    }while(choice!=0);
    
    return 0;
}

