#ifndef _VENDING_MACHINE_FUNCTIONS_H_
#define _VENDING_MACHINE_FUNCTIONS_H_
#include <string>
bool func_menu(int choice);
//Show functions
void func_coffee_show();
void func_tea_show();
void func_cacao_show();
void func_options_show();
void func_sweets_show();
void func_dopings_show();
void func_instructions_show();
void func_location_show();
//String stream input functions
std::string func_issue_report();
std::string func_leave_suggestions();
//Assistance function
void func_drink_assistance();
//Confirmation functions
bool func_are_you_sure();
bool func_drink_confirmation();

#endif 
