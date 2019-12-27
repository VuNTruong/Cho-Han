#include "Player.h"
#include "Dealer.h"
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string name1, name2, re;
	int dice, dice1, dice2;
	int guess1, guess2;
	
	cout << "Player 1 enter your name ";
	cin >> name1;
	
	cout << "Player 2 enter your name ";
	cin >> name2;
	
	Dealer dealer;
	
	Player player1 (name1);
	Player player2 (name2);
	
	cout << player1.getName() << " make a guess! ";
	cin >> guess1;
	player1.setGuess(guess1);
	
	cout << player2.getName() << " make a guess! ";
	cin >> guess2;
	player2.setGuess(guess2);
	 
	cout << "Dealer start rolling the dice ";
	dealer.Roll();
	
	cout << "Rolled! Here is the result of the roll" << endl;
	re = dealer.CheckChoHan();
	cout << re;
	dice1 = dealer.getValueDice1();
	dice2 = dealer.getValueDice2();
	cout << "Value of dice number 1 is " << dice1 << endl;
	cout << "Value of dice number 2 is " << dice2 << endl;
	
	player1.checkScore(dice1 + dice2);
	player2.checkScore(dice1 + dice2);
}	 
