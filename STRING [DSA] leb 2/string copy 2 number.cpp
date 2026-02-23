#include<bits/stdc++.h>
using namespace std;
int main(){
     string p = "ABCD";
     string q = "XYZ";
    char k[8];
    int i = 0;
    int j = 0;
    while (i < p.length()) {
    k[j++] = p[i++];
    }
    i = 0;
    while (i < q.length()) {
    k[j++] = q[i++];
    }
    k[j] = '\0';
    cout<<"size of int j: "<<j<<endl;
    cout << "Combined string: " << k << endl;
    return 0;
}

