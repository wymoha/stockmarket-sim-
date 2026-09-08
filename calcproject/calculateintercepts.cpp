#include <iostream>
#include <iomanip>
#include <math.h>
#include <unistd.h>
using namespace std;

double calcSlope(int y1, int y2, int x2, int x1);
double calcXInt(double m, double b);
double calcYInt(double m, double x, double y);

int main(int argc, char const *argv[])
{
    int x1 = 6;
    int y1 = 14;
    int x2 = 10;
    int y2 = 26;

    cout << fixed << setprecision(3);

    int choice = 1;
    cout << "──────────────────────────────\n";
    cout << "  Linear Equation Solver\n";
    cout << "──────────────────────────────\n";
    cout << "  [1] X-intercept\n";
    cout << "  [2] Y-intercept\n";
    cout << "──────────────────────────────\n";
    cout << "  > ";
    cin >> choice;
    cout << "\n";

    if (choice == 1)
    {
        double m = calcSlope(y1, y2, x2, x1);
        double b = calcYInt(m, x1, y1);
        double xInt = calcXInt(m, b);

        cout << "  Slope         : " << m << "\n";
        cout << "  X-intercept   : " << xInt << "\n";
        cout << "  Y-intercept   : 0\n";
    }
    else if (choice == 2)
    {
        double m = calcSlope(y1, y2, x2, x1);
        double b = calcYInt(m, x1, y1);

        cout << "  Slope         : " << m << "\n";
        cout << "  X-intercept   : 0\n";
        cout << "  Y-intercept   : " << b << "\n";
    }

    cout << "──────────────────────────────\n";

    sleep(10);
    system("clear");
    return 0;
}

double calcSlope(int y1, int y2, int x2, int x1)
{
    double m = (y2 - y1) / (x2 - x1);
    return m;
}
double calcYInt(double m, double x, double y){
    double b = y - m * x;
    return b;
}
double calcXInt(double m, double b){
    double xInt = -b / m;
    return xInt;
}