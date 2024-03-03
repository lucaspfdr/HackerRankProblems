#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    std::vector<int> candles = {82, 49, 82, 82, 41, 82, 15, 63, 38, 25};
    int candleCount = 0, tallest = 0;
    
    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] > candles[i+1]) {
            tallest = candles[i];
        }
    }
    
    for (int j = 0; j < candles.size(); j++) {
        if (tallest == candles[j]) {
            candleCount++;
        }
    }
    std::cout << "Contador: " << candleCount << std::endl;
    return candleCount;

}