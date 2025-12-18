#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double sigma = 0.074;
  double gamma = 1.0;
  double g = 981.0;
  double U;
  double d;
  
  cout << "Enter bubble diameter d (cm): ";
  cin >> d;
  
  while (d > 0) {
    U = sqrt((g * d) / 2 + (2 * g * sigma) / (gamma * d));
    cout << "For d = " << d << " cm, velocity U = " << U << " cm/s" << endl;
    
    cout << "Enter next diameter: ";
    cin  >> d;
  }
  
  return 0;
}
