#include <iostream>

using namespace std;

int main ()
{

    int Array[5];

 for (int i=0;i<5;i++)
 {
     Array[i]=1.1+(i*0.1);
 }
 for(int i=4; i>=0;i--)
 {
    cout<<Array[i]<<endl;
 }
 return 0;
}