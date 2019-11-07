#include "RobotEscargot.h"

RobotEscargot():m_position(0),m_aspect{'@'},m_trace{'_'}
{}

void RobotEscargot::avancer(int vit)
{
    int i=0;
    if (i++%2==0)
    {
        Robot::avancer(vit);
    }
}


void testRobotEscargot()
{
    RobotEscargot x{};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
