#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

// void staircase(int n) {
//     for(int i=0;i<n;i++) {
//         cout << setfill(' ') << setw(n-(i+1)) << "";
//         cout << setfill('#') << setw(i+1) << '#'<< endl;
//     }
// }


//Duas maneiras de fazer esse código

void staircase(int n) {
    for (int i= 0; i< n; i++) {
        for (int j= 0; j< n; j++) {
            if (i+j >= n - 1) {
                cout << "#";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}


int main() {
    staircase(5);
}
