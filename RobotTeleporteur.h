#ifndef ROBOTTELEPORTEUR_H_INCLUDED
#define ROBOTTELEPORTEUR_H_INCLUDED
#include "Robot.h"

class RobotTeleporteur : public Robot
{
public:
    RobotTeleporteur(char asp);
    void teleporter(int saut);
    RobotTeleporteur();

};

void testRobotTeleporteur();
#endif // ROBOTTELEPORTEUR_H_INCLUDED
