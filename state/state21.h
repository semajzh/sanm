#ifndef STATE21_H
#define STATE21_H


class Ground;
class State21
{
public:
    State21();
    virtual ~State21();
    virtual void run(Ground* ground);

private:
    void prepare(Ground* ground);
    void formation(Ground* ground);
    void faction(Ground* ground);
    void star(Ground* ground);
    void kind(Ground* ground);
    void technology(Ground* ground);
    void relation(Ground* ground);
    void strategy(Ground* ground);
    void speed(Ground* ground);
    void method(Ground* ground);
};

#endif // STATE21_H
