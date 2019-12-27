#ifndef DEALER_H
#define DEALER_h
#include "Die.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Dealer 
{
	private:
		Die dice1;
		Die dice2;
		int valueDie1;
		int valueDie2;
		
	public:
		//Die dice1(int NUM);	
		//Die dice2(int NUM);
	
		
		Dealer ()
		{
			valueDie1 = 0;
			valueDie2 = 0;
		}
		
		void Roll ()
		{
			dice1.roll();
			dice2.roll();
			
			valueDie1 = dice1.getValue();
			valueDie2 = dice2.getValue();	
		}	
		
		int getValue ()
		{
			return valueDie1 + valueDie2;
		}
		
		string CheckChoHan ()
		{
			string result;
			
			if (((valueDie1 + valueDie2) % 2) == 0)
			{
				result = "Cho (Even) ";
			}
			else
			{
				result = "Han (Odd) ";
			}
			
			return result;
		}
		
		int getValueDice1 ()
		{
			return valueDie1;
		}
		
		int getValueDice2 ()
		{
			return valueDie2;
		}
};

#endif		
