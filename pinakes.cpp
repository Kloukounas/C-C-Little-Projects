#include <iostream>

using namespace std;

int main()
{
    int Array[5]={1, 2, 3, 4, 5};
    int Brray[5];

    for (int i = 0; i < 5; i++)
    {
        cout<< Array[i];
    }
    cout<<endl;
    for (int i = 4; i >= 0; i--)
    {
        cout<<Array[i];
    }
}
