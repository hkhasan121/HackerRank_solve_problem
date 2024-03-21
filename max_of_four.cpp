 #include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}

int main() {
    int p, q, r, s;
    cin >> p >> q >> r >> s;
    int max = max_of_four(p, q, r, s);
    cout << max;
    return 0;
}
