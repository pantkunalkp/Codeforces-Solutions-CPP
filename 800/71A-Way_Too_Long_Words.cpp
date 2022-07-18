#include <iostream>
using namespace std;

int main()
{
    int number;
    cin>>number;
    for(int i = 0; i < number; i++){
        string word;
        cin>>word;
        int count = 0;
        if(word.size() <= 10){
            cout<<word<<endl;
            }
        else {
            count = word.size();
            cout<<word[0]<<count - 2 <<word[count - 1]<<endl;
        }
    } 
    
}