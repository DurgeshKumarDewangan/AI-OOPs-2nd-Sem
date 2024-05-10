#include<iostream>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    Complex add(Complex const &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5.5, 4.5), c2(1.5, 3.5);
    Complex c3 = c1.add(c2); 
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum of the complex numbers: ";
    c3.display();

    return 0;
}
