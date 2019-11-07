#include "RobotTeleporteur.h"

RobotTeleporteur::RobotTeleporteur(char asp) : Robot(asp)
{}

void RobotTeleporteur::teleporter(int saut)
{
    avancer(saut-m_position);
}

void testRobotTeleporteur()
{
    RobotTeleporteur x{'B'};
    for (int i=0; i<8; ++i)
    {
        x.montrer();
        x.avancer(1);
        if (i==3)
            x.teleporter(8);
    }
}
