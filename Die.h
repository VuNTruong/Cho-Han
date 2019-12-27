#ifndef DIE_h
#define DIE_H
#include <iostream>
#include <cstdlib>
#include <ctime>

class Die 
{
	private:
		int side;
		int random_integer;
		int lowest; 
		int highest;
		int range;
		
	public:
		Die ()
		{
			random_integer = 0;
			lowest = 1;
			highest = 6;
			srand((unsigned)time(0)); 
		}
		
		void setRange ()
		{
			range = (highest - lowest) + 1;
		}
		
		void roll ()
		{
			//srand((unsigned)time(0)); 
    		//int random_integer; 
    		//int lowest=1, highest=6; 
    		//int range=(highest-lowest)+1; 
        		random_integer = lowest+int(range*rand()/(RAND_MAX + 1.0)); 
		}
		
		int getSides ()
		{
			return side;
		}
		
		int getValue ()
		{
			return random_integer;
		}
};

#endif 
