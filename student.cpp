#include<iostream>
int i,j,roll,roll1,rec;
using namespace std;
class student{
   public:
   int rno;
   string name;
   void accept();
   void display();
   void bsearch();
  
}b[20];

void student::accept(){
   cout<<"Enter the roll no and name: "<<endl;
   cin>>rno;
   cin>>name;
}
void student::display(){
   cout<<"\n"<<rno<<"\t"<<name<<endl;
}

void lsearch(){
    cout<<"enter the rooll no for search:"<<endl;
    cin>>roll;
    int flag=0;
    
    for(int i=0;i<rec;i++){
     if(roll==b[i].rno){
       cout<<"student is present for traning"<<endl;
       flag=1;
       break;
     }
     }
     if(flag==0){
       cout<<"student was absent";
     }
     
}
void bsearch(){
    int mid,low,high;
    student temp;
    cout<<"the sorted arrays is:"<<endl;
    for(i=0;i<rec;i++){
       for(j=i+1;j<rec;j++){
        if(b[i].rno>b[j].rno){
          temp=b[i];
          b[i]=b[j];
          b[j]=temp;
         }
      } 
   }
   for(i=0;i<rec;i++){
     b[i].display();
   }    
   cout<<"enter the roll no for search:"<<endl;
   cin>>roll1;
   mid=(low+high)/2;
   while(low<high){
   mid=(low+high)/2;
   if(roll1=b[mid].rno){
     cout<<"element present at index :"<<mid<<endl;
   }
   else if(roll1>b[mid].rno){
      low=mid+1;      
   }
   else{
       high=mid-1;
    }
  }
}
int main(){
  int ch;
   do{
     cout<<"\tmenu\n1.accept\n2.display\n3.lsearch\n4.bsearch\n5.Enter 0 for exist"<<endl;
     cout<<"Enter your choice:"<<endl;
     cin>>ch;
     switch(ch){
        case 1:
        cout<<"enter no of records to add:"<<endl;
        cin>>rec;
        for(i=0;i<rec;i++){
          b[i].accept();
        }
        break;
        case 2:
        for(i=0;i<rec;i++){
           b[i].display();
        }
        break;
        case 3:
           lsearch();
        break;  
        case 4:
           bsearch();
        break;     
     }
     
   }while(ch!=0);
  return 0;
}







