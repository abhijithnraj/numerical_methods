#include "squareroot_newton.hh"
using namespace std;

int newtonsquareroot(int n, int approx)
{
    if(n==1){
        return 1;
    }
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
