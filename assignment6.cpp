#include <iostream>
using namespace std;

class sample {
public:
    int Compute(int (sample::*func)(int), int n) {
        return (this->*func)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char *argv[]) {
    sample obj;

    int fact = obj.Compute(&sample::findFactorial, 4);
    cout << "Factorial: " << fact << endl;

    int find_square = obj.Compute(&sample::findSquare, 8);
    cout << "Square: " << find_square << endl;

    int find_cube = obj.Compute(&sample::findCube, 2);
    cout << "Cube: " << find_cube << endl;

    return 0;
}