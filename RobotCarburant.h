#ifndef ROBOTCARBURANT_H_INCLUDED
#define ROBOTCARBURANT_H_INCLUDED
#include "RobotTraceur.h"

class RobotCarburant : public RobotTraceur
{
    int m_carburant;
public:
    RobotCarburant(char asp,char trace,int carburant);
    virtual void avancer(int vit) override;

};

void testRobotCarburant();


#endif // ROBOTCARBURANT_H_INCLUDED
