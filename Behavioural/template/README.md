# Template Pattern

The Template Pattern is a behavioural design pattern that defines a program skeleton
of an algorithm in an operation that defers some steps to subclasses.

It lets the programmer redefine certain steps of an algorithm or other form of data
management without changing the overall structure.

In this example, we construct turtles.

We have a main template class: Turtle.

Each type of turtle is different, so in order to draw a turtle, it needs to know how
to draw the shell. We specify this in the subclasses.
