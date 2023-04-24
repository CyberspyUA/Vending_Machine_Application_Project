#include "Drink.h"
#include <thread>
#include <chrono>
class Tea : public Drink
{
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
	//Show function
	void order_show();
	// Coffee procesing functions
	void brewing();
	void sugar_adding();
};	