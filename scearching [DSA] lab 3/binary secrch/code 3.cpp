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
  int q;
   cin>>q;
  //for(int i=0;i<n;i++){
   // if(v[i]==v[i++]){
       // cout<<"duplicate"<<endl;
        //return 0;
    //}

  //}
      int start =0;
      int last =n-1;
      while (start<=last){
        int mid=(start +last)/2;
        if (v[mid]==q){
            cout<<"found";
            return 0;
        }
        else if(q<v[mid]){
        start=mid+1;
        }
        else{
            last=mid-1;
        }
      }
   cout <<"not found";

return 0;
  }
