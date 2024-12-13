#include <iostream>
#include <iomanip> // For manipulators
using namespace std;

int main() {
    // Values to convert
    int values[] = {50, 255, 999};

    // Iterate through values
    for (int value : values) {
        cout << "Value: " << value
             << " -> Hexadecimal: " << hex << value
             << " -> Octal: " << oct << value << endl;

        // Reset to decimal for clarity
        cout << dec;
    }

    return 0;
}

