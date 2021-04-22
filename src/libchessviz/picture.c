#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libchessviz/tools.h>
#include <libchessviz/desk.h>
#include <math.h>



void Preparation (char Table_chess [9][9])
{

    Table_chess[0][1] = 'a', Table_chess[0][2] = 'b', Table_chess[0][3] = 'c', Table_chess[0][4] = 'd',
	Table_chess[0][5] = 'e', Table_chess[0][6] = 'f', Table_chess[0][7] = 'g', Table_chess[0][8] = 'h',
	Table_chess[1][0] = '1', Table_chess[2][0] = '2', Table_chess[3][0] = '3', Table_chess[4][0] = '4',
	Table_chess[5][0] = '5', Table_chess[6][0] = '6', Table_chess[7][0] = '7', Table_chess[8][0] = '8';
	//Áåëàÿ êîììàíäà
	Table_chess[1][1] = 'R', Table_chess[1][2] = 'N', Table_chess[1][3] = 'B', Table_chess[1][4] = 'Q',
	Table_chess[1][5] = 'K', Table_chess[1][6] = 'B', Table_chess[1][7] = 'N', Table_chess[1][8] = 'R';
	for (int p = 0; p < 8;p++)
	{
		Table_chess[2][p+1] = 'P';
	}
	//×¸ðíàÿ êîììàíäà
	Table_chess[8][1] = 'r', Table_chess[8][2] = 'n', Table_chess[8][3] = 'b', Table_chess[8][4] = 'q',
	Table_chess[8][5] = 'k', Table_chess[8][6] = 'b', Table_chess[8][7] = 'n', Table_chess[8][8] = 'r';
	for (int p = 0; p < 8;p++)
	{
		Table_chess[7][p+1] = 'p';
	}
}
