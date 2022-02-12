#pragma once
const short int NumberOfCage=8;
short int positionX,positionY;
short int board[NumberOfCage][NumberOfCage];
short int buffer;
 class  Figure
{
protected:
	short int x,y, figureValue;
	bool side;
public:
	void setX(short int x) { this->x = x; }
	void setY(short int y) { this->y = y; }
	void setfigureValue(short int figureValue) { this->figureValue = figureValue; }
	short int getX() { return x; }
	short int getY() { return y; }
	virtual short int getfigureValue() = 0;
};
class GameBoard
{
private:
	int boardValue;

public:
	void getBoard(short int array[NumberOfCage][NumberOfCage])
	{
		short int board[NumberOfCage][NumberOfCage] =
		{ {2,3,4,5,6,4,3,2},
		  {1,1,1,1,1,1,1,1},
		  {0,0,0,0,0,0,0,0},
		  {0,0,0,0,0,0,0,0}, 
		  {0,0,0,0,0,0,0,0}, 
		  {0,0,0,0,0,0,0,0},
		  {1,1,1,1,1,1,1,1},
		  {2,3,4,5,6,4,3,2}};
		for(int i=0;i<NumberOfCage;i++)
			for (int j = 0; j < NumberOfCage; j++)
			{
				array[i][j] = board[i][j];
			}
	}
};
 class Pawn: public Figure
{

	 short int  figureValue = 1;
	short int y = 1;
public:
	short int getfigureValue() override { return figureValue; }

};
 class Rook : public Figure
 {

	 short int figureValue = 2;
	 short int y = 0;
	 short int getfigureValue() override { return figureValue; }
 };
 class Knight : public Figure
 {

	 short int figureValue = 3;
	 short int y = 0;
	 short int getfigureValue() override { return figureValue; }
 };
 class Bishop : public Figure
 {

	 short int figureValue = 4;
	 short int y = 0;
	 short int getfigureValue() override { return figureValue; }
 };
 class Queen : public Figure
 {

	 short int figureValue = 5;
	 short int y = 0;
	 short int getfigureValue() override { return figureValue; }
 };
 class King : public Figure
 {

	 short int figureValue = 6;
	 short int y = 0;
	 short int getfigureValue() override { return figureValue; }
 };