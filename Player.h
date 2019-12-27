#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player 
{
	private:
		int guess;
		int score;
		string name;
		
	public:
		Player (string namae)
		{
			name = namae;
			score = 0;
			guess = 0;
		}
		
		void setName (string namae)
		{
			namae = name;
		}
		
		string getName ()
		{
			return name;
		}
		
		void setGuess (int gue)
		{
			guess = gue;
		}
		
		int getGuess ()
		{
			return guess;
		}
		
		void checkScore (int value)
		{
			if ((guess == 1) && (value & 2 == 0))
			{
				score += 1;
			}
			else if ((guess == 0) && (value % 2 != 0)) 
			{
				score += 1;
			}
			else if ((guess == 1) && (value % 2 != 0))
			{
				score += 1;
			}
			else if ((guess == 0) && ((value % 2) == 0))
			{
				score +=1;
			}
		}
		
		int getScore ()
		{
			return score;
		}
};

#endif
