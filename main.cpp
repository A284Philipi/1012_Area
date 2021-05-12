#include <iostream>

using namespace std;

int main()
{
    double a, b, c, areaa, areab, areac, aread, areae;
    cin >> a;
    cin >> b;
    cin >> c;
    areaa = (a*c)/2;
    areab = (c*c)*3.14159;
    areac = ((a+b)*c)/2;
    aread = b*b;
    areae = a*b;
    cout.precision(3);
    cout << fixed << "TRIANGULO: " << areaa <<endl<< "CIRCULO: " << areab <<endl<< "TRAPEZIO: " << areac <<endl<< "QUADRADO: " << aread <<endl<< "RETANGULO: " << areae <<endl;
    return 0;
}
