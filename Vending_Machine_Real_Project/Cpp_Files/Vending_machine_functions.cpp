#include <iostream>
#include "../Header_Files/Vending_machine_functions.h"
bool func_menu(int choice)
{
    switch(choice)
    {
        //Choose a drink
        case 1:
        {
            std::cout << "Now, choose a preferable drink. Here what we are serving at the moment.\n";
            func_coffee_show();
            func_tea_show();
            func_cacao_show();
            int drink_choice{};
            std::cout << "1 - Coffee, 2 - Tea, 3 - Cacao";
            switch(drink_choice)
            {
                case 1:
                {
                    std::cout << "You chose coffee. What coffee drink do you want?\n";
                    func_coffee_show();
                }
                case 2:
                {
                    std::cout << "You chose tea. What tea drink do you want?\n";
                    func_tea_show();
                }
                case 3:
                {
                    std::cout << "You chose cacao. What cacao drink do you want?\n";
                    func_cacao_show();
                }
                case 4:
                {

                }
                case 5:
                {

                }
                case 6:
                {

                }
                case 7:
                {

                }
                case 8:
                {

                }
                case 9:
                {

                }
                case 0:
                {

                }
                default:
                {
                    std::cout << "Sorry, but this choice is invalid, try again.";
                }
            }
        }
        case 2:
        {
            func_coffee_show();
            func_tea_show();
            func_cacao_show();
        }
        case 3:
        {
            func_sweets_show();
        }
        case 4:
        {
            func_dopings_show();
        }
        case 5:
        {
            func_instructions_show();
        }
        case 6:
        {
            func_location_show();
        }
        case 7:
        {
            func_issue_report();
        }
        case 8:
        {
            func_leave_suggestions();
        }
        case 9:
        {
            func_drink_assistance();
        }
        case 0:
        {
            
            std::cout << "Are you sure you want to quit? \n"
                      << "1 - Yes; 0 - No \n";
            input_quit_option_again:
            int quit_choice{};
            std::cin >> quit_choice;
            if(quit_choice == 0){
                return false;
            }
            else if(quit_choice == 1){
                return true;
            }
            else{
                std::cout << "Sorry, that options is not available. Try to input again.";
                goto input_quit_option_again;
            }
        }
        default:
        {
            std::cout<<"Sorry, but this choice is invalid, try again.";
        }
    }
}
void func_options_show()
{
    std::cout << "\t Please, input number from 1 to 0 by keyboard.\n"
        << "\t Available options:\n"
        << "1) Choose a drink\n"
        << "2) Show all drinks\n"
        << "3) Show all sweets\n"
        << "4) Show all dopings\n"
        << "5) Show help menu\n"
        << "6) Locations of other vending machines\n"
        << "7) Issue report\n"
        << "8) Leave a suggestions\n"
        << "9) Assistance in choosing drinks\n"
        << "0)Quit vending machine.\n";
}
void func_coffee_show()
{
    std::cout<<"Coffee:\n"
             <<"\t1. Esspresso\n"
             <<"\t2. Americano\n"
             <<"\t3. Cappuchino\n"
             <<"\t4. Makoto\n"
             <<"\t5. Doppio\n"
             <<"\t6. Latte\n"
             <<"\t7. Irish Whiskey\n"
             <<"\t8. Machiato\n"
             <<"\t9. Moccachino\n";
     
}
void func_tea_show()
{
    std::cout << "Tea: \n"
        << "\t1. Black tea\n"
        << "\t2. Green tea\n"
        << "\t3. Red tea\n"
        << "\t4. Yellow tea\n"
        << "\t5. Fruit tea\n";
}
void func_cacao_show()
{
    std::cout << "3) Cacao: \n"
        << "\t1. Original cacao\n"
        << "\t2. Spiced cacao\n"
        << "\t3. Hot chocolate\n";
}
void func_sweets_show()
{
    std::cout<<"Sweets:\n"
             <<"\t* Marshmellow\n"
             <<"\t* Chocolate chips\n"
             <<"\t* White sugar\n"
             <<"\t* Brown sugar\n";
}
void func_dopings_show()
{
    std::cout<<"Dopings:\n"
             <<"\t* Chocolate doping\n"
             <<"\t* Caramel doping\n"
             <<"\t* Strawberry doping\n"
             <<"\t* Huckleberry doping\n"
             <<"\t* Raspberry doping\n";
}
void func_instructions_show()
{
    std::cout<<"\t\tGreetings customer! \n"
             <<"\t This is a Struk.corp vending machine assistant.\n"
             << "\t Firstly, I provide you with drinks menu. You can either choose one or quit.\n"
             << "\t When drink is chosen. I should have some time to make you a drink.\n It takes from 15 seconds up to 1 minute.\n"
             << "\t In addition for some drinks, I can serve you with sugar or other sweets."
             << "\t If any questions left, you can replay this message by enterning 5";
}
void func_location_show()
{
    
}
std::string func_issue_report()
{

}
std::string func_leave_suggestions()
{

}
void func_drink_assistance()
{

}
bool func_are_you_sure()
{
    bool choice = 0;
    std::cout << "Are you sure?\n" << "1 - Yes, 0 - No\n";
    std::cin >> choice;
}
bool func_drink_confirmation()
{

}