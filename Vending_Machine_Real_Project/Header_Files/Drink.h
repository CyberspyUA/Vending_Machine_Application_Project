#ifndef _DRINK_H_
#define _DRINK_H_
#include <string>
class Drink()
{
private:
	std::string drink_name = "";
public:
	Drink();
	Drink(name);
	std::string set_name(name);
	~Drink();
};
#endif

