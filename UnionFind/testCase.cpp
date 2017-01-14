#include "originalUnionFind.h"


using namespace UnionFind;

int main()
{
  OriginalUnionFind uf(10);
  OriginalUnionFind ufFail(-10);
  uf.connect(0, 5);

  std::cout << "uf.connected(0, 5)" << uf.connected(0, 5) << std::endl;

  uf.connect(1, 7);
  uf.connect(3, 8);
  uf.connect(0, 0);
  uf.connect(5, 6);
  uf.connect(2, 1);
  uf.connect(2, 1);
  uf.connect(3, 4);
  uf.connect(9, 8);
  uf.connect(3, 8);
  uf.connect(3, 8);
  uf.connect(-1, 8);
  uf.connect(1, 20);
  uf.printConnection();
  
  std::cout << "uf.connected(0, 3)" << uf.connected(0, 3) << std::endl;
  std::cout << "uf.connected(7, 9)" << uf.connected(7, 9) << std::endl;
  std::cout << "uf.connected(5, 8)" << uf.connected(5, 8) << std::endl;
  std::cout << "uf.connected(3, 8)" << uf.connected(3, 8) << std::endl;
  return 0;
}

