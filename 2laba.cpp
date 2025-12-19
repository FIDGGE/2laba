#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sigma, gamma, g, d, U;
    
    sigma = 0.074;
    gamma = 1.0;
    g = 981.0;
    
    
    d = 1.0;
    while (d <= 5.0) {
        U = sqrt(g * d / 2 + 2 * g * sigma / (gamma * d));
        cout << "Для d = " << d << " см, скорость U = " << U << " см/с" << endl;
        d += 1.0;
    }
    
    
    d = 15.0;
    do {
        U = sqrt(g * d / 2 + 2 * g * sigma / (gamma * d));
        cout << "Для d = " << d << " см, скорость U = " << U << " см/с" << endl;
        d += 10.0;
    } while (d <= 55.0);
    
    return 0;
}
