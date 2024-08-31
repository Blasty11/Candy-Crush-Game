#include<iostream>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string>

using namespace std;


// print board
void Erowaddress() //prints a,b,c row
{
	cout << "    " << (char)201;
	for (int i = 1; i <= 23; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)203;
		}

	}
	cout << (char)205 << (char)187;
	cout << endl << "    ";
	for (int i = 48; i <= 55; i++)
	{
		cout << (char)186 << " " << (char)i << " ";
	}
	cout << (char)186 << endl << "    ";
	cout << (char)200;
	for (int i = 1; i <= 23; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)202;
		}
	}
	cout << (char)205 << (char)188;
	cout << endl << endl;

}
void Eprintboard(char board[8][8])
{
	system("cls");
	Erowaddress();
	//firstline
	cout << "    " << (char)201;
	for (int i = 1; i <= 23; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)203;
		}
	}
	cout << (char)205 << (char)187;
	cout << endl << "  ";
	//data line
	for (int i = 0; i < 8; i++)
	{
		cout << i << " ";
		for (int j = 0; j < 8; j++)
		{
			cout << (char)186 << " " << board[i][j] << " ";
		}
		cout << (char)186 << endl << "    ";

		//sperator
		if (i < 7)
		{
			cout << (char)204;
			for (int k = 0; k < 8; k++)
			{
				cout << (char)205 << (char)205 << (char)205;
				if (k < 7)
				{
					cout << (char)206;
				}
				else
					cout << (char)185;
			}
			cout << endl << "  ";
		}
	}
	//last line
	cout << (char)200;
	for (int i = 1; i <= 23; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)202;
		}
	}
	cout << (char)205 << (char)188;
	cout << endl << endl;


}
void Hrowaddress() //prints a,b,c row
{
	cout << "    " << (char)201;
	for (int i = 1; i <= 29; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)203;
		}

	}
	cout << (char)205 << (char)187;
	cout << endl << "    ";
	for (int i = 48; i <= 57; i++)
	{
		cout << (char)186 << " " << (char)i << " ";
	}
	cout << (char)186 << endl << "    ";
	cout << (char)200;
	for (int i = 1; i <= 29; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)202;
		}
	}
	cout << (char)205 << (char)188;
	cout << endl << endl;

}
void Hprintboard(char board[10][10])
{
	system("cls");
	Hrowaddress();
	//firstline

	system("cls");
	Hrowaddress();
	//firstline
	cout << "    " << (char)201;
	for (int i = 1; i <= 29; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)203;
		}
	}
	cout << (char)205 << (char)187;
	cout << endl << "  ";
	//data line
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
		for (int j = 0; j < 10; j++)
		{
			cout << (char)186 << " " << board[i][j] << " ";
		}
		cout << (char)186 << endl << "    ";

		//sperator
		if (i < 9)
		{
			cout << (char)204;
			for (int k = 0; k < 10; k++)
			{
				cout << (char)205 << (char)205 << (char)205;
				if (k < 9)
				{
					cout << (char)206;
				}
				else
					cout << (char)185;
			}
			cout << endl << "  ";
		}
	}
	//last line
	cout << (char)200;
	for (int i = 1; i <= 29; i++)
	{
		cout << (char)205;
		if (i % 3 == 0)
		{
			cout << (char)202;
		}
	}
	cout << (char)205 << (char)188;
	cout << endl;


}
// to convert move entered in char array to int array
void move_to_index(char move1[6], int  move[4])
{

	if (move1[0] == '0') { move[0] = 0; }
	else if (move1[0] == '1') { move[0] = 1; }
	else if (move1[0] == '2') { move[0] = 2; }
	else if (move1[0] == '3') { move[0] = 3; }
	else if (move1[0] == '4') { move[0] = 4; }
	else if (move1[0] == '5') { move[0] = 5; }
	else if (move1[0] == '6') { move[0] = 6; }
	else if (move1[0] == '7') { move[0] = 7; }
	else if (move1[0] == '8') { move[0] = 8; }
	else if (move1[0] == '9') { move[0] = 9; }

	if (move1[1] == '0') { move[1] = 0; }
	else if (move1[1] == '7') { move[1] = 7; }
	else if (move1[1] == '6') { move[1] = 6; }
	else if (move1[1] == '5') { move[1] = 5; }
	else if (move1[1] == '4') { move[1] = 4; }
	else if (move1[1] == '3') { move[1] = 3; }
	else if (move1[1] == '2') { move[1] = 2; }
	else if (move1[1] == '1') { move[1] = 1; }
	else if (move1[1] == '8') { move[1] = 8; }
	else if (move1[1] == '9') { move[1] = 9; }

	if (move1[2] == '0') { move[2] = 0; }
	else if (move1[2] == '1') { move[2] = 1; }
	else if (move1[2] == '2') { move[2] = 2; }
	else if (move1[2] == '3') { move[2] = 3; }
	else if (move1[2] == '4') { move[2] = 4; }
	else if (move1[2] == '5') { move[2] = 5; }
	else if (move1[2] == '6') { move[2] = 6; }
	else if (move1[2] == '7') { move[2] = 7; }
	else if (move1[2] == '8') { move[2] = 8; }
	else if (move1[2] == '9') { move[2] = 9; }

	if (move[3] == '0') { move[3] = 0; }
	else if (move1[3] == '9') { move[3] = 9; }
	else if (move1[3] == '8') { move[3] = 8; }
	else if (move1[3] == '7') { move[3] = 7; }
	else if (move1[3] == '6') { move[3] = 6; }
	else if (move1[3] == '5') { move[3] = 5; }
	else if (move1[3] == '4') { move[3] = 4; }
	else if (move1[3] == '3') { move[3] = 3; }
	else if (move1[3] == '2') { move[3] = 2; }
	else if (move1[3] == '1') { move[3] = 1; }

}
//check the correct format of entered move
int move_format_validity_easy(char move[5])
{
	if (move[0] == 'S' || move[0] == 's') { return 9; }
	if (move[0] < '0' || move[0] >= '8') { return 1; }
	if (move[1] < '0' || move[1] >= '8') { return 1; }
	if (move[2] < '0' || move[2] >= '8') { return 1; }
	if (move[3] < '0' || move[3] >= '8') { return 1; }

	return 0;
}
bool move_format_validity_hard(char move[5])
{
	if (move[0] == 'S' || move[0] == 's') { return 9; }
	if (move[0] < '0' || move[0] >= '8') { return 1; }
	if (move[1] < '0' || move[1] >= '8') { return 1; }
	if (move[2] < '0' || move[2] >= '8') { return 1; }
	if (move[3] < '0' || move[3] >= '8') { return 1; }

	return 0;
}
// check if the entered move if valid or not
bool move_validity_easy(char board[8][8], int move[5], int& side)
{
	if (((move[2] - move[0]) > 1) || ((move[2] - move[0]) < -1) || ((move[1] - move[3]) > 1) || ((move[1] - move[3]) < -1))
	{
		return 1;
	}

	char element = (char)board[move[0]][move[1]];
	char board2[8][8];
	// check in row and column

	// check in row that what is present with ending index on both sides 
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			board2[i][j] = board[i][j];
		}
	}
	char swap;
	swap = board2[move[0]][move[1]];
	board2[move[0]][move[1]] = board2[move[2]][move[3]];
	board2[move[2]][move[3]] = swap;

	if (board2[move[2]][move[3] + 1] == element && board2[move[2]][move[3] - 1] == element) //left and right side form ending position
	{
		side = 1;
		return 0;
	}
	if (board2[move[2]][move[3] + 1] == element && board2[move[2]][move[3] + 2] == element) //right side from ending position
	{
		side = 2;
		return 0;
	}
	if (board2[move[2]][move[3] - 1] == element && board2[move[2]][move[3] - 2] == element) // left side from ending position
	{
		side = 3;
		return 0;
	}
	if (board2[move[2] + 1][move[3]] == element && board2[move[2] + 2][move[3]] == element) // downside from ending position
	{
		side = 6;
		return 0;
	}
	if (board2[move[2] - 1][move[3]] == element && board2[move[2] - 2][move[3]] == element) // upside from ending position
	{
		side = 5;
		return 0;
	}
	if (board2[move[2] - 1][move[3]] == element && board2[move[2] + 1][move[3]] == element) //1 up and 1 down from ending position
	{
		side = 4;
		return 0;
	}
	if (board2[move[2] + 1][move[3] + 1] == element && board2[move[2] + 2][move[3] + 2] == element) // right side in main daigonal
	{
		side = 8;
		return 0;
	}
	if (board2[move[2] - 1][move[3] - 1] == element && board2[move[2] - 2][move[3] - 2] == element) // left side in main diagonal
	{
		side = 7;
		return 0;
	}
	if (board2[move[2] - 1][move[3] + 1] == element && board2[move[2] - 2][move[3] + 2] == element) //right side in secondary diagonal
	{
		side = 9;
		return 0;
	}
	if (board2[move[2] + 1][move[3] - 1] == element && board2[move[2] + 2][move[3] - 2] == element) // left side in secondary diagonal
	{
		side = 10;
		return 0;
	}
	if (board2[move[2] + 1][move[3] + 1] == element && board2[move[2] - 1][move[3] - 1]) // in main diagonal one is in right side while other in left
	{
		side = 12;
		return 0;
	}
	if (board2[move[2] + 1][move[3] - 1] == element && board2[move[2] - 1][move[3] + 1]) // in secondary diagonal one is in right side while other in left
	{
		side = 11;
		return 0;
	}
	return 1;

}
bool move_validity_hard(char board[10][10], int move[5], int& side)
{
	if (((move[2] - move[0]) > 1) || ((move[2] - move[0]) < -1) || ((move[1] - move[3]) > 1) || ((move[1] - move[3]) < -1))
	{
		return 1;
	}

	char element = (char)board[move[0]][move[1]];
	char board2[10][10];
	// check in row and column

	// check in row that what is present with ending index on both sides 
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			board2[i][j] = board[i][j];
		}
	}
	char swap;
	swap = board2[move[0]][move[1]];
	board2[move[0]][move[1]] = board2[move[2]][move[3]];
	board2[move[2]][move[3]] = swap;

	if (board2[move[2]][move[3] + 1] == element && board2[move[2]][move[3] - 1] == element) //left and right side form ending position
	{
		side = 1;
		return 0;
	}
	if (board2[move[2]][move[3] + 1] == element && board2[move[2]][move[3] + 2] == element) //right side from ending position
	{
		side = 2;
		return 0;
	}
	if (board2[move[2]][move[3] - 1] == element && board2[move[2]][move[3] - 2] == element) // left side from ending position
	{
		side = 3;
		return 0;
	}
	if (board2[move[2] + 1][move[3]] == element && board2[move[2] + 2][move[3]] == element) // downside from ending position
	{
		side = 6;
		return 0;
	}
	if (board2[move[2] - 1][move[3]] == element && board2[move[2] - 2][move[3]] == element) // upside from ending position
	{
		side = 5;
		return 0;
	}
	if (board2[move[2] - 1][move[3]] == element && board2[move[2] + 1][move[3]] == element) //1 up and 1 down from ending position
	{
		side = 4;
		return 0;
	}
	if (board2[move[2] + 1][move[3] + 1] == element && board2[move[2] + 2][move[3] + 2] == element) // right side in main daigonal
	{
		side = 8;
		return 0;
	}
	if (board2[move[2] - 1][move[3] - 1] == element && board2[move[2] - 2][move[3] - 2] == element) // left side in main diagonal
	{
		side = 7;
		return 0;
	}
	if (board2[move[2] - 1][move[3] + 1] == element && board2[move[2] - 2][move[3] + 2] == element) //right side in secondary diagonal
	{
		side = 9;
		return 0;
	}
	if (board2[move[2] + 1][move[3] - 1] == element && board2[move[2] + 2][move[3] - 2] == element) // left side in secondary diagonal
	{
		side = 10;
		return 0;
	}
	if (board2[move[2] + 1][move[3] + 1] == element && board2[move[2] - 1][move[3] - 1]) // in main diagonal one is in right side while other in left
	{
		side = 12;
		return 0;
	}
	if (board2[move[2] + 1][move[3] - 1] == element && board2[move[2] - 1][move[3] + 1]) // in secondary diagonal one is in right side while other in left
	{
		side = 11;
		return 0;
	}
	return 1;

}
//play mave
void play_move(char board[8][8], int move[4], int side, int& score)

{
	if (side == 1)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// one left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 10;

	}
	else if (side == 2)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}


		// one right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}

		score += 10;
	}
	else if (side == 3)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 2][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}
		score += 10;
	}
	else if (side == 4)
	{

		for (int i = move[2] + 1; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

	}
	else if (side == 5)
	{
		for (int i = move[2]; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 10;
	}
	else if (side == 6)
	{

		for (int i = move[2] + 2; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}
		score += 10;
	}
	else if (side == 7)
	{

		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] - 2; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 1][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}

		score += 20;
	}
	else if (side == 8)
	{

		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] + 2; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}
		score += 20;
	}
	else if (side == 9)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] - 2; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}

		score += 20;
	}
	else if (side == 10)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] + 2; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 1][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}

		score += 20;
	}
	else if (side == 11)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		score += 20;
	}
	else if (side == 12)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in secondary diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// one right side in secondary diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 20;
	}
}
void play_moveH(char board[10][10], int move[4], int side, int& score)

{
	if (side == 1)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// one left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 10;

	}
	else if (side == 2)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}


		// one right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two right from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}

		score += 10;
	}
	else if (side == 3)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left from ending position
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 2][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}
		score += 10;
	}
	else if (side == 4)
	{

		for (int i = move[2] + 1; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

	}
	else if (side == 5)
	{
		for (int i = move[2]; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 10;
	}
	else if (side == 6)
	{

		for (int i = move[2] + 2; i > 0; i--)
		{
			if (i - 3 >= 0)
				board[i][move[3]] = board[i - 3][move[3]];
			else if (i - 2 == 0)
				board[i][move[3]] = board[i - 2][move[3]];
			else if (i - 1 == 0)
				board[i][move[3]] = board[i - 1][move[3]];

		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][move[3] - 1] = '@';
		}
		score += 10;
	}
	else if (side == 7)
	{

		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] - 2; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 1][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}

		score += 20;
	}
	else if (side == 8)
	{

		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] + 2; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}
		score += 20;
	}
	else if (side == 9)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] - 2; i > 0; i--)
		{
			board[i][move[3] + 2] = board[i - 1][move[3] + 2];
		}
		board[0][move[3] + 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 2] == '"')
		{
			board[0][move[3] + 2] = '@';
		}

		score += 20;
	}
	else if (side == 10)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// two left sidein mian diagonal
		for (int i = move[2] + 2; i > 0; i--)
		{
			board[i][move[3] - 2] = board[i - 1][move[3] - 2];
		}
		board[0][move[3] - 2] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 2] == '"')
		{
			board[0][move[3] - 2] = '@';
		}

		score += 20;
	}
	else if (side == 11)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in mian diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		// one right side in mian diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		score += 20;
	}
	else if (side == 12)
	{
		//ending posiotion and its above positions
		for (int i = move[2]; i > 0; i--)
		{
			board[i][move[3]] = board[i - 1][move[3]];
		}
		board[0][move[3]] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3]] == '"')
		{
			board[0][3] = '@';
		}

		// one left side in secondary diagonal
		for (int i = move[2] - 1; i > 0; i--)
		{
			board[i][move[3] + 1] = board[i - 1][move[3] + 1];
		}
		board[0][move[3] + 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] + 1] == '"')
		{
			board[0][move[3] + 1] = '@';
		}

		// one right side in secondary diagonal
		for (int i = move[2] + 1; i > 0; i--)
		{
			board[i][move[3] - 1] = board[i - 1][move[3] - 1];
		}
		board[0][move[3] - 1] = char(rand() % (38 - 34 + 1) + 34);
		if (board[0][move[3] - 1] == '"')
		{
			board[0][move[3] - 1] = '@';
		}

		score += 20;
	}
}


