#include<bits/stdc++.h>
using namespace std;

int main (){
 string s;
 cout<<"Enter string:";
 cin>>s;
 cout<< "Your string :"<<s<<endl;

 int i=0;
 int c=0;
 while (s[i]!='\0'){
    c=c+1;
    i=i+1;
 }
cout << "String lenght :"<<c<<endl;
 return 0;
}
