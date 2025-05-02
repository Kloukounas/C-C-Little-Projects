#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Dwse 3 arithmous" << endl;
    cin >> x >> y >> z;
    int max = x;
    if (y > max)
    {
        max = y;
    }
    else
    {
        max = z;

    }
    cout<<"Max="<<max<<endl;
    return 0;
}