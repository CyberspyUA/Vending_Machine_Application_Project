#ifndef _VENDING_MACHINE_H_
#define _VENDING_MACHINE_H_
class Vending_Machine
{
public:
	//Constructor
	Vending_Machine() {};
	//Destructor
	~Vending_Machine() {};
	//Virtual functions
	virtual void order_show() = 0;
	virtual void brewing() = 0;
	virtual void sugar_adding() = 0;
	virtual void dopping_adding() = 0;
	virtual void candies_adding() = 0;
};
#endif
