#include <stdio.h>
#include <stdlib.h>

void printBoard()
{
	char board[8][8]
        = {
			"rnbqkbnr",
           	"pppppppp",
           	"        ",
           	"        ",
           	"        ",
          	"        ",
          	"PPPPPPPP",
           	"RNBQKBNR"
		   };

char step[20] = "00000000000000000000";

    int i, j;
    printf("\n");
    for (i = 0; i < 8; i++) 
	{
        printf("%d ", 8 - i);
        for (j = 0; j < 8; j++) 
		{
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("  abcdefgh\n");
}

int main()
{
	printBoard();
	return 0;
}

