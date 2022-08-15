#include "squareroot_newton.hh"
using namespace std;

int newtonsquareroot(int n, int approx)
{
    int X = n / 2;
    double root;

    while (true)
    {
        root = 0.5 * (X + n / X);
        if (abs(root - X) < approx)
        {
            break;
        }
        X = root;
    }
    return root;
}
