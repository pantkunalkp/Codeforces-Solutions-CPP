#include <iostream>

using namespace std;

int main(){
    int n, k, count = 0;
    cin >> n >> k;
    int positions[n];
    
    for(int i = 0; i<n; i++){
        cin>>positions[i];
    }
    
    int qualified = positions[k-1]; //kth position
    
    for(int i = 0; i<n; i++)
    {
        if(positions[i] >= qualified && positions[i] != 0) count++;
           
    }
    
    cout<<count<<endl;
    
}
