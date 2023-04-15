#include"Header_Files/Vending_machine_functions.h"
#include <iostream>
int main()
{
    func_instructions_show();
    bool res{ false };
    while (res == false)
    {
        
        func_options_show();
        int choice{};
        std::cin >> choice;
        res = func_menu(choice);
        std::cout << "**************************************************************************" << std::endl;
    }
    return 0;
}