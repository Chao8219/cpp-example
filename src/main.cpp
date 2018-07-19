#include "./coffee_shop.cpp"

int main(){
    string shop_name1 = "Gelman Library";
    CoffeeShop Store_1(shop_name1); /**< Instance with shop_name*/
    Store_1.pass_name();
    string TEA = "Tea";
    string COFFEE = "Coffee";
    Store_1.Bever.add_beverages(TEA);
    Store_1.Bever.add_beverages(COFFEE);
    return 0;
}