#include <iostream>
#include <vector>
#include <array>
using namespace std;


int main() {
    std::vector<int> arr = {1, 3, -34, 5, -6, -6, 2, -90, -6, 5, -6, 99, -6, 156, 0, 0, -6, 15, -6, 0, -90, -62, -10, 17, 0, 4};
    float positiveFraction =0, negativeFraction =0, zeroFraction =0;
    int positiveCount = 0, negativeCount = 0,zeroCount = 0;
    std::vector<float> result;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            positiveCount += 1;
        }
        else if (arr[i] < 0) {
            negativeCount += 1;
        }
        else {
            zeroCount += 1;
        }
    }
    // Calculando as frações
    positiveFraction = static_cast<float>(positiveCount) / arr.size();
    negativeFraction = static_cast<float>(negativeCount) / arr.size();
    zeroFraction = static_cast<float>(zeroCount) / arr.size();

    // Adicionando as frações ao vetor de resultados
    result.push_back(positiveFraction);
    result.push_back(negativeFraction);
    result.push_back(zeroFraction);
    

    //Este loop é um exemplo de um loop de range-based (ou loop for-each), introduzido no C++11. Ele permite iterar sobre os elementos de um contêiner de forma muito mais simples e legível.

    //O loop de intervalo (range-based for loop) tem a mesma complexidade de tempo que um loop convencional em termos de Big O. Ambos têm uma complexidade de tempo linear, ou seja, eles executam um número de iterações proporcional ao tamanho do contêiner sobre o qual estão iterando. No entanto, em termos de legibilidade e conveniência, o loop de intervalo pode ser considerado melhor em muitos casos. Ele simplifica a sintaxe, eliminando a necessidade de lidar com iteradores e índices explicitamente, o que pode levar a menos erros e a um código mais limpo. Isso pode tornar o código mais fácil de entSender e manter.


    for (float fraction : result) {
        std::cout << fraction << " ";
    }

    // Exemplo de loop convencional
    
    // for (int j = 0; j<result.size(); j++) {
    //     float fraction;
    //     fraction = result[j];
    //     std::cout << fraction << " ";
    // }
    std::cout << std::endl;

    return 0;
}


    



