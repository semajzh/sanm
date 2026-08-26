#ifndef STATE223_H
#define STATE223_H


class Ground;
class State223
{
public:
    State223();
    virtual ~State223();
    virtual void run(Ground* ground);

private:
    void buff4(Ground* ground);
    void buff6(Ground* ground);
    void buff7(Ground* ground);
    void buff8(Ground* ground);
};

#endif // STATE223_H
