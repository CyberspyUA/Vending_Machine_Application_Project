#include "Drink.h"
#include <thread>
#include <chrono>
class Coffee : public Drink
{
private:
	std::string drink_name{};
	int cup_size{};
	int sugar_tea_spoon_quantity{};
	std::string dopping_name{};
	bool is_dopping_added{};
public:
	//Constructors
	Coffee()
	{
	}
	Coffee(std::string coffee_name, int coffee_cup_size, int sugar_spoon_quantity, std::string coffee_dopping_name, bool coffee_is_dopping_added)
	{
		drink_name = coffee_name;
		cup_size = coffee_cup_size;
		sugar_tea_spoon_quantity = sugar_spoon_quantity;
		dopping_name = coffee_dopping_name;
		is_dopping_added = coffee_is_dopping_added;
	}
	//Destructors
	~Coffee() = default;
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
	std::string get_dopping_name()
	{
		std::string copy_dopping_name = dopping_name;
		return copy_dopping_name;
	}
	bool get_is_dopping_added()
	{
		bool copy_is_dopping_added = is_dopping_added;
		return copy_is_dopping_added;
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
	void set_sugar_tea_spoon_quantity(int new_sugar_spoon_quantity)
	{
		sugar_tea_spoon_quantity = new_sugar_spoon_quantity;
	}
	void set_dopping_name(std::string coffee_dopping_name)
	{
		dopping_name = coffee_dopping_name;
	}
	void set_is_dopping_added(bool coffee_is_dopping_added)
	{
		is_dopping_added = coffee_is_dopping_added;
	}
	//Show function
	void order_show() override;
	// Coffee procesing functions
	void brewing();
	void sugar_adding();
	void dopping_adding();
};