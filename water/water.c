#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int a = get_int();
    int minutes = a;
    int bottles = minutes*12;
    printf("Bottles: %d\n", bottles);
}