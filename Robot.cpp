#include "Robot.h"

Robot::Robot(char asp)
{
    m_position = 0;
    m_aspect = asp;
}

void Robot::avancer(int vit)
{
    m_position = m_position+vit;
}

void Robot::montrer()
{
    std::cout<< std::string(m_position, ' ') << m_aspect << std::endl;
}

void testRobot()
{
    Robot x{'A'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
