#include "Drink.h"
#include <thread>
#include <chrono>
#include "../Header_Files/Vending_Machine.h"
class Cacao : public Drink
{
private:
	std::string dopping_name{};
	bool is_dopping_added{};
	std::string candies_name{};
	bool are_candies_added{};
public:
	//Constructors
	Cacao()
	{

	}
	Cacao(std::string cacao_name, int cacao_cup_size, int sugar_spoon_quantity, std::string cacao_dopping_name, bool cacao_is_dopping_added, std::string cacao_candies_name, bool cacao_are_candies_added)
	{
		set_drink_name(cacao_name);
		set_cup_size(cacao_cup_size);
		set_sugar_tea_spoon_quantity(sugar_spoon_quantity);
		dopping_name = cacao_dopping_name;
		is_dopping_added = cacao_is_dopping_added;
		candies_name = cacao_candies_name;
		are_candies_added = cacao_are_candies_added;
	}
	//Destructors
	~Cacao() = default;
	//Get functions
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
	std::string get_candies_name()
	{
		std::string copy_candies_name = candies_name;
		return copy_candies_name;
	}
	bool get_are_candies_added()
	{
		bool copy_are_candies_added = are_candies_added;
		return copy_are_candies_added;
	}
	//Set functions
	void set_dopping_name(std::string cacao_dopping_name)
	{
		dopping_name = cacao_dopping_name;
	}
	void set_is_dopping_added(bool cacao_is_dopping_added)
	{
		is_dopping_added = cacao_is_dopping_added;
	}
	void set_candies_name(std::string cacao_dopping_name)
	{
		candies_name = cacao_dopping_name;
	}
	void set_are_candies_added(bool cacao_are_candies_added)
	{
		are_candies_added = cacao_are_candies_added;
	}
	//Show function
	void order_show();
	// Coffee procesing functions
	void brewing();
	void sugar_adding();
	void dopping_adding();
	void candies_adding();
};