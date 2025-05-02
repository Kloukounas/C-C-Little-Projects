#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Give me a number:";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "-_-";
        }
        cout << endl;
    }
}