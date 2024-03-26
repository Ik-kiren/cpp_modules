#include "Span.hpp"

int main ()
{
    Span span1(5);

    span1.addNumber(5);
    span1.addNumber(1);
    span1.addNumber(8);
    span1.addNumber(40);
    span1.addNumber(3);

    span1.shortestSpan();
    span1.longestSpan();
}