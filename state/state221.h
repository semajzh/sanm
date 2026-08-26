#ifndef STATE221_H
#define STATE221_H


class Ground;
class State221
{
public:
    State221();
    virtual ~State221();
    virtual void run(Ground* ground);

private:
    void speed(Ground* ground);
    void buff5(Ground* ground);
    void buff7(Ground* ground);
};

#endif // STATE221_H
