#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;

    cout << "Dwse enan artio arithmo: " << endl;
    cin >> x;


    if ((x& 1)==0){
        cout << "Einai Artios";
    }else{
        cout << "Einai Perittos";
    }
    return 0;
}