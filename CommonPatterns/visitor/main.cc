#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "text.h"
#include "comic.h"
#include "catalogue.h"
#include "visitor.h"

using namespace std;

int main() {
  vector<Book*> collection {
    new Book("War and Peace", "Tolstoy", 5000),
    new Book("Peter Rabbit", "Potter", 50),
    new Text("Programming for Beginners", "??", 200, "BASIC"),
    new Text("Programming for Big Kids", "??", 200, "C++"),
    new Text("Annotated Reference Manual", "??", 200, "C++"),
    new Comic("Infinity Gauntlet", "??", 150, "The Avengers"),
    new Comic("Spider-Verse", "??", 100, "Spider-Man"),
    new Comic("The Night Gwen Stacy Died", "??", 120, "Spider-Man")
  };

  CatalogueVisitor v;

  for (auto &b : collection) b->accept(v);

  for (auto &j : v.getResult())
    cout << j.first << " " << j.second << endl;

  for (auto &b : collection) delete b;
}
