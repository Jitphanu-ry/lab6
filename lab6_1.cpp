#include<iostream>
using namespace std;

int main(){
    cout << "Enter an integer: ";
    int number,odd=0,even=0;
    cin >> number;
    while(number != 0){
        if(number%2 == 0){
            even++;
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> number;
    }
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
