#include <iostream>

using namespace std;

int main()
{
    cout<<"Tree size: ";
    int size;
    int pad;
    cin >> size;
    pad = size-1;

    for (int i = 1; i < size*2; i+=2) {
        for (int j = 0; j < pad; ++j) {
            cout << ' ';
        }
        for (int j = 0; j < i; ++j) {
            cout << '*';
        }
        pad--;

        cout << endl;
    }

    for (int k = 0; k < size-1; ++k) cout << ' ';
    cout << '*' << endl;
    return 0;
}
