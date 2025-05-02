#include <iostream>

using namespace std;

int main()
{
    int pass=6969;
    int Newpass;
    
    
    do{
        cout<<"Password: ";
        cin>>Newpass;
        if(Newpass!=pass)
        { cout<<"please try again."<<endl;}
    }while(Newpass!=pass);
    cout<<"You did it.";

    return 0;
    

}