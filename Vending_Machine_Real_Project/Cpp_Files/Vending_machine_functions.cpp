#include <iostream>
#include "../Header_Files/Vending_machine_functions.h"
#include "../Header_Files/Coffee.h"
#include "../Header_Files/Tea.h"
#include "../Header_Files/Cacao.h"
bool func_is_sugar_needed()
{
    bool is_sugar_needed_confirmation{};
    std::cout << "Do you need sugar?\n"
        << "1 - Yes; 0 - No" << std::endl;
    std::cin >> is_sugar_needed_confirmation;
    return is_sugar_needed_confirmation;
}
int func_sugar_spoons_quantity()
{
    int tea_spoon{ 1 };
    bool is_that_enough = false;
    while (!is_that_enough)
    {
        bool more_sugar_choice = true;
        std::cout << "You have " << tea_spoon << " tea spoons of sugar." << std::endl
            << "Do you need more sugar?" << std::endl
            << "1 - Yes; 0 - No" << std::endl;
        std::cin >> more_sugar_choice;
        if (more_sugar_choice)
        {
            tea_spoon++;
        }
        else
        {
            is_that_enough = true;
        }
    }
    return tea_spoon;
}
bool func_is_dopping_needed()
{
    bool is_dopping_needed_confirmation{};
    std::cout << "Do you need doping?\n"
        << "1 - Yes; 0 - No" << std::endl;
    std::cin >> is_dopping_needed_confirmation;
    return is_dopping_needed_confirmation;
}
std::string func_dopping_choice()
{
    int dopping_choice{};
    func_dopings_show();
    std::cin >> dopping_choice;
    std::cout << std::endl;
    switch (dopping_choice)
    {
    case 1:
    {
        return "Chocolate doping\n";
    }
    case 2:
    {
        return "Caramel doping\n";
    }
    case 3:
    {
        return "Strawberry doping\n";
    }
    case 4:
    {
        return "Huckleberry doping\n";
    }
    case 5:
    {
        return "Raspberry doping\n";
    }
    default:
    {
        std::cout << "Sorry, but this choice is invalid, try again.\n";
        return "";
    }
    }
}
bool func_are_sweets_needed()
{
    bool is_dopping_needed_confirmation{};
    std::cout << "Do you need sweets?\n"
        << "1 - Yes; 0 - No" << std::endl;
    std::cin >> is_dopping_needed_confirmation;
    return is_dopping_needed_confirmation;
}
std::string func_sweets_choice()
{
    int sweets_choice{};
    func_sweets_show();
    std::cin >> sweets_choice;
    std::cout << std::endl;
    switch (sweets_choice)
    {
    case 1:
    {
        return "Original cacao\n";
    }
    case 2:
    {
        return "Spiced cacao\n";
    }
    case 3:
    {
        return "Hot chocolate\n";
    }
    default:
    {
        std::cout << "Sorry, but this choice is invalid, try again.\n";
        return "";
    }
    }
}
bool func_menu(int choice)
{
    switch(choice)
    {
        //Choose a drink
        case 1:
        {
            func_drink_choice();
            return false;
            break;
        }
        case 2:
        {
            func_coffee_show();
            std::cout << "-----------------------------------------------------------------" << std::endl;
            func_tea_show();
            std::cout << "-----------------------------------------------------------------" << std::endl;
            func_cacao_show();
            std::cout << "-----------------------------------------------------------------" << std::endl;
            return false;
            break;
        }
        case 3:
        {
            func_sweets_show();
            return false;
            break;
        }
        case 4:
        {
            func_dopings_show();
            return false;
            break;
        }
        case 5:
        {
            func_instructions_show();
            return false;
            break;
        }
        case 6:
        {
            func_location_show();
            return false;
            break;
        }
        case 7:
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
                std::cout << "Sorry, that options is not available. Try to input again.\n";
                goto input_quit_option_again;
            }
            break;
            return false;
        }
        default:
        {
            std::cout<<"Sorry, but this choice is invalid, try again.\n";
            return false;
            break;
        }
    }
}
void func_options_show()
{
    std::cout << "\t Please, input number from 1 to 7 by keyboard.\n"
        << "\t Available options:\n"
        << "1) Choose a drink\n"
        << "2) Show all drinks\n"
        << "3) Show all sweets\n"
        << "4) Show all dopings\n"
        << "5) Show help menu\n"
        << "6) Locations of other vending machines\n"
        << "7) Quit vending machine.\n";
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
    std::cout << "Sweets:\n"
              << "\t1 Marshmellow\n"
              << "\t2 Chocolate chips\n"
              << "\t3 M&M`s sweets\n";
}
void func_dopings_show()
{
    std::cout<<"Dopings:\n"
             <<"\t1) Chocolate doping\n"
             <<"\t2) Caramel doping\n"
             <<"\t3) Strawberry doping\n"
             <<"\t4) Huckleberry doping\n"
             <<"\t5) Raspberry doping\n";
}
void func_instructions_show()
{
    std::cout<<"\t\tGreetings customer! \n"
             <<"\t This is a Struk.corp vending machine assistant.\n"
             << "\t Firstly, I provide you with drinks menu. You can either choose one or quit.\n"
             << "\t When drink is chosen. I should have some time to make you a drink.\n"
             << "\t It takes from 60 up to 90 seconds.\n"
             << "\t In addition for some drinks, I can serve you with sugar or other sweets.\n"
             << "\t If any questions left, you can replay this message by enterning 5\n";
}
void func_location_show()
{
    std::cout << "You can find other vending machines at following addresses:\n"
        << "*Green Street 82. Oklahoma\n"
        << "*Blue Street 14. Oklahoma\n"
        << "*Red Street 2. New Jersey\n"
        << "*Yellow Street 7. Kentukki\n"
        << "*Brown Street 67. Dallas\n"
        << "*Pink Street 1. Chicago\n";

}
void func_cup_size_show()
{
    std::cout << "Choose one cup among these:\n"
        << "1) 100 ml\n"
        << "2) 200 ml\n"
        << "3) 300 ml\n";
}
bool func_are_you_sure()
{
    bool choice = 0;
    std::cout << "Are you sure?\n" << "1 - Yes, 0 - No\n";
    std::cin >> choice;
    return choice;
}
bool func_drink_choice()
{
    std::cout << "Now, choose a preferable drink. Here what we are serving at the moment.\n";
            func_coffee_show();
            func_tea_show();
            func_cacao_show();
            int drink_choice{};
            std::cout << "1 - Coffee, 2 - Tea, 3 - Cacao\n";
            std::cin >> drink_choice;
            switch (drink_choice)
            {
                case 1:
                {
                    std::cout << "You chose coffee. What coffee drink do you want?\n";
                    func_coffee_show();
                    bool coffee_choice_confirmation = func_coffee_choice();
                    return true;
                    break;
                }
                case 2:
                {
                    std::cout << "You chose tea. What tea drink do you want?\n";
                    func_tea_show();
                    bool tea_choice_confirmation = func_tea_choice();
                    return true;
                    break;
                }
                case 3:
                {
                    std::cout << "You chose cacao. What cacao drink do you want?\n";
                    func_cacao_show();
                    bool cacao_choice_confirmation = func_cacao_choice();
                    return true;
                    break;
                }

                default:
                {
                    std::cout << "Sorry, but this choice is invalid, try again.\n";
                    return false;
                    break;
                }
            }
}
bool func_coffee_choice()
{
    int coffee_choice{};
    std::cin >> coffee_choice;
    switch (coffee_choice)
    {
        case 1:
        {
            std::cout << "Esspresso is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Esspresso" };
                func_cup_size_show();

                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 2:
        {
            std::cout << "Americano is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Americano" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 3:
        {
            std::cout << "Cappuchino is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Cappuchino" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 4:
        {
            std::cout << "Makoto is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Makoto" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 5:
        {
            std::cout << "Doppio is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Doppio" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 6:
        {
            std::cout << "Latte is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Makoto" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 7:
        {
            std::cout << "Irish Whiskey is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Irish Whiskey" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 8:
        {
            std::cout << "Macchiato is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Macchiato" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 9:
        {
            std::cout << "Moccachino is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string coffee_name{ "Moccachino" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                Coffee coffee(coffee_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                coffee.order_show();
                std::cout << "Now, wait for a coffee to get ready.\n";
                coffee.brewing();
                return true;
            }
            else {
                break;
            }
        }
        default:
        {
            std::cout << "Sorry, but this choice is invalid, try again.\n";
            return false;

        }
    }
}
bool func_tea_choice()
{
    int tea_choice{};
    std::cin >> tea_choice;
    switch (tea_choice)
    {
        case 1:
        {
            std::cout << "Black tea is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string tea_name{ "Black tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                Tea tea(tea_name, cup_size, sugar_spoons);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                tea.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                tea.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 2:
        {
            std::cout << "Green tea is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string tea_name{ "Green tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                Tea tea(tea_name, cup_size, sugar_spoons);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                tea.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                tea.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 3:
        {
            std::cout << "Red tea is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string tea_name{ "Black tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                Tea tea(tea_name, cup_size, sugar_spoons);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                tea.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                tea.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 4:
        {
            std::cout << "Yellow tea is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string tea_name{ "Yellow tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                Tea tea(tea_name, cup_size, sugar_spoons);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                tea.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                tea.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 5:
        {
            std::cout << "Fruit tea is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string tea_name{ "Fruit tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                Tea tea(tea_name, cup_size, sugar_spoons);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                tea.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                tea.brewing();
                return true;
            }
            else {
                break;
            }
        }
        default:
        {
            std::cout << "Sorry, but this choice is invalid, try again.\n";
            return false;
        }
    }
}
bool func_cacao_choice()
{
    int cacao_choice{};
    std::cin >> cacao_choice;
    switch (cacao_choice)
    {
        case 1:
        {
            std::cout << "Original cacao is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string cacao_name{ "Original cacao" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                bool are_sweets_needed = func_are_sweets_needed();
                std::string sweets_name{};
                while (sweets_name.empty())
                {
                    sweets_name = func_sweets_choice();
                }
                Cacao cacao(cacao_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed, sweets_name, are_sweets_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                cacao.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                cacao.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 2:
        {
            std::cout << "Spiced cacao is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string cacao_name{ "Spiced cacao tea" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                bool are_sweets_needed = func_are_sweets_needed();
                std::string sweets_name{};
                while (sweets_name.empty())
                {
                    sweets_name = func_sweets_choice();
                }
                Cacao cacao(cacao_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed, sweets_name, are_sweets_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                cacao.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                cacao.brewing();
                return true;
            }
            else {
                break;
            }
        }
        case 3:
        {
            std::cout << "Hot chocolate is chosen. \n";
            bool confirmation = func_are_you_sure();
            if (confirmation)
            {
                std::string cacao_name{ "Hot chocolate" };
                func_cup_size_show();
                int cup_size{};
                while (true)
                {
                    cup_size = func_cup_size_choice();
                    if (cup_size == 100 || cup_size == 200 || cup_size == 300)
                    {
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                bool is_sugar_needed = func_is_sugar_needed();
                int sugar_spoons{};
                if (is_sugar_needed)
                {
                    sugar_spoons = func_sugar_spoons_quantity();
                }
                bool is_dopping_needed = func_is_dopping_needed();
                std::string dopp_name{};
                if (is_dopping_needed) {
                    while (!dopp_name.empty())
                    {
                        dopp_name = func_dopping_choice();
                    }
                }
                bool are_sweets_needed = func_are_sweets_needed();
                std::string sweets_name{};
                while (sweets_name.empty())
                {
                    sweets_name = func_sweets_choice();
                }
                Cacao cacao(cacao_name, cup_size, sugar_spoons, dopp_name, is_dopping_needed, sweets_name, are_sweets_needed);
                std::cout << "Your order\n";
                std::cout << "-----------------------------------------------------------------" << std::endl;
                cacao.order_show();
                std::cout << "Now, wait for a tea to get ready.\n";
                cacao.brewing();
                return true;
            }
            else {
                break;
            }
        }
        default:
        {
            std::cout << "Sorry, but this choice is invalid, try again.\n";
            return false;
        }
    }
}
int func_cup_size_choice()
{
    int cup_choice{};
    std::cin >> cup_choice;
    switch (cup_choice)
    {
        case 1:
        {
            return 100;
            break;
        }
        case 2:
        {
            return 200;
            break;
        }
        case 3:
        {
            return 300;
            break;
        }
        default:
        {
            std::cout << "Sorry, but this choice is invalid, try again.\n";
            break;
        }
    }
}

