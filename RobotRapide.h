#ifndef ROBOTRAPIDE_H_INCLUDED
#define ROBOTRAPIDE_H_INCLUDED
#include "Robot.h"

class RobotRapide : public Robot
{
public:
    RobotRapide(char asp);
    virtual void avancer(int vit) override;
};

void testRobotRapide();

#endif // ROBOTRAPIDE_H_INCLUDED
