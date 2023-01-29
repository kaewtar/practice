#include<iostream>

using namespace std;
int main(){
    float x = 5, sum ;
    while(x <= 225){
        sum = sum + x;
        x = x + 10;
    }
    cout << sum;    
    return 0;
}