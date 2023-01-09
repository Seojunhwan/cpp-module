#include "Span.hpp"

Span::Span(unsigned int n) : _maximum(n) {
}

Span::Span(const Span& obj):_maximum(obj._maximum), _storage(obj._storage) {}

Span &Span::operator=(const Span& obj) {
    if (this != &obj) {
        this->_maximum = obj._maximum;
        this->_storage = obj._storage;
    }
    return *this;
}

Span::~Span() {
}

void            Span::addNumber(unsigned int number) {
    if (this->_storage.size() == this->_maximum) {
        std::string e = "span is full";
        throw std::runtime_error(e);
    }
    this->_storage.push_back(number);
}

void            Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (this->_storage.size() + (end - begin) > this->_maximum) {
        std::string e = "span is full";
        throw std::runtime_error(e);
    }
    this->_storage.insert(this->_storage.end(), begin, end);
}

unsigned int    Span::shortestSpan() {
    if (this->_storage.size() < 2) {
        std::string e = "not enough elements";
        throw std::runtime_error(e);
    }
    std::vector<int> tmp(this->_storage);
    std::sort(tmp.begin(), tmp.end());

    unsigned int min = tmp[1] - tmp[0];

    for (unsigned long i = 1; i < tmp.size() - 1; i++)
    {
        unsigned int newValue = tmp[i + 1] - tmp[i];
        if (newValue < min)
            min = newValue;
    }
    return min;    
}

unsigned int    Span::longestSpan() {
    if (this->_storage.size() < 2) {
        std::string e = "not enough elements";
        throw std::runtime_error(e);
    }
    std::vector<int> tmp(this->_storage);

    std::sort(tmp.begin(), tmp.end());

    return tmp[tmp.size() - 1] - tmp[0];
}
