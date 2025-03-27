#include <stdio.h>

int main() {
    printf("Left recursion removal example:\n");
    printf("Before: A -> Aα | β\n");
    printf("After: A -> βA'\n       A' -> αA' | ε\n");
    return 0;
}
