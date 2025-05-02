#include <iostream>

using namespace std;

int main()
{
    int n, num, count = 0;

    cout << "Dwse enan Arithmo:\t" << endl;
    cin >> n;

    if (n >= 10 && n <= 20)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "One" << endl;
        }
    }
    else
    {
        for (int i = 0; i <10 ; i++)
        {
            cout << "Dose " << (i + 1) << " Arithmo :\t";
            cin >> num;
            cout << endl;
            if (num < 0)
            {
                count++;
            }
            cout<<"Autoi einai oi arithmoi:"<<count<<endl;
        }
    }

    return 0;
}