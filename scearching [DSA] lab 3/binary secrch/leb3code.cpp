#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<" input size: "<<endl;
    cin>>n;
    vector<int>v;

    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());

    int h = 0;
    for(int i = 0; i < n-1; i++){
        if(v[i] == v[i+1]){
            h++;
            cout<<"duplicate value: "<<v[i]<<endl;
        }
    }
    cout<<"duplicated values size: "<<h<<endl;
}

