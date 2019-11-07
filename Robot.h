#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
#include <iostream>

class Robot
{
protected:
    int m_position;
    char m_aspect;

public:
    Robot(char asp);
    virtual void avancer(int vit);
    virtual void montrer();

};

void testRobot();

#endif // ROBOT_H_INCLUDED
