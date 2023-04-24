#include "Drink.h"
#include <thread>
#include <chrono>
class Tea : public Drink
{
private:
	std::string drink_name{};
	int cup_size{};
	int sugar_tea_spoon_quantity{};
public:
	//Constructors
	Tea()
	{
	}
	Tea(std::string tea_name, int tea_cup_size, int sugar_spoon_quantity)
	{
		drink_name = tea_name;
		cup_size = tea_cup_size;
		sugar_tea_spoon_quantity = sugar_spoon_quantity;
	}
	//Destructors
	~Tea() = default;
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
	void set_sugar_tea_spoon_quantity(int new_sugar_spoon_quantity)
	{
		sugar_tea_spoon_quantity = new_sugar_spoon_quantity;
	}
	//Show function
	void order_show() override;
	// Coffee procesing functions
	void brewing();
	void sugar_adding();
};	