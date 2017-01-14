#ifndef UNION_FIND_ALGORITHM
#define UNION_FIND_ALGORITHM

#include <vector>

namespace UnionFind {

class UnionFind {
    public:
      virtual bool connected(int x, int y) = 0;
      virtual bool connect(int x, int y) = 0;
      virtual void printConnection() = 0;
};
}
#endif
