#include "Main.h"
#include <iostream>
#include <conio.h>

using namespace std;

void getBoard(short int board[NumberOfCage][NumberOfCage])
{
	for (int i = 0; i < NumberOfCage; i++)
	{
		cout << endl;
		for (int j = 0; j < NumberOfCage; j++)
		{
			cout << board[i][j] << ' ';
		}
	}
}

int main() 
{
	
	GameBoard gameboard;
	gameboard.getBoard(board);
	getBoard(board);
	int x = _getch();
while (x!=27)
	{
		do
		{
				cout << endl << "Enter the position" << endl;
				cin >> positionX >> positionY;
						if (board[positionX][positionY] == 0)
						{
							cout << endl << "This position is empty" << endl;
						}
		} 
		while (board[positionX][positionY] == 0);
		switch (board[positionX][positionY])
		{
		case 1:
			Pawn pawn;
			bool flag=0;
			pawn.setX(positionX);
			pawn.setY(positionY);
			cout << endl << "Pawn is selected"<< endl;
			if(pawn.getY() != 1)
				buffer = (pawn.getX() + 2);
			else
				buffer = (pawn.getX() + 1);
			do
			{
				if(flag==0)
					cout << "Choose the spot" << endl;
				else
				cout << "Let`s try to another spot"<<endl;
				cin >> positionX >> positionY;
				 flag++;
			} while (positionY != pawn.getY() || positionX > buffer);
			board[pawn.getX()][pawn.getY()] = 0;
			board[positionX][positionY] = pawn.getfigureValue();
				break;
		}
		system("cls");
		getBoard(board);
		}
	return 0;
}
