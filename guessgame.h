#ifndef GUESS_H
#define GUESS_H

// guessing game class declaration

class Guess

{

	private:
	int Guesses;
	int guess;
	int answer;
	char userChoice;	// print2() function [Play again?]
	int n;

	public:
	void print();
	void print2(); 

};
#endif
