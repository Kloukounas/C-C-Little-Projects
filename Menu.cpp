#include <iostream>

using namespace std;

int main()
{
    int answ;
    int x, y, sum;

    do
    {
        cout << "Press a number between 1-4:" << endl;
        cin >> answ;
        if (answ == 1)
        {
            cout << "Welcome to the programm.";
        }
        else if (answ == 2)
        {
            cout << "Give me 2 Numbers:" << endl;
            cin >> x >> y;
            sum = x + y;
            cout << "The rusult of addition is" << sum << endl;
        }
        else if (answ == 3)
        {
            cout << "Give me 2 Numbers:" << endl;
            cin >> x >> y;
            sum = x * y;
            cout << "The result is:" << sum << endl;
        }
        else
            break;

    } while (answ < 0 && answ > 4);
}
