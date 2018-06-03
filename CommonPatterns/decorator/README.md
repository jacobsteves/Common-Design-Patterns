# Decorator Pattern

The Decorator Pattern allows behaviour to be added to an individual object without affecting
the behaviour of other objects from the same class.

This pattern is especially useful for adhering to the Single Responsibility Principle, as it
allows the division of functionality between classes with unique areas of concern.

In this example, we have Pizzas and special Pizzas decorated with toppings or stuffed crust.

We chain up multiple decorators for our multiple toppings, which all point to our base of
the pizza.
