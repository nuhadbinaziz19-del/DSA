#include <bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cout<<"Input the number:";
  cin>>n;
   vector <int>v;
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back (k);
  }
  for(int i=0;i<n;i++){
    if(v[i]==v[i++]){
        cout<<"duplicate"<<endl;
        return 0;
    }
      }
   cout <<"not found";


return 0;
}

