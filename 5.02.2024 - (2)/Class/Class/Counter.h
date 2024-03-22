#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int count;

public:
    Counter(int initialValue = 1);
    void increment();
    void decrement();
    int getCurrentValue();
};

#endif