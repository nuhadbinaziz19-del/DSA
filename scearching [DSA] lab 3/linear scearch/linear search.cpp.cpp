#include <bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cout<<"Input size:";
  cin>>n;
  vector <int>v;
  for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back (k);
  }
   int q;
   cin>>q;
   for(int i=0;i<n;i++){
    if(v[i]==q){
        cout<<"found"<<endl;
        return 0;

    }
   }
   cout <<"not found";
return 0;
}
