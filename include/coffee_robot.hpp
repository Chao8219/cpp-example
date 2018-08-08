#ifndef COFFEE_ROBOT_H
#define COFFEE_ROBOT_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class CoffeeRobot
{
    public:
        CoffeeRobot(); /**< Default constructor. */
        CoffeeRobot(string& robot_name); /**< Overload the constructor with robot_name */
        virtual ~CoffeeRobot();
        
        int robot_numero;
        double position_x;
        double position_y;
        string robot_name;
        
        void print_welcome();
        void print_position();
};

#endif
