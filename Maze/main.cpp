#include "Maze.h"



/*Maze Creator and Solver
by Alon Ben Harosh and Shira ostrinsky
Choose 1 to enter your own maze, or 2 to create a random maze.
Then enter wanted higth and width (Max is 99x99) of the maze: need to be odd number for random maze!
If you chose 1: enter the string of chars with only: '*' for wall, or 'space' for blank
The frame must be only '*' and spce for opening point at (1,0) and exit point at (hight-2,width-1)
ENJOY!!!!n */

int main()
{
	int choice, h, w;

	cout << "Enter an Hight and Widht (odd number - max 99) for a random maze:" << endl;

	
	cin >> h>> w;
	cout << endl;
	
	
	Maze maze(h, w);			//build maze skeleton
	maze.create();				//build random maze for odd hight and width
	maze.print();
		
	
	system("pause");

	
	if (maze.solve())				//try to solve
		maze.print();				//solve-print
	else
		cout << "no solution" << endl;
	cout <<endl<< "Thank you!" << endl;
	system("pause");
}
//Choose 1 to enter your own maze, or 2 to create a random maze.
//Then enter wanted higth (3-20) and width (3-80) of the maze: need to be odd number for random maze!
//If you chose 1: enter the string of chars with only: '*' for wall, or 'space' for blank
//The frame must be only '*' and spce for opening point at (1,0) and exit point at (hight-2,width-1)
//ENJOY!!!!

int main()
{
	int choice, h, w;

	cout << "Enter an Hight and Widht (uneven number - max 99) for a random maze:" << endl;


	cin >> h >> w;
	cout << endl;


	Maze maze(h, w);			//build maze skeleton
	maze.create();				//build random maze for odd hight and width
	maze.print();


	system("pause");


	if (maze.solve())				//try to solve
		maze.print();				//solve-print
	else
		cout << "no solution" << endl;
	cout << endl << "Thank you!" << endl;
	system("pause");
}
