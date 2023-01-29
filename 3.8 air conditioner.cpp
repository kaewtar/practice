#include<iostream>
using namespace std;
int main()
{
    double x;
    cout << "Please input the room temperature: " ;
    cin >> x;
    if ( x > 27 ) cout << "Turn on the air conditioner.\n";
    else cout << "Turn off the air conditioner.\n";
    
    cout << "The operation was completed successfully.";
    return 0;
}