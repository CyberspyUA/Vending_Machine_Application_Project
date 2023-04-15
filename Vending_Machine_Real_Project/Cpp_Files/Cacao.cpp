#include "../Header_Files/Cacao.h"
void Cacao::order_show()
{
	std::cout << get_drink_name() << std::endl
		<< "Size of cup: " << get_cup_size() << std::endl
		<< "Sugar full spoons: " << get_sugar_tea_spoon_quantity() << std::endl;
	if (is_dopping_added)
	{
		std::cout << "Dopping added: " << dopping_name << std::endl;
	}
}
// Coffee procesing functions
void Cacao::brewing()
{
	std::string coffee_name{ get_drink_name() };
	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << "Heating water and milk." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(40000));
	std::cout << "Putting a cup." << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(15000));
	std::cout << "Pouring cacao in the cup" << std::endl;
	sugar_adding();
	dopping_adding();
	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << "Your " << coffee_name << " is ready! Enjoy!";
}
void Cacao::sugar_adding()
{
	int sugar_spoons{ get_sugar_tea_spoon_quantity() };
	if (sugar_spoons != 0)
	{
		std::cout << "Adding " << sugar_spoons << " tea spoons of sugar" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(10000));
	}
}
void Cacao::dopping_adding()
{
	if (is_dopping_added)
	{
		std::cout << "Adding " << dopping_name << " in the cup" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(20000));
	}
}
void Cacao::candies_adding()
{
	if (are_candies_added)
	{
		std::cout << "Adding " << candies_name << " in the cup" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	}
}