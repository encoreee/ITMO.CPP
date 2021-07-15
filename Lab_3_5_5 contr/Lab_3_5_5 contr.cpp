#include <iostream>


using namespace std;

void decToBin(int n) {
    if (n < 0) {
        cout << "-";
        decToBin(-n);
    }
    else if (n < 2) {
        cout << n;
        return;
    }
    else {
        decToBin(n / 2);
        int res = n % 2;
        cout << res;
    }
}

int main() {
    int n;
    cout << "Enter an integer number:\n";
    cin >> n;
    cout << "Target:\n";
    decToBin(n);
    cout << endl;
    return 0;
}