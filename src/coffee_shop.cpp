#include "../include/coffee_shop.h"

/** cpp file could be used to define all the class members.
 * Also called implementation file.
 */

/** Define Constructer.
 */
CoffeeShop::CoffeeShop()
{
    CoffeeShop::shop_name = "Jon Snow"; /**< Default shop name*/
    print_opening_msg(CoffeeShop::shop_name);
}

CoffeeShop::CoffeeShop(string &shop_name)
{
    CoffeeShop::shop_name = shop_name;
    print_opening_msg(CoffeeShop::shop_name);
}

CoffeeShop::~CoffeeShop()
{
    print_closed_msg(CoffeeShop::shop_name);
}

void CoffeeShop::print_opening_msg(string &shop_name)
{
    cout << "Coffee shop " << shop_name << " is opening!" << endl;
    return;
}

void CoffeeShop::print_closed_msg(string &shop_name)
{
    cout << "Coffee shop " << shop_name << " is closed!" << endl;
    return;
}

CoffeeShop::Beverages::Beverages(){};

CoffeeShop::Beverages::~Beverages(){};

void CoffeeShop::Beverages::add_beverages(string &b_name)
{
    CoffeeShop::Beverages::b_name_list.push_back(b_name);
    cout << b_name << " is added into the menu" << endl;
    return;
}

void CoffeeShop::Beverages::display_beverages()
{
    int size = CoffeeShop::Beverages::b_name_list.size();
    string shop_name = CoffeeShop::Beverages::shop_name;
    cout << "The " << shop_name << " shop provides: ";
    for (int i = 0; i < size; ++i)
    {
        cout << CoffeeShop::Beverages::b_name_list[i] << ", ";
    }
    cout << "etc." << endl;
    return;
}

void CoffeeShop::pass_name()
{
    CoffeeShop::Bever.shop_name = CoffeeShop::shop_name;
    return;
}