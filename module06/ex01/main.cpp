#include "Serialization.hpp"

int main() {
  Data data;
  Serialization serial;

  data._name = "hihihih";

  uintptr_t raw = serial.serialize(&data);
  std::cout << (uintptr_t)&data << std::endl;
  std::cout << raw << std::endl;

  Data* ptr = serial.deserialize(raw);
  std::cout << ((ptr == &data) ? "true" : "false") << std::endl;
  return 0;
}