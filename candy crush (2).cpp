#include <iostream> 
#include <Windows.h>
#include <stdlib.h>
#include <conio.h> 
#include  <cmath>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

//Defining keys For Movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

// Functions Prototype
void hard(char board[][10],int x);
void easy(char board1[][8], int x);
void print(char board1[][8], int x);
void print_hard(char board[][10], int x);
void new_candies(char arr[][8], int x);
void new_candies_hard(char arr[][10], int x);
void check_same(char arr[][8], int x);
void check_same_hard(char arr[][10], int x);
void Save(char name[20], int score);

// Global variables
float timer = clock();
int num, i, j, a, b, score = 0, score1, score2, score3,row,col;
string  name1, name2, name3;
char board[10][10],name[20], board1[8][8],change;

                                                        // Main Function

int main()
{
	//variable declaration
	bool key = true;
	bool flag = true;
	int  moves=15, main,gametime;
	int choice, mode;
	
    main: system("cls");
	system("color 4F");	//For Color Screen
	cout << "                      --------------------------- CANDY CRUSH ---------------------------\n\n\n";
	cout << "\n\t\t\t\t\t\t----MENU----\n\n\n\t\t\t\t\t\t1. PLAY GAME\n\t\t\t\t\t\t2. HOW TO PLAY\n\t\t\t\t\t\t3. SCORE\n\t\t\t\t\t\t4. EXIT\n\t\t\tSelect the Number\n";
	cin >> choice;
	switch (choice)		// To select Menu Terms
	{
	case 1:
		if (choice == 1)	//To choose easy or hard mode
		{
			system("cls");
			system("color F0");
			cout << "\n\n\t\tEnter your Name :\t";
			cin.ignore();
			cin.getline(name, 20);	
			cout << "\n\n\t\t\t\t1. Easy Mode\n\t\t\t\t2. Hard Mode\n\tSelect the Number\n";
			cin >> mode;

			if (mode == 1)  // Conditions For Easy Mode
			{
				system("cls");
				system("color 09");
				cout << "\n\t\tOK! You have selected the Easy Mode\n\n";
				cout << "\n Hello " << name << " New Game Begins!!! \n" << endl;
				easy(board1, 8); // To display Game Board of 8x8
				gametime = 0;
				gametime = clock() / 1000;
				timer = clock() / 1000 - gametime;// For Timer

				do {
					cout << "\t\t\t\t\t\t\t\tYou have " << moves << " moves\n";		//number of moves
					cout << "\t\t\t\t\t\t\t\tYour Score = " << score << endl;	//score to display
					cout << "\t\t\t\t\t\t\t\tTimer  " << timer << endl;

					cout << "Enter row ";
					cin >> row;
					cout << "Enter column ";
					cin >> col;
					cout << "press KEY_UP To Swap Upward\n" << "press DOWN_UP To Swap Down ward\n" << "press Right_Key To Swap Right\n" << "press Left_Key To Swap left\n";
					// for swaping of candies using arrow keys
					int c = 0;
					while (key)
					{
						c = 0;

						switch (c = _getch()) {
						case KEY_UP:
							swap(board1[row - 1][col], board1[row][col]);
							key = false;
							break;
						case KEY_DOWN:
							swap(board1[row + 1][col], board1[row][col]);
							key = false;
							break;
						case KEY_LEFT:
							swap(board1[row][col - 1], board1[row][col]);
							key = false;
							break;
						case KEY_RIGHT:
							swap(board1[row][col + 1], board1[row][col]);
							key = false;
							break;
						}
					}
					moves--;
					check_same(board1, 8);     //for crushing of candies 
					new_candies(board1, 8);    //for gernating new candies after crushing
					print(board1, 8);          //for displaying game board again
					key = true;
					timer = clock() / 1000 - gametime;

				} while (moves > 0 && timer < 60);
				if (moves == 0 || timer == 0)
				{
					cout << "\t\t\t\tGame Ended\t\t\t\t";
					Save(name, score);
				}
			}
			else if (mode == 2)    // Conditions For Easy Mode
			{
				system("cls");
				system("color 09");
				cout << "\n\t\tOK! You have selected the Hard Mode\n\n";
				cout << "\n Hello " << name << " New Game Begins!!! \n" << endl;
				hard(board, 10);  // To display Game Board of 10x10
				gametime = 0;
				gametime = clock() / 1000; // for timer
				timer = clock() / 1000 - gametime;

				do {
					cout << "\t\t\t\t\t\t\t\tYou have " << moves << " moves\n";		//number of moves
					cout << "\t\t\t\t\t\t\t\tYour Score = " << score << endl;	//score to display
					cout << "\t\t\t\t\t\t\t\tTimer  " << timer << endl;
					cout << "Enter row ";
					cin >> row;
					cout << "Enter column ";
					cin >> col;
					cout << "press KEY_UP To Swap Upward\n" << "press DOWN_UP To Swap Down ward\n" << "press Right_Key To Swap Right\n" << "press Left_Key To Swap left\n";
					// for swaping of candies using arrow keys
					int c = 0; 
					while (key)
					{
						c = 0;
						switch (c = _getch()) {
						case KEY_UP:
							swap(board[row - 1][col], board[row][col]);
							key = false;
							break;
						case KEY_DOWN:
							swap(board[row + 1][col], board[row][col]);
							key = false;
							break;
						case KEY_LEFT:
							swap(board[row][col - 1], board[row][col]);
							key = false;
							break;
						case KEY_RIGHT:
							swap(board[row][col + 1], board[row][col]);
							key = false;
							break;
						}
					}
					moves--;
					check_same_hard(board, 10); // for crushing of candies
					new_candies_hard(board, 10);//for gernating new candies after crushing
					print_hard(board, 10);      //for displaying game board again
					key = true;
					timer = clock() / 1000 - gametime;
				} 
				while (moves > 0 && timer < 40);
				if (moves == 0 || timer == 0)
				{
					cout << "\t\t\t\tGame Ended\t\t\t\t";
					Save(name, score);
					cout << "\t\t\t\t\t\t\t\tYou have " << moves << " moves\n";		//number of moves
					cout << "\t\t\t\t\t\t\t\tYour Score = " << score << endl;;	//score to display
				}
			}
		}
	
	case 2:
		if (choice == 2)	//To Display HOW TO PLAY
		{
			system("cls");
			system("color 2F");
			cout << setw(50) << ">-- HOW TO PLAY --<\n\n";
			cout << "1.In this game players complete levels by swapping colored pieces of candy on a game board to make a match of three or  more same color candy.""\n""2.You cant be able to swap in cross position.""\n""3.Matches of four or more candies create unique candies that act as power - ups with larger board - clearing abilities.""\n" "4.If you score more then the other player in given time or given moves you simply win the game.";
			cout << "\n\n\n\t\t\t\t\tPress Any Number to go back\n";
			do
			{
				flag = true;
				// to go back to manu
				cin >> main;
				if (main >= 0 && main < 9)
				{
					flag = false;
					goto main;
				}
				else
				{
					cout << "\t\t\t\t\tPress Any Number to go back \n";
				}
			} while (flag);
		}
		break;
	case 3:
		if (choice == 3)	//To Display Score
		{
			system("cls");
			system("color 8F");
			string LargestN = " ", SecondLargestN = " ", ThirdLargestN = " "; // To Default set Top 3 names to Blank
			int lstLarge = 0, SndLarge = 0, TrdLarge = 0; // To default all scores are 0
			int Score = 0; // To read each score from file
			string Name;// To read each Name from file
			ifstream ReadScore; // To read Score file
			ReadScore.open("Score.txt"); // Opens score file
			if (ReadScore.is_open())  // if file opens 
			{
				while (!ReadScore.eof()) // Run loop until we reach end of the text file
				{
					ReadScore >> Score >> Name; // Inputs Score and Name from file
					/* Next to assign Largest , Second Largest and Third Largest Scores respectively*/
					if (Score > lstLarge)
					{
						TrdLarge = SndLarge;
						SndLarge = lstLarge;
						lstLarge = Score;
						ThirdLargestN = SecondLargestN;
						SecondLargestN = LargestN;
						LargestN = Name;

					}
					else if (Score < lstLarge && Score > SndLarge)
					{
						TrdLarge = SndLarge;
						SndLarge = Score;
						ThirdLargestN = SecondLargestN;
						SecondLargestN = Name;
					}
					else if (Score < lstLarge && Score < SndLarge && Score > TrdLarge)
					{
						TrdLarge = Score;
						ThirdLargestN = Name;
					}
				}
			}
			cout << "Highest Score:        " << LargestN << "   " << lstLarge << endl;
			cout << "Second Highest Score: " << SecondLargestN << "   " << SndLarge << endl;
			cout << "Third Highest Score:  " << ThirdLargestN << "   " << TrdLarge << endl;
			cout << "\n\n\n\t\t\t\t\tPress Any Number to go back\n";
			//to go back to menu
			do
			{
				flag = true;
				cin >> main;
				if (main >= 0 && main < 9)
				{
					flag = false;
					goto main;
				}
				else
				{
					cout << "\t\t\t\t\tPress Any Number to go back\n";
				}
			} while (flag);
		}
		break;
	case 4:
		if (choice == 4)	//To Exit The Game
		{
			system("cls");
			system("color 2F");
			cout << "\n\n\n\n\n\t\t\t\t\t<-><-><-> THANKS FOR PLAYING <-><-><->\n\n\n\n\n";
			system("color 0F");
		}
		break;
	default:
		cout << "You entered Wrong Input. Try Again!\n";
		}
		system("pause");
		return 0;
	}
