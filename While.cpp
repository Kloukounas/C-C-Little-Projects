#include <iostream>

using namespace std;

int main()
{
    int num;
    int sum = 0, count = 0;
    while (1)
    {
        cout << "Dwse noumero:" << endl;
        cin >> num;
        
        if (num < 0)
        {
            cout << "OUT"<<endl;
            break;
        }
        sum+=num;//sum=sum+num
        count++;//count=count+1 gia to plh8os.
        cout<<"Edose noumero: "<<num<<endl;
    }
    cout<<(double)sum/count;
    return 0;
}
