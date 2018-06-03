# Visitor Pattern

The visitor design pattern is a way of seperating an algorithm from an object structure
on which it operates.

In essence, the visitor allows adding new virtual methods to a family of classes without
modifying the class. A visitor class is created that implements all of the appropriate
specializations of the virtual function. The visitor takes the instance reference as input
and implements the goal through a double dispatch.

In this example, we look at books and catalogues to see how often a book satisfying requriements is read.

We have a main class: Book.
We also have subclasses: Comic, and Text, that add extra functionality to a book.

Within Catalogue, we create a method that takes in each of these classes, and performs tasks accordingly.

If it is a normal book, it is catalogued by author.
If it is a text, it is catalogued by the text topic.
If it is a comic, it is catalogued by the protagonist.
