#include "RobotTraceur.h"

RobotTraceur::RobotTraceur(char asp,char trace): Robot(asp), m_trace{trace}
{}

void RobotTraceur::montrer()
{
    std::cout<< std::string(m_position, m_trace) << m_aspect << std::endl;
}


void testRobotTraceur()
{
    RobotTraceur x{'D', '.'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
    }
}
