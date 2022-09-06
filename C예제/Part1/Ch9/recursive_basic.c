#include <stdio.h>

void Recursive(void)
{
    printf("Recursive Call!\n");
    // Recursive();
}

int main(void)
{
    Recursive();
    return 0;
}