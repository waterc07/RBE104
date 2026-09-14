#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    cout << "This is an example program\n";

    while (counter < 5) {
        cout << "Current value of the counter: " << counter << endl;
        counter++;
    }
    cout << "This is the end of the example program";
    return 0;
}