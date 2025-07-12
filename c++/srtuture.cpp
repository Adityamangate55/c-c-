#include <iostream>

class AbstractShape {
public:
    virtual void draw() = 0; // Pure virtual function
};
class Square : public AbstractShape {
public:
    void draw() { cout << "Drawing a square."; }
};
