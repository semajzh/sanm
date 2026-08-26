#ifndef STATE2223_H
#define STATE2223_H


class Ground;
class State2223
{
public:
    State2223();
    virtual ~State2223();
    bool run(Ground* ground, int current);
};

#endif // STATE2223_H
