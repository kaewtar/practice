#include<iostream>

using namespace std;
int main(){
    float x = 2, sum;
    while(x <= 69 ){
        sum = sum + 1/x;
        x = x + 1;
    }
    cout << sum;    
    return 0;
}