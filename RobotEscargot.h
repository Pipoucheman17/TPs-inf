#ifndef ROBOTESCARGOT_H_INCLUDED
#define ROBOTESCARGOT_H_INCLUDED

class RobotEscargot : public RobotTraceur
{
public:
    RobotEscargot();
    virtual void avancer(int vit) override;
};

void testRobotEscargot();

#endif // ROBOTESCARGOT_H_INCLUDED
