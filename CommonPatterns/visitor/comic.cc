#include "comic.h"
#include <string>
#include "visitor.h"

using namespace std;

Comic::Comic(const string &title, const string &author, int numPages, const string &hero) :
        Book{title, author, numPages}, hero{hero} {}

bool Comic::isItHeavy() const {
    return getNumPages() > 30;
}

string Comic::getHero() const {
    return hero;
}

bool Comic::favourite() const {
    return hero == "Spider-Man";
}

void Comic::accept(BookVisitor &v) {
    return v.visit(*this);
}

