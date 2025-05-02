#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Apo to 0-100 Poso kauliaris eisai: ";
    cin >> x;

    if (x > 90)
    {
        cout << "TOP G KAULIARIS";
    }
    else if (x > 80)
    {
        cout << "Poli kayla";
    }
    else if (x>70)
    {
        cout<<"Kaulaki";
    }
    else if (x>60)
    {
        cout<<"Meh,,";
    }
    else 
    {
        cout<<"Kinezos";
    }
    return 0;
}