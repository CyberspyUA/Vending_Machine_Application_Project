#ifndef _DRINK_H_
#define _DRINK_H_
#include <string>
#include <iostream>
class Drink
{
private:
	std::string drink_name{};
	int cup_size{};
	int sugar_tea_spoon_quantity{};
public:
	//Constructors
	Drink()
	{
	}
	Drink(std::string name, int size, int sugar_quantity)
		: drink_name{ name }, cup_size{ size }, sugar_tea_spoon_quantity{ sugar_quantity }
	{
		std::cout << "Your order is "
			<< name << std::endl
			<< "Cup size: " << size << std::endl
			<< "Sugar spoon full quantity: " << sugar_quantity << std::endl;
	}
	// Destructor
	~Drink() = default;

	//Get functions
	std::string get_drink_name()
	{
		std::string copy_drink_name = drink_name;
		return copy_drink_name;
	}
	int get_cup_size()
	{
		int copy_cup_size = cup_size;
		return copy_cup_size;
	}
	
	int get_sugar_tea_spoon_quantity()
	{
		int copy_sugar_tea_spoon_quantity = sugar_tea_spoon_quantity;
		return copy_sugar_tea_spoon_quantity;
	}
	
	//Set functions
	void set_drink_name(std::string new_drink_name) 
	{
		drink_name = new_drink_name;
	}
	void set_cup_size(int new_cup_size)
	{
		cup_size = new_cup_size;
	}
	void set_sugar_tea_spoon_quantity(int new_sugar_tea_spoon_quantity)
	{
		sugar_tea_spoon_quantity = new_sugar_tea_spoon_quantity;
	}
	// Order details functions
	virtual void order_show()
	{
		std::cout << drink_name << std::endl
			<< "Size of cup: " << cup_size << std::endl
			<< "Sugar full spoons: " << sugar_tea_spoon_quantity << std::endl;
	}
};
#endif

