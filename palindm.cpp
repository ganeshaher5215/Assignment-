#include<iostream>
#include<string.h>
using namespace std;
int j;
// created one class 
class pal{
public:

int j,length; 
int top;
string str;
char name[];
void accept();
void co_stack();
void ch_pal();
int ca_len();

}s;
//function to accept the string from user 
void pal::accept(){
 cout<<"enter the string to cheak whether the string is palindrome or not:\n";
 getline(cin,str);
 length=ca_len();
}
// function to find lenght of accepted sting
int pal::ca_len(){
 int len = 0;
 while(str[len]!='\0'){
  len++;
 }
 return len;
}
// function to copy string to array and reverse
void pal::co_stack(){
 top=-1;
 for(int i=0;i<length;i++){
   top++;
   name[top]=str[i];
 }
 cout<<"to reverse the string";
 for(int j=top;j>=0;j--){
   cout<<name[j];
 } 
 cout<<"\n";
}
// function to cheak the given string is palindrom or not
void pal::ch_pal(){
 int f=1;
 top=length-1;
 for(int i=0;i<length;i++){
  if(str[i]!=name[top]){
    f=0;
    break;
  }
  top--;
 }

if(f==1){
 cout<<"the gien string is palindrom\n";
 }
else
 cout<<"the given string is not palindrom\n";

}
// main function
int main(){
  s.accept();
  s.co_stack();
  s.ch_pal();
  return 0;
}


