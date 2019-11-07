#ifndef ROBOTTRACEUR_H_INCLUDED
#define ROBOTTRACEUR_H_INCLUDED
#include "Robot.h"

class RobotTraceur : public Robot
{
protected:
    char m_trace;

public:
    RobotTraceur(char asp,char trace);
    virtual void montrer()override;
};

void testRobotTraceur();
#endif // ROBOTTRACEUR_H_INCLUDED
