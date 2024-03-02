#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    std::vector<int> arr = {1, 4, 10, 2, 7};
    int min = 0, max = 0;

    sort(arr.begin(),arr.end());


    //Neste caso para arrays pequenos pode-se fazer 2 for loop ou uma soma direta
    
    // for (int i = 0; i<4; i++) {
    //     min += arr[i];
    // }
    
    // for (int j = 4; j>0; j--) {
    //     max += arr[j];
    // }
    min = arr[0] + arr[1] + arr[2] + arr[3];
    max = arr[1] + arr[2] + arr[3] + arr[4];

    
    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;


    return 0;
}