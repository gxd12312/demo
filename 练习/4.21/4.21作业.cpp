#include <iostream>
#include <string>
using namespace std;
void s(string a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].length() > a[j + 1].length() || 
               (a[j].length() == a[j + 1].length() && a[j] > a[j + 1])) {
                string temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main() {
    string a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    s(a, 5);
    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
