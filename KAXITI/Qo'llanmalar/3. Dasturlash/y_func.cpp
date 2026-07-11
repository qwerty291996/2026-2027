#include <iostream>
using namespace std;

// Rasmda berilgan boʻlakli funksiya:
//   y = -1/x^2 ,  agar x < -1
//   y =  x^2   ,  agar -1 <= x <= 2
//   y =  x     ,  agar x > 2
double y(double x) {
    if (x < -1) {
        return -1.0 / (x * x);   // -1/x^2
    } else if (x <= 2) {
        return x * x;            // x^2
    } else {
        return x;                // x
    }
}

int main() {
    // Har uchala boʻlakni tekshirish uchun namuna qiymatlar
    double testlar[] = {-2, -0.5, 2, 3};
    for (double a : testlar) {
        cout << "y(" << a << ") = " << y(a) << endl;
    }
    return 0;
}
