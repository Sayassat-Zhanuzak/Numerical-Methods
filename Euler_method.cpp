#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(double x, double y) {
    return 1 + 2 * x * y * log(y);
}

void euler(double x0, double y0, double h, double x_end) {
    double x = x0;
    double y = y0;
    int cnt = 0;
    double y_val;

    while(x <= x_end + 0.1 - 1e-12) {
        y_val = y + h * f(x, y);
        
        cout << "x = " << x << " " << "y = " << y_val << fixed << setprecision(9) << endl;
        cnt++;
        x = x + h;
        y = y_val;
    }
}

int main() {
    double x0, y0, h, x_end;
    cin >> x0 >> y0 >> h >> x_end;
    euler(x0, y0, h, x_end);
    return 0;
}