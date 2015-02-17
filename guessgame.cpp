#include "guessgame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Guess::print()

{
	Guesses = 4;

	cout << "Let's play a guessing game." << endl; 
	cout << "Can you guess a number(1-10) within " << Guesses << " tries? \n"; 

	srand(time(0));
	answer = rand() % 10 + 1; 			// numbers from 1 to 10
	
	for (int n=0; n<Guesses; n++)
{

	cout << "Guess#" << n+1 << ": ";		// get guess from user
	cin >> guess;

	if(guess != answer) 
	{ 
		if(guess > answer)
		{
			cout << "The number is lesser.\n";
		} else {cout << "The number is greater.\n";} 

	}else
	{
		if(n<Guesses-1)
		{cout << "That was fast! You won!\n";
		break;}
		else 
		cout << "You won!\n"; 	
	}
}
	print2();
};


void Guess::print2()

{
	cout << "Play again? Y for Yes, N for No. ";
	cin >> userChoice;
	
	if (userChoice == 'Y' || userChoice == 'y')
	print();
	else if (userChoice == 'N' || userChoice == 'n')

}

int main()

{
	Guess game;
	game.print();
	
	return 0;	
}

