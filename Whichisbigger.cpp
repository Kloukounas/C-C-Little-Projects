#include <iostream>

using namespace std;

int main()
{
    int n, num, max = 0;

    cout << "Give me N numbers: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Dose " << (i + 1) << " Arithmo :";
        cin >> num;
        cout<<endl;
        if (num > max)
        {
            max = num;
        }
        cout << "Num: " << num << "Max: " << max << endl;
    }
    return 0;
}