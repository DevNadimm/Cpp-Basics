#include <iostream>
using namespace std;

/*
    Expected Output:
    
          *
         ***
        *****
       *******
      *********
     ***********
*/

int main() {
    int n = 6;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n - i); j++){
            cout << " ";
        }

        for (int k = 0; k < 2*i + 1; k++){
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}