// Function To display and gernating candies with colors for Easy Mode
void easy(char board1[][8],int x)
{
	char randNum;
	
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	cout << "\t";
	for (int r = 0; r < 8; r++)
	{
		cout << "    " << r << "\t";
		for (int c = 0; c < 8; c++)
		{
			switch (rand() % 5)
			{
			case 0:
				randNum = '@';
				break;
			case 1:
				randNum = '$';
				break;
			case 2:
				randNum = '%';
				break;
			case 3:
				randNum = '#';
				break;
			case 4:
				randNum = '&';
				break;
			}
			if ((board1[r][c - 1] == randNum && board1[r][c - 2] == randNum) || (board1[r - 1][c] == randNum && board1[r - 2][c] == randNum))
			{
				c--;
			}
			else
			{
				board1[r][c] = randNum;
			}
		}
	}
	cout << "\n\t -----------------------------------------------------------------\n";
	for (int g = 0; g < 8; g++)
	{
		cout << "    " << g << "\t" ;
		for (int h = 0; h < 8; h++)
		{
			if (board1[g][h] == '@')
			{
				SetConsoleTextAttribute(colors, 1);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '#')
			{
				SetConsoleTextAttribute(colors, 2);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '$')
			{
				SetConsoleTextAttribute(colors, 3);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '%')
			{
				SetConsoleTextAttribute(colors, 4);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '&')
			{
				SetConsoleTextAttribute(colors, 5);
				cout << " | " << board1[g][h] << "\t";
			}
		}
		cout << " | " << endl;
		cout << "\t -----------------------------------------------------------------\n";
	}
}
// Function To display and gernating candies with colors for Hard Mode
void hard(char board[][10],int x)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	char randNum;
	srand(time(NULL));
	cout << "\t";
	for (int r = 0; r < 10; r++)
	{
		cout << "    " << r << "\t";
		for (int c = 0; c < 10; c++)
		{
			switch (rand() % 7)
			{
			case 0:
				randNum = '@';
				break;
			case 1:
				randNum = '$';
				break;
			case 2:
				randNum = '%';
				break;
			case 3:
				randNum = '#';
				break;
			case 4:
				randNum = '&';
				break;
			case 5:
				randNum = '*';
				break;
			case 6:
				randNum = '?';
				break;
			}
			if ((board[r][c - 1] == randNum && board[r][c - 2] == randNum) || (board[r - 1][c] == randNum && board[r - 2][c] == randNum))
				c--;
			else
				board[r][c] = randNum;
		}
	}
	cout << "\n\t ---------------------------------------------------------------------------------\n";
	for (int g = 0; g < 10; g++)
	{
		cout << "    " << g << "\t";
		for (int h = 0; h < 10; h++)
		{
			if (board[g][h] == '@')
			{
				SetConsoleTextAttribute(colors, 1);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '#')
			{
				SetConsoleTextAttribute(colors, 2);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '$')
			{
				SetConsoleTextAttribute(colors, 3);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '%')
			{
				SetConsoleTextAttribute(colors, 4);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '&')
			{
				SetConsoleTextAttribute(colors, 5);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '*')
			{
				SetConsoleTextAttribute(colors, 6);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '?')
			{
				SetConsoleTextAttribute(colors, 7);
				cout << " | " << board[g][h] << "\t";
			}
		}
		cout << " | " << endl;
		cout << "\t ---------------------------------------------------------------------------------\n";
	}
}
//Function To Print Esay board
void print(char board1[][8], int x)
{
	system("cls");
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t";
	for (int r = 0; r < 8; r++)
	{
		cout << "    " << r << "\t";
	}
	cout << "\n\t -----------------------------------------------------------------\n";
	for (int g = 0; g < 8; g++)
	{
		cout << "    " << g << "\t";
		for (int h = 0; h < 8; h++)
		{
			if (board1[g][h] == '@')
			{
				SetConsoleTextAttribute(colors, 1);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '#')
			{
				SetConsoleTextAttribute(colors, 2);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '$')
			{
				SetConsoleTextAttribute(colors, 3);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '%')
			{
				SetConsoleTextAttribute(colors, 4);
				cout << " | " << board1[g][h] << "\t";
			}
			else if (board1[g][h] == '&')
			{
				SetConsoleTextAttribute(colors, 5);
				cout << " | " << board1[g][h] << "\t";
			}
		}
		cout << " | " << endl;
		cout << "\t -----------------------------------------------------------------\n";
	}
}
//Function To Print Hard board
void print_hard(char board[][10], int x)
{
	system("cls");
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t";
	for (int g = 0; g < 10; g++)
	{
		cout << "    " << g << "\t";
	}
	cout << "\n";
	cout << "\t ---------------------------------------------------------------------------------\n";
	for (int g = 0; g < 10; g++)
	{
		cout << "    " << g << "\t";
		for (int h = 0; h < 10; h++)
		{
			if (board[g][h] == '@')
			{
				SetConsoleTextAttribute(colors, 1);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '#')
			{
				SetConsoleTextAttribute(colors, 2);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '$')
			{
				SetConsoleTextAttribute(colors, 3);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '%')
			{
				SetConsoleTextAttribute(colors, 4);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '&')
			{
				SetConsoleTextAttribute(colors, 5);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '*')
			{
				SetConsoleTextAttribute(colors, 6);
				cout << " | " << board[g][h] << "\t";
			}
			else if (board[g][h] == '?')
			{
				SetConsoleTextAttribute(colors, 7);
				cout << " | " << board[g][h] << "\t";
			}
		}
		cout << " | " << endl;
		cout << "\t ---------------------------------------------------------------------------------\n";
	}
}
//function For Crushing Same Candies in Easy Mode
void check_same(char arr[][8],int x)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2]) {           //for L shape
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				arr[i + 2][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score = score + 25;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])                                                 // for horizontal
			{
				arr[i][j] = ' ';
				arr[i][j + 1] = ' ';
				arr[i][j + 2] = ' ';
				score = score + 10;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])                                                 // for vertical
			{
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				score = score + 10;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2])                                        //for left diagonal
			{
				arr[i][j] = ' ';
				arr[i + 1][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score = score + 20;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2]) {                                      //for right diagonal
				arr[i][j] = ' ';
				arr[i + 1][j - 1] = ' ';
				arr[i + 2][j - 2] = ' ';
				score = score + 20;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
		}
	}
}
//function For Crushing Same Candies in Hard Mode
void check_same_hard(char arr[][10], int x)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2]) {           //for L shape
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				arr[i + 2][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score = score + 25;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])                                                 // for horizontal
			{
				arr[i][j] = ' ';
				arr[i][j + 1] = ' ';
				arr[i][j + 2] = ' ';
				score = score + 10;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])                                                 // for vertical
			{
				arr[i][j] = ' ';
				arr[i + 1][j] = ' ';
				arr[i + 2][j] = ' ';
				score = score + 10;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2])                                        //for left diagonal
			{
				arr[i][j] = ' ';
				arr[i + 1][j + 1] = ' ';
				arr[i + 2][j + 2] = ' ';
				score = score + 20;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
			else if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2]) {                                      //for right diagonal
				arr[i][j] = ' ';
				arr[i + 1][j - 1] = ' ';
				arr[i + 2][j - 2] = ' ';
				score = score + 20;
				cout << "\tSWEET\t\n";
				Sleep(1000);
			}
		}
	}
}
//Function To Gernate New candies After Crushing in Easy Mode
void new_candies(char arr[][8],int x)
{
	srand(time(NULL));
	char randNum;
	for (int r = 0; r < 8; r++)
	{
		for (int c = 0; c < 8; c++)
		{
			switch (rand() % 5)
			{
			case 0:
				randNum = '@';
				break;
			case 1:
				randNum = '$';
				break;
			case 2:
				randNum = '%';
				break;
			case 3:
				randNum = '#';
				break;
			case 4:
				randNum = '&';
				break;
			}
			if (arr[r][c] == ' ' || arr[r][c] == '\0')
			{
				arr[r][c] = randNum;
			}
		}
	}
}
//Function To Gernate New candies After Crushing in Hard Mode
void new_candies_hard(char arr[][10], int x)
{
	srand(time(NULL));
	char randNum;
	for (int r = 0; r < 10; r++)
	{
		for (int c = 0; c < 10; c++)
		{
			switch (rand() % 7)
			{
			case 0:
				randNum = '@';
				break;
			case 1:
				randNum = '$';
				break;
			case 2:
				randNum = '%';
				break;
			case 3:
				randNum = '#';
				break;
			case 4:
				randNum = '&';
				break;
			case 5:
				randNum = '*';
				break;
			case 6:
				randNum = '?';
				break;
			}
			if (arr[r][c] == ' ' || arr[r][c] == '\0')
			{
				arr[r][c] = randNum;
			}
		}
	}
}
//Funtion To record score
void Save(char name[20], int score)
{
	ofstream WriteScore;
	WriteScore.open("Score.txt", ios::app);
	WriteScore << score << " " << name << endl;
	WriteScore.close();
}
