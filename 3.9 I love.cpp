#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int r;
    cout << "Who is the one you love?: ";
    cin >> name;
    cout << "How many rounds do you want to repeat?: ";
    cin >> r;
    cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3" << endl;
    
    int i=0;
    while( i < r ){
        cout << "I love " << name << "." <<endl;
        i++;
        }
   cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
   return 0;
}