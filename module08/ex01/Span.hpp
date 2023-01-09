#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <string>
# include <algorithm>
# include <stdexcept>

class Span
{
    private:
        unsigned int        _maximum;
        std::vector<int>    _storage;
    public:
        Span(unsigned int n);
        Span(const Span& obj);
        Span &operator=(const Span& obj);
        ~Span();

        void            addNumber(unsigned int number);
        void            addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        unsigned int    shortestSpan();
        unsigned int    longestSpan();
};


#endif
