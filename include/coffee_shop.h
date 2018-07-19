#ifndef COFFEE_SHOP_H
#define COFFEE_SHOP_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/** @brief The CoffeeShop class is for a shop
 * that sells coffee, tea, and food, etc.
 * This is declaration, not definition.
 * @author Chao
 */
class CoffeeShop
{
  public:
    string shop_name; /**< The name of this coffee shop.*/
    /** The default constructor.
     * Overload it in case there is no input. 
     */
    CoffeeShop();
    CoffeeShop(string &shop_name);
    /** The default destructor. 
     */
    virtual ~CoffeeShop();
    /** Gonna print out a message for open.
     */
    void print_opening_msg(string &shop_name);
    /** Gonna print out a message for close.
     */
    void print_closed_msg(string &shop_name);
    /** Pass name into the nested classes.
     */ 
    void pass_name();

    /** @brief The Beverages class is designed for
     * including all different kinds of beverages.
    * @author Chao
    */
    class Beverages
    {
      public:
        string beverages_name; /**< The name of the drink.*/
        string shop_name;      /** It is hard to pass the member from outside class,
        so create a new member with same name.*/
        /** The default constructor. 
        */
        Beverages();
        /** The default destructor. 
        */
        virtual ~Beverages();
        /** Add beverages' name into the vector.
        */
        void add_beverages(string &beverages_name);
        /** Display all beverages' name.
        */
        void display_beverages();

      protected:
        vector<string> b_name_list; /**< Store beverages' name*/
    } Bever;

    /** @brief The Foods class is designed for
     * including all different kinds of foods.
    * @author Chao
    */
    class Foods
    {
      public:
        string foods_name; /**< The name of the foods.*/
    } Fooo;
};

#endif
