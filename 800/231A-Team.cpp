#include <iostream>
using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya, count = 0;
    cin>>n;
    while(n--){
        cin>>Petya>>Vasya>>Tonya;
        if(Petya + Vasya + Tonya >= 2) count++;
    }
    
    cout<<count<<endl;

}