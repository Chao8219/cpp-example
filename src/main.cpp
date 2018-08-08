#include "./coffee_shop.cpp"
#include "./coffee_robot.cpp"

int main(){
    string shop_name1 = "Gelman Library";
    CoffeeShop Store_1(shop_name1); /**< Instance with shop_name*/
    Store_1.pass_name();
    string TEA = "Tea";
    string COFFEE = "Coffee";
    Store_1.Bever.add_beverages(TEA);
    Store_1.Bever.add_beverages(COFFEE);

    cout << endl;
    string robot_name_a = "Pseudo";
    string robot_name_b = "Unit 00";
    string robot_name_c = "Unit 01";

    CoffeeRobot robot_fake(robot_name_a);
    CoffeeRobot robot0(robot_name_b);
    CoffeeRobot robot1(robot_name_c);
    vector<CoffeeRobot> robotVec(1,robot_fake); /**< Set the size 1, and put robot_fake into this position. */
    robotVec.push_back(robot0); /**< Push back function add the element at the end of vector. */
    robotVec.push_back(robot1);
    cout << "   " << "The robot vector size is " << robotVec.size() << endl;
    for(int n_robot=0; n_robot<robotVec.size(); n_robot++){
        robotVec[n_robot].print_welcome();
        robotVec[n_robot].print_position();
        cout << endl;
    }

    return 0;
}
