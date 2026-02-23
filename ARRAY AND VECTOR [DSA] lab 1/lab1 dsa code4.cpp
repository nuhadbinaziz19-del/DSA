#include<iostream>
#include<vector>
#include<climits>
 using namespace std;
 int main(){
    int max = INT_MIN;
    int a[6] = {20, -30, 40, 80,90};
    for(int i = 0; i < 4; i++){
    int sum = 0;
    for(int j = 0; j < 3; j++){
    sum += a[j + i];
        }
    if(sum > max){
    max = sum;
        }
    }
    cout << "maximum sum of the window is : " << endl;
    cout << max;
}

