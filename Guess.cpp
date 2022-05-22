#include <iostream>
#include <cstdio>
//#include <cmath>
#include <cstdlib>

using namespace std;


int main() {
    
    int num;
    
    int numbers[] = {1,2,3,4,5,6,7,8,9};

    int generate;

    for(int i = 0; i < 10; i++){
        generate = numbers[i];
    }

    //cout << "Your generated number is " << generate << endl;
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Please Enter a number" << endl;
    cin >> num;

    while(num != generate){
        if(num < generate || num > generate){
            cout << "Keep Trying!" << endl;
            cout << "Please Enter a number" << endl;
            cin >> num;
        }
    }

    cout << "Congrats you win!, your number is " << num << endl;


   
    
    
    return 0;
}
