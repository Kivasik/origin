#include "Counter.h"

Counter::Counter(int initialValue) : count(initialValue) {}

void Counter::increment() {
    count++;
}
void Counter::decrement() {
    count--;
}
int Counter::getCurrentValue() {
    return count;
}