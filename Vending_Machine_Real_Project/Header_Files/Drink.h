#ifndef _DRINK_H_
#define _DRINK_H_
#include <string>
#include <iostream>
class Drink
{
public:
	//Constructors
	Drink() {};
	
	// Destructor
	~Drink() {};

	// Order details function
	virtual void order_show() = 0;
};
#endif

