#include<iostream>
#include<vector>
using namespace std;
    int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(15);
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    v.push_back(55);
    v.push_back(80);
 int start = 2;
 int end=5;
 int sum = 0;
 for(int i = start;i<=end;i++){
 sum=sum+v[i];
}
 cout<<sum<<endl;
}

