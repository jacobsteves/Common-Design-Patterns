# Iterator Pattern

The Iterator Pattern is a design pattern in which an iterator is used to traverse a container
and access the container's elements. The iterator decouples algorithms from containers.

Iterators are useful because they can encapsulate the data structure while still iterating
over elements. New traversal operations can be defined for an aggregate object without
changing its interface.

Range based for loops require iterators for most languages, so this pattern allows these
range based for loops to work.

In this example, `iterator.cc` houses a skeleton for an iterator, showing how it can be
implemented.

`range.cc` shows a direct example of how an iterator can be used to traverse elements. The
implementation is hidden from the user, and the range must be manipulated through the iterator.
Each loop increments the current element.
