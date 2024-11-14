#include<iostream>
#include<cstring>
using namespace std;
int len=0,i=0;
int lengt();
int lengt(){
  string s1;
  cout<<"enter the string to finding lenght:";
  cin>>s1;
  for(i=0;s1[i]!='\0';i++){
    len++;
  }
  cout<<"length is:"<<len<<endl;
  
  return 0;
}
int comp(){
int len1=0,len2=0,f=0;
string s2,s3;
cout<<"Enter the first string to campare:\n";
cin>>s2;
cout<<"Enter the second string to campare:\n";
cin>>s3;
for(i=0;s2[i]!='\0';i++){
    len1++;
  }
for(i=0;s3[i]!='\0';i++){
    len2++;
  }
if(len1==len2){
  for(i=0;i<len1;i++){
    if(s2[i]!=s3[i]){
      f=1;
      break;
    }
  }
  if(f==0){
   cout<<"strings are same:\n";
  }
  else if(f==1){
  cout<<"strings are not same\n";
  }
  
}
else if(len1!=len2){
  cout<<"strings are not same:\n";
}
return 0;
}
int copy(){
string s6,s7;
cout<<"Enter the first string to copy another:";
cin>>s6;
s7=s6;
cout<<"copyid string is:"<<s7<<"\n";
return 0;
}
int con(){
string s11,s12;
cout<<"Enter the first string to campare:\n";
cin>>s11;
cout<<"Enter the second string to campare:\n";
cin>>s12;
s11=s11+s12;
cout<<"concatinated string is:"<<s11;
return 0;
}
int rev(){
int j,lenr=0;
string r1,r2;
cout<<"\nEnter string to reverse:";
cin>>r1;
for(i=0;r1[i]!='\0';i++){
  lenr++;
  }
   for(j=lenr-1;r1[i]>=0;j--){
   r2[j]=r1[i];
   }
 cout<<"reversed string is : "<<r2;
 return 0;
}
int paldro(){
int p2=0,f=0;
 string p1;
 cout<<"Enter string to palindorme:";
 cin>>p1;
 for(i=0;p1[i]!='\0';i++){
  //  p2++;
    }
    int j=p2-1;
    
    //if(p1[i]==p2[j]){
       f=1;
      j++;
      i++;
    }
    if(f==0){
     cout<<"string isnot palindrom:";
    }
    return 0;
 }
int main(){
 int ch;
 while(ch!=0){
 cout<<"\n\tMenu:\n";
 cout<<"1.find lenght of string:\n2.to compare strings:\n3.to copy strings:\n4.concatinate:\n5.reverse string\n6.Exist 0:\n";
 cout<<"Enter ur choice:\n";
 cin>>ch;
  switch(ch){
   case 1:
     lengt();
     break;
   case 2:
     comp();
     break;
   case 3:
     copy();
     break;
    case 4:
      con();
    case 5:
      rev();
  }
 }
 return 0;
}

