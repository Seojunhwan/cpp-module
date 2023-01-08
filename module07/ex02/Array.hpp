#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T               *_arr;
        unsigned int    _size;
    public:
        Array() : _arr(new T[0]), _size(0) {}
        Array(unsigned int n) : _arr(new T[n]), _size(n) {}
        Array(const Array &obj) : _arr(new T[obj.size()]), _size(obj.size()) {
            for (unsigned int i = 0; i < this->_size; i++) {
                this->_arr[i] = obj._arr[i];
            }
        }

        Array& operator=(const Array &obj) {
            if (this != &obj) {
                delete[] this->_arr;
                this->_arr = new T[obj._size];
                this->_size = obj._size;
                for (unsigned int i = 0; i < this->_size; i++) {
                    this->_arr[i] = obj._arr[i];
                }
            }
            return *this;
        }

        ~Array() {
            delete[] this->_arr;
        }

        T& operator[](unsigned int index) {
            if (index >= this->_size) {
                std::string e = "index is out bounds";
                throw std::out_of_range(e);
            }
            return this->_arr[index];
        }

        const T& operator[](unsigned int index) const {
            if (index >= this->_size) {
                std::string e = "index is out bounds";
                throw std::out_of_range(e);
            }
            return this->_arr[index];
        }

        unsigned int size() const {
            return this->_size;
        };
};

#endif
