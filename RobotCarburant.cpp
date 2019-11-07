#include "RobotCarburant.h"

RobotCarburant::RobotCarburant(char asp,char trace, int carburant): RobotTraceur(asp,trace),m_carburant{carburant}
{}


void RobotCarburant::avancer(int vit)
{
    if (m_carburant-- > 0)
    {
        Robot::avancer(vit);
    }
}

void testRobotCarburant()
{
    RobotCarburant x{'E', '-', 5};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
