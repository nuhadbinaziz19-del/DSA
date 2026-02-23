#include<iostream>
#include<vector>
#include<climits>
using namespace std;
 int main(){
        vector<vector<int>> v;
        int k;
        cout << "Enter elements for 3x3 matrix:" << endl;
        for(int r = 0; r < 3; r++){
        vector<int> v1;
         for(int c = 0; c < 3; c++){
        cin >> k;
        v1.push_back(k);
        }
        v.push_back(v1);
        }
         for(int r = 0; r < 3; r++){
         for(int c = 0; c < 3; c++){
         cout << v[r][c] << " ";
        }
        cout << endl;
        }
        int max = INT_MIN;
        for(int r = 0; r < 3; r++){
        for(int c = 0; c < 3; c++){
        if(v[r][c] > max){
        max = v[r][c];
            }
        }
    }
     cout << "Maximum element in the 2D vector is :" << endl;
    cout << max << endl;
}

