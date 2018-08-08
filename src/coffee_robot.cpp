#include "../include/coffee_robot.hpp"

CoffeeRobot::CoffeeRobot(){
    cout << "\n" << "   Robot's name is needed." << endl;
};

CoffeeRobot::CoffeeRobot(string& name){
    if(name=="Unit 00"){
        CoffeeRobot::robot_name = name;
        CoffeeRobot::position_x = 1.00;
        CoffeeRobot::position_y = 1.00;
        CoffeeRobot::robot_numero = 0;
    }
    else if(name=="Unit 01"){
        CoffeeRobot::robot_name = name;
        CoffeeRobot::position_x = -1.00;
        CoffeeRobot::position_y = -1.00;
        CoffeeRobot::robot_numero = 1;
    }
    else if(name=="Pseudo"){
        CoffeeRobot::robot_name = name;
        CoffeeRobot::position_x = 99.00;
        CoffeeRobot::position_y = 99.00;
        CoffeeRobot::robot_numero = 99;
    }
    else{
        cout << "No such robot." << endl;
    }

};

CoffeeRobot::~CoffeeRobot(){};

void CoffeeRobot::print_welcome(){
    cout << "\n" << "   Master, welcome. I am your servering robot " << CoffeeRobot::robot_name;
    cout << endl;
    return;
}

void CoffeeRobot::print_position(){
    cout << "\n" << "   Master, " << CoffeeRobot::robot_name << " is currently ";
    cout << "located at ";
    cout << "x position: " << CoffeeRobot::position_x << " , y position: " << CoffeeRobot::position_y << endl;
    return;
}