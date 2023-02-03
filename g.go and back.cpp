#include<iostream> // 1 22 333 22 1
using namespace std;
int main()
{
    int x;
    cin >> x;

    for(int i = 0 ; i < 2 ; i++ ){
        if(i == 0){
            for (int j = 0; j <= x; j++){
                for (int k =0; k <j ; k++){
                    cout << j;
                }
                cout << endl;
            }
        }
        else {
             for (int r = x-1; r > 0 ; r--){
                for (int e = 0; e < r ; e++){
                    cout << r;
                }
                cout << endl;
            }
        }
       
    }
    return 0;
}