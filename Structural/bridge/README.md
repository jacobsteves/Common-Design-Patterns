# Bridge Pattern

The bridge pattern is meant to decouple an abstraction from an implementation.
A bridge uses encapsulation, aggregation, and inheritance to separate responsibilities
into different classes.

When there is a single fixed implementation, this pattern is also known as the
Pimpl (pointer implementation) Idiom.

In this example, we simple extract the private members into their own class, create a
pointer to them, and create wrappers that modify the data.
