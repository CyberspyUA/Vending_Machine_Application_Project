#include "../Header_Files/Tea.h"
void Tea::order_show()
{
	std::cout << get_drink_name() << std::endl
		<< "Size of cup: " << get_cup_size() << std::endl
		<< "Sugar full spoons: " << get_sugar_tea_spoon_quantity() << std::endl;
}
// Tea procesing functions
void Tea::brewing()
{
	std::string tea_name{ get_drink_name() };
	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << "Heating water and milk." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(40000));
	std::cout << "Shrinking tea leafs." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	std::cout << "Putting a cup." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(15000));
	std::cout << "Pouring tea in the cup" << std::endl;
	sugar_adding();
	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << "Your " << tea_name << " is ready! Enjoy!";
}
void Tea::sugar_adding()
{
	int sugar_spoons{ get_sugar_tea_spoon_quantity() };
	if (sugar_spoons != 0)
	{
		std::cout << "Adding " << sugar_spoons << " tea spoons of sugar" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	}
}
