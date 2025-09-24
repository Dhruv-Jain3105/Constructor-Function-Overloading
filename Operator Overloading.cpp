// Name: Dhruv Jain
// PRN: 24070123042
// Batch: EnTC A2

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    // Overloading < operator (behaves like >)
    bool operator<(const Number &other) {
        return value > other.value;  // swapped
    }

    // Overloading > operator (behaves like <)
    bool operator>(const Number &other) {
        return value < other.value;  // swapped
    }

    int getValue() {
        return value;
    }
};

int main() {
    Number n1(10), n2(20);

    if (n1 < n2)  // Actually checks 10 > 20
        cout << n1.getValue() << " is greater than " << n2.getValue() << endl;
    else
        cout << n1.getValue() << " is not greater than " << n2.getValue() << endl;

    if (n1 > n2)  // Actually checks 10 < 20
        cout << n1.getValue() << " is smaller than " << n2.getValue() << endl;
    else
        cout << n1.getValue() << " is not smaller than " << n2.getValue() << endl;

    return 0;
}

/*
OUTPUT ::

10 is not greater than 20
10 is smaller than 20
*/
