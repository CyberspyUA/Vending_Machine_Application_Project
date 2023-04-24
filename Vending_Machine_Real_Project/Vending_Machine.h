#ifndef _VENDING_MACHINE_H_
#define _VENDING_MACHINE_H_
class Vending_Machine 
{
public:
	Vending_Machine() {};
	~Vending_Machine() {};
	//Virtual functions
	virtual void show_order() = 0;
	virtual void brewing() = 0;
	virtual void sugar_adding() = 0;
};
#endif // !_VENDING_MACHINE_H_

