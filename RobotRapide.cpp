#include "RobotRapide.h"

RobotRapide::RobotRapide(char asp) : Robot(asp)
{}

void RobotRapide::avancer(int vit)
{
    Robot::avancer(2*vit);
}

void testRobotRapide()
{
    RobotRapide x{'C'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
