#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please positivie integers only." << endl;
        return 1;
    }

    if (number == 0) {
        cout << "Binary representation: 0" << endl;
        return 0;
    }

    cout << "Binary representation: ";
    while (number > 0) {
        cout << (number % 2);
        number /= 2;
    }
    
    cout << endl;

    return 0;
}
