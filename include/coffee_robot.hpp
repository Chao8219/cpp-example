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
        virtual ~CoffeeRobot(); /**< Default deconstructor. */
        
        int robot_numero; /**< The number of robot. */
        double position_x; /**< The x position of robot. */
        double position_y; /**< The y position of robot. */
        string robot_name; /**< The name of robot */
        
        void print_welcome(); /**< Printing out welcome message. */
        void print_position(); /**< Printing out the current position of robot. */
};

#endif
