#include <iostream>

using namespace std;

int main()
{
    int Array[5];
    int min,max;
    for (int i=0;i<5;i++)
    {
        cout<<"Give me a number: ";
        cin>>min;
    }
    if (min>max){
        max=min;
    }else 
    
    cout<<"The bigger number is"<<max<<endl;

return 0;
}