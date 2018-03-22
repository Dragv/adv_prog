#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    int X1 = 0;
    int Y1 = 0;
    int X2 = W;
    int Y2 = H;

    // game loop
    while (1) {
        char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        scanf("%s", bombDir);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        if(!strcmp(bombDir, "U")){
            Y2 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
        } else if (!strcmp(bombDir, "UR")){
            Y2 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
            X1 = X0;
            X0 = X1 + (X2 - X1)/2;
        } else if (!strcmp(bombDir, "R")){
            X1 = X0;
            X0 = X1 + (X2 - X1)/2;
        } else if (!strcmp(bombDir, "DR")){
            X1 = X0;
            X0 = X1 + (X2 - X1)/2;
            Y1 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
        } else if (!strcmp(bombDir, "D")){
            Y1 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
        } else if (!strcmp(bombDir, "DL")){
            Y1 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
            X2 = X0;
            X0 = X1 + (X2 - X1)/2;
        } else if (!strcmp(bombDir, "L")){
            X2 = X0;
            X0 = X1 + (X2 - X1)/2;
        } else if (!strcmp(bombDir, "UL")){
            Y2 = Y0;
            Y0 = Y1 + (Y2 - Y1)/2;
            X2 = X0;
            X0 = X1 + (X2 - X1)/2;
        }

        // the location of the next window Batman should jump to.
        printf("%d %d\n", X0, Y0);
    }

    return 0;
}
