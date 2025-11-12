#include "Zombie.hpp"

int main() {
    int N;
    int i;
    Zombie *ptr;

    N = 3;
    i = 0;
    ptr = zombieHorde(N, "Foo");
    delete[] ptr;
    return (0);
}