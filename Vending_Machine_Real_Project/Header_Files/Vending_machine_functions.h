#ifndef _VENDING_MACHINE_FUNCTIONS_H_
#define _VENDING_MACHINE_FUNCTIONS_H_
#include <string>
//Choice functions
bool func_menu(int choice);
bool func_drink_choice();
bool func_coffee_choice();
bool func_tea_choice();
bool func_cacao_choice();
int func_cup_size_choice();
std::string func_dopping_choice();
std::string func_sweets_choice();
//Show functions
void func_coffee_show();
void func_tea_show();
void func_cacao_show();
void func_options_show();
void func_sweets_show();
void func_dopings_show();
void func_instructions_show();
void func_location_show();
//Confirmation functions
bool func_are_you_sure();
bool func_is_dopping_needed();
bool func_are_sweets_needed();
//Treats adding function
int func_sugar_spoons_quantity();
#endif 
