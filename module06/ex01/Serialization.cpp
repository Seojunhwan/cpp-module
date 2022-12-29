#include "Serialization.hpp"

Serialization::Serialization() {
}

Serialization::Serialization(const Serialization &obj) {
	*this = obj;
}

Serialization& Serialization::operator=(const Serialization& obj) {
	if (this != &obj) {
	}
	return *this;
}

Serialization::~Serialization() {
}

uintptr_t Serialization::serialize(Data* ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data*>(raw));
}