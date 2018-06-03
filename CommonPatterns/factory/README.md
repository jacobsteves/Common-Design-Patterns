# Factory Pattern

The Factory Pattern is a creational pattern that uses factory methods to deal with the
problem of creating objects without having to specify the exact class of the object that
will be created. This is done by calling a factory method - specified in an interface, or
base class that could be overridden by subclasses - rather than calling a constructor.

In this example, we use different levels as factories. We specify in our factory method of
the level which objects to produce.

We have two levels, Easy and Hard.

The Easy level produces easier enemies, while the Hard level produces harder enemies.
