#include "Span.hpp"

//methode manquante
// _ atrtibut privee

int main ()
{
    Span span1(15);
    std::list<int> tlist;
    tlist.push_back(1);
    tlist.push_back(2);
    tlist.push_back(3);
    tlist.push_back(4);

    span1.addNumber(tlist.begin(), tlist.end());
    span1.addNumber(1, 5);

    span1.addNumber(5);
    span1.addNumber(1);
    span1.addNumber(8);
    span1.addNumber(40);
    span1.addNumber(3);

    span1.shortestSpan();
    span1.longestSpan();
}