#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "An thes oles tis pithanes zaries pata 1. Alliws Pata 2 gia na kaneis to allo: " << endl;
    cin >> x;
    if (x == 1)
    {
        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                cout << "zari A:" << i << " " << "zari B: " << j << endl;
            }
        }
    }
    else if (x == 2)
    {
        for (int i = 1; i <= 6; i++)
        {
            for (int j = i; j <= 6; j++)
            {
                cout << "zari A:" << i << " " << "zari B: " << j << endl;
            }
        }
    }
    return 0;
}