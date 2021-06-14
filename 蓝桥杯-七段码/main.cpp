#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void show(int);

enum
{
    A = 1,
    B = A << 1,
    C = B << 1,
    D = C << 1,
    E = D << 1,
    F = E << 1,
    G = F << 1,
};
void show(int total)
{
    int erJiGuan_light;
    char erJiGuan[3][3 + 1] = {"   ", "   ", "   "};
    for (erJiGuan_light = A; erJiGuan_light <= G; erJiGuan_light <<= 1)
    {
        switch (erJiGuan_light & total)
        {
        case A:
            erJiGuan[0][1] = '_';
            break;
        case B:
            erJiGuan[1][2] = '|';
            break;
        case C:
            erJiGuan[2][2] = '|';
            break;
        case D:
            erJiGuan[2][1] = '_';
            break;
        case E:
            erJiGuan[2][0] = '|';
            break;
        case F:
            erJiGuan[1][0] = '|';
            break;
        case G:
            erJiGuan[1][1] = '_';
            break;
        }
    }
    printf("%d:\n", total);
    puts(erJiGuan[0]);
    puts(erJiGuan[1]);
    puts(erJiGuan[2]);
}
int main()
{
    int total;
    for (total = 1; total < 128; total++)
    {
        show(total);
    }
    return 0;
}