#include<iostrem>
using namespace std;
class queue{
int f=-1;
int r=-1;
int arr[10];
int max=10;
void inqueue(int x){
  if(f==-1&&r==-1){
    f=0;
    r=0;
    arr[r]=x;
  }
  else if(f==max-1&&r==0||r==f-1){
    cout<<"Queue is full\n";
  }
  else{
     r=(r=1)%max;
     arr[r]=x;
  }
}
void dequeue(){
  if(f==-1&&r==-1){
   cout<<"Queue is empty\n";
  }
  else if(f==r){
    f=-1;
    r=-1;
  }
  else{
     f=(f+1)%max;
    cout<<"queue is deleted"<<arr[f];
  }
}
}
