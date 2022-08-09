#include "squareroot_newton.hh"
#include <iostream>

int main(int argc, char const *argv[])
{
    double root = newtonsquareroot(16, 1);
    std::cout << root;
    return 0;
}
