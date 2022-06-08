#include <iostream>
#include <vector>


class Part
{
  int a;
public:
  Part(int _a): a(_a) {}

  void print()
  {
    std::cout << a << " ";
  }
};

class Tool
{
  std::vector<Part> mParts;

public:
  //std::initializer_list<Part> parts - вектор объектов с константным размером
  Tool(std::initializer_list<Part> parts)
  {
    mParts = parts;
  }

  std::vector<Part> getPart()
  {
    return mParts;
  }
};

int main() {

  Tool t = {Part(2), Part(3), Part(4)};
  for (auto i = 0; i < t.getPart().size(); ++i)
  {
    t.getPart()[i].print();
  }

  std::cout << std::endl;

  std::vector<double> vec = {1.4, 3.7, 6.};
  for (auto i = vec.begin(); i != vec.end(); ++i)
  {
    std::cout << *i << " ";
  }
}