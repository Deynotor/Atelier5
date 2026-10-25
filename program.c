#include <stdlib.h>

#define HEIGHT 20
#define WIDTH  12

static int world[HEIGHT][WIDTH] = { 0 };

int main(void)
{
    // Structure stable : le bloc (carre 2x2)
    world[1][1] = 1;
    world[1][2] = 1;
    world[2][1] = 1;
    world[2][2] = 1;

    // Oscillateur (periode 2) : le clignotant (blinker)
    world[6][3] = 1;
    world[6][4] = 1;
    world[6][5] = 1;

    // Vaisseau : le planeur (glider)
    world[1][11] = 1;
    world[2][12] = 1;
    world[3][10] = 1;
    world[3][11] = 1;
    world[3][12] = 1;

    // Affichage
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%c ", world[i][j] ? '#' : '.');
        }
        printf("\n");
    }

    return 0;
}