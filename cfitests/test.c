#include <stdlib.h>
#include <stdio.h>

void asdf(int hello) {
    printf("function input: %d\n", hello);
}

int main() {
    void (*fdsa)(int) = &asdf;
    fdsa(10);
    fdsa = &exit;
    fdsa(1);
    exit(1);
}