int main()
{
	system("color 0B");
dis:	cout << "1.playgame\n2.credits\n3.instructions\n4.score\n5.exit\nEnter your choice : ";
	int display;
	cin >> display;
	if (display > 5 || display < 1) { system("CLS"); goto dis; }


	if (display == 2)
	{
		system("CLS");
		cout << "Game code written by Umair Altaf & Ahmad Raza \n\nto go back enter 1 : ";
		int credit;
	c:		cin >> credit;
		if (credit == 1) { system("CLS"); goto dis; }
		else { goto c; }
	}
	else if (display == 3)
	{
		system("CLS");
		cout << "1.Row number and column number is written on the sides of the code \n";
		cout << "2.first enter the row number from where you want to pick candy \n";
		cout << "3.then enter the column number from where you want to pick candy \n";
		cout << "4.then enter the row number at where you want to drop candy \n";
		cout << "5.then enter the column number at where you want to drop candy \n";
		cout << "5.If you want to shuffle the board enter 's' \n";
		cout << "7.In easy mode, you have  to complete the game in 60 seconds \n";
		cout << "7.In hard mode, you have  to complete the game in 40 seconds \n\nto go back enter 1 :";

		int instructions;
	i:		cin >> instructions;
		if (instructions == 1) { system("CLS"); goto dis; }
		else { goto i; }
	}
	else if (display == 5)
	{
		return 0;
	}
	else if (display == 4)
	{
		string loaddata;
		ifstream load;
		load.open("names and score.txt", ios::app);

		if (!load.eof()) {
			for (int i = 0; !load.eof() == 1; i++)
			{
				load >> loaddata[i];
			}

			if (loaddata[1] > loaddata[3] && loaddata[1] > loaddata[5])
			{
				cout << "1." << loaddata[0] << "\t" << loaddata[1] << endl;
				if (loaddata[3] > loaddata[5])
				{
					cout << "2." << loaddata[2] << "\t" << loaddata[3] << endl;
					cout << "3." << loaddata[4] << "\t" << loaddata[5] << endl;
				}
				else
				{
					cout << "2." << loaddata[4] << "\t" << loaddata[5] << endl;
					cout << "3." << loaddata[2] << "\t" << loaddata[3] << endl;
				}
			}
			else if (loaddata[3] > loaddata[1] && loaddata[3] > loaddata[5])
			{
				cout << "1." << loaddata[2] << "\t" << loaddata[3] << endl;
				if (loaddata[1] > loaddata[5])
				{
					cout << "2." << loaddata[0] << "\t" << loaddata[1] << endl;
					cout << "3." << loaddata[4] << "\t" << loaddata[5] << endl;
				}
				else
				{
					cout << "2." << loaddata[4] << "\t" << loaddata[5] << endl;
					cout << "3." << loaddata[0] << "\t" << loaddata[1] << endl;
				}
			}
			else if (loaddata[5] > loaddata[3] && loaddata[5] > loaddata[1])
			{
				cout << "1." << loaddata[4] << "\t" << loaddata[5] << endl;
				if (loaddata[1] > loaddata[3])
				{
					cout << "2." << loaddata[0] << "\t" << loaddata[1] << endl;
					cout << "3." << loaddata[2] << "\t" << loaddata[3] << endl;
				}
				else
				{
					cout << "2." << loaddata[2] << "\t" << loaddata[3] << endl;
					cout << "3." << loaddata[0] << "\t" << loaddata[1] << endl;
				}
			}
		}
		else
		{
			cout << "you have not played any game!!\n";
		}

		cout << "Enter 1 to back : ";
		int fourth;
	l:		cin >> fourth;
		if (fourth == 1) { system("CLS"); goto dis; }
		else { goto l; }
	}
	else
	{
		system("CLS");
		cout << "Enter your name : ";
		string name;
		cin >> name;


		int moves = 15;

		srand(time(0));
		string mode;

	A:	cout << "\n\tGame mode\nEasy made\tHard mode\n\nEnter your choice: ";
		cin >> mode;
		int score = 0;
		int move[5];
		char move1[5];
		string gameend = "false";


		if (mode == "Easy" || mode == "easy") {
			char board[8][8];
			char element;

		shuffle:	int time = 120;
			time *= CLOCKS_PER_SEC;


			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					element = char(rand() % (38 - 34 + 1) + 34);
					board[i][j] = element;
					if (i - 2 >= 0 && j - 2 >= 0) // to check left side of main diagonal
					{
						if (board[i - 2][j - 2] == element && board[i - 1][j - 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 8 && j - 2 >= 0) // to check left side of secondary diagonal
					{
						if (board[i + 2][j - 2] == element && board[i + 1][j - 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i - 2 >= 0 && j + 2 < 8) // to check right side of secondary diagonal
					{
						if (board[i - 2][j + 2] == element && board[i - 1][j + 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 8 && j + 2 < 8) // to check right side of main diagonal
					{
						if (board[i + 2][j + 2] == element && board[i + 1][j + 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i - 2 >= 0) // upside in same col
					{
						if (board[i - 1][j] == element && board[i - 2][j] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 8) // bottom side in same col
					{
						if (board[i + 1][j] == element && board[i + 2][j] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (j + 2 < 8) // right side in same row
					{
						if (board[i][j + 1] == element && board[i][j + 2] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (j - 2 >= 0) // left side in same row
					{
						if (board[i][j - 1] == element && board[i][j - 2] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

				}

			}
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (board[i][j] == '"')
					{
						board[i][j] = '@';
					}
				}
			}

			do {
				system("CLS");

				Eprintboard(board);
				cout << "Score = " << score << endl;
				cout << "Time remaining : " << time / 1000 << endl;
				cout << "Moves remaining : " << moves << endl;
				clock_t now = clock();
				if (moves <= 0)
				{
					cout << "moves finish !";
					gameend = "True";
					goto END;
				}
				if (time < 0)
				{
					cout << "Times up !";
					gameend = "True";
					goto END;
				}
				cin.ignore();
			B:			cout << "\nEnter Move : ";
				cin.getline(move1, 5);
				time -= clock() - now;

				if (move_format_validity_easy(move1) == 1) {
					cout << "Invalid move!";
					goto B;
				}
				else if (move_format_validity_easy(move1) == 9) {

					goto shuffle;
				}

				move_to_index(move1, move);
				int side ;
				if (move_validity_easy(board, move, side) == 1) {
					cout << "Invalid move!";
					goto B;
				}

			END:	play_move(board, move, side, score);

				moves--;

			} while (gameend == "false");
		}
		else if (mode == "Hard" || mode == "hard")
		{
			char board[10][10];
			char element;

		shuffle1:	int time = 100;
			time *= CLOCKS_PER_SEC;

			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					element = char(rand() % (40 - 34 + 1) + 34);
					board[i][j] = element;
					if (i - 2 >= 0 && j - 2 >= 0) // to check left side of main diagonal
					{
						if (board[i - 2][j - 2] == element && board[i - 1][j - 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 10 && j - 2 >= 0) // to check left side of secondary diagonal
					{
						if (board[i + 2][j - 2] == element && board[i + 1][j - 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i - 2 >= 0 && j + 2 < 10) // to check right side of secondary diagonal
					{
						if (board[i - 2][j + 2] == element && board[i - 1][j + 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 10 && j + 2 < 10) // to check right side of main diagonal
					{
						if (board[i + 2][j + 2] == element && board[i + 1][j + 1] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i - 2 >= 0) // upside in same col
					{
						if (board[i - 1][j] == element && board[i - 2][j] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (i + 2 < 10) // bottom side in same col
					{
						if (board[i + 1][j] == element && board[i + 2][j] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (j + 2 < 10) // right side in same row
					{
						if (board[i][j + 1] == element && board[i][j + 2] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

					if (j - 2 >= 0) // left side in same row
					{
						if (board[i][j - 1] == element && board[i][j - 2] == element)
						{
							board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							for (; board[i][j] == element;)
							{
								board[i][j] = char(rand() % (38 - 34 + 1) + 34);
							}
						}
					}

				}

			}
			// to replace some unwanted symbols(candies)
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (board[i][j] == '"')
					{
						board[i][j] = '@';
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (board[i][j] == '\'')
					{
						board[i][j] = '*';
					}
				}
			}
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (board[i][j] == '(')
					{
						board[i][j] = 'ß';
					}
				}
			}


			do {
				system("CLS");

				Hprintboard(board);
				cout << "Score = " << score << endl;
				cout << "Time remaining : " << time / 1000 << endl;
				cout << "Moves remaining : " << moves << endl;
				clock_t now = clock();
				if (moves <= 0)
				{
					cout << "moves finish !";
					gameend = "True";
					goto END1;
				}
				if (time < 0)
				{
					cout << "Times up !";
					gameend = "True";
					goto END1;
				}
				cin.ignore();
			B1:			cout << "\nEnter Move : ";
				cin.getline(move1, 5);
				time -= clock() - now;

				if (move_format_validity_hard(move1) == 1) {
					cout << "Invalid move!";
					goto B1;
				}
				else if (move_format_validity_hard(move1) == 9) {

					goto shuffle1;
				}

				move_to_index(move1, move);
				int side;
				if (move_validity_hard(board, move, side) == 1) {
					cout << "Invalid move!";
					goto B1;
				}

			END1:	play_moveH(board, move, side, score);

				moves--;




			} while (gameend == "false");

			Hrowaddress();
			Hprintboard(board);

		}
		else { goto A; }

		ofstream save;
		save.open("names and score.txt");
		save << name << endl;
		save << score << endl;
	}
	return 0;
}
