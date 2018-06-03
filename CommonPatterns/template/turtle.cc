/**
 * The Template Pattern is a behavioural design pattern that defines a program skeleton
 * of an algorithm in an operation that defers some steps to subclasses.
 *
 * It lets the programmer redefine certain steps of an algorithm or other form of data
 * management without changing the overall structure.
 *
 * In this example, we construct turtles.
 *
 * We have a main template class: Turtle.
 *
 * Each type of turtle is different, so in order to draw a turtle, it needs to know how
 * to draw the shell. We specify this in the subclasses.
 */

#include <iostream>
using namespace std;

class Turtle {
  public:
    void draw(){
        drawHead();
        drawShell();
        drawFeet();
    }
  private:
    void drawHead(){
      cout << "Turtle Head" << endl;
    } 
    void drawFeet(){
      cout << "Turtle Feet" << endl;
    }
    virtual void drawShell() = 0;  //pure virtual, subclasses can customize
};

class RedTurtle: public Turtle {
  void drawShell() override{
    cout << "Turtle Red Shell" << endl;
  }
};

class GreenTurtle: public Turtle {
  void drawShell() override {
    cout << "Turtle Green Shell" << endl;
  }
};

int main() {
  GreenTurtle gt;
  gt.draw();

  cout << endl;

  RedTurtle rt;
  rt.draw();

  return 0;
}
