#include <iostream>
using namespace std;
int n,i,choice,count=0,flag=0,t;
class lsearch{

int a[20],t;
public:
void accept();
int search();
int count1();
};

void lsearch::accept()
{
cout<<"enter the array size";
cin>>n;
cout<<"enter the array";
for(i=0;i<n;i++)
{
  cin>>a[i];
}
}

int lsearch::search()
{
  cout<<"enter the the target";
  cin>>t;
  for(i=0;i<n;i++)
 {
 if(t==a[i])
  {
   cout<<"target is found"<<i<<" th index";
   return 0;
    }
  }
if (flag==0){
cout<<"target not found";
return 0;
}
return 0;
}
int lsearch::count1()
{
  for(i=0;i<n;i++){
   if(t==a[i]){
    count=count+1;
  }
}
cout<<"target found "<<count<<" times";
return 0;
}
int main(){
lsearch b;;
b.accept();
b.search();
b.count1();
return 0;
}

