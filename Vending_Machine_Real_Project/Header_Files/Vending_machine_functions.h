#ifndef _VENDING_MACHINE_FUNCTIONS_H_
#define _VENDING_MACHINE_FUNCTIONS_H_
#include <string>
//Choice functions
bool func_menu(int choice); //Функція головного меню
bool func_drink_choice(); //Функція вибору напою (кави, чаю, какао)
bool func_coffee_choice(); // Функція вибору виду кави
bool func_tea_choice(); // Функція вибору виду чаю
bool func_cacao_choice(); // Функція вибору виду какао
int func_cup_size_choice(); // Функція вибору розміру стакану
std::string func_dopping_choice(); // Функція вибору допінгу
std::string func_sweets_choice(); // Функція вибору солодощів
//Show functions
void func_coffee_show(); // Функція відображення видів кави
void func_tea_show(); // Функція відображення видів чаю
void func_cacao_show(); // Функція відображення видів какао
void func_options_show(); // Функція відображення варіантів вибору у головному меню
void func_sweets_show(); // Функція відображення видів солодощів
void func_dopings_show(); // Функція відображення видів допінгів
void func_instructions_show(); // Функція відображення інструкцій використання додатком
void func_location_show(); // Функція відображення місцезнаходження автоматів такого типу
//Confirmation functions
bool func_are_you_sure(); // Функція підтвердження вибору
bool func_is_dopping_needed(); // Функція підтвердження додання допінгу до напою
bool func_are_sweets_needed(); // Функція підтвердження додання солодощів до напою
//Treats adding function
int func_sugar_spoons_quantity(); // Функція підрахунку та додання чайних ложок цукру
#endif 
