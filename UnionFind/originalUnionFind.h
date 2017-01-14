#ifndef ORIGINAL_UNION_FIND
#define ORIGINAL_UNION_FIND

#include <vector>
#include <iostream>
#include "unionFind.h"

namespace UnionFind {

class OriginalUnionFind : public UnionFind
{
    public:
      OriginalUnionFind(int x);

      bool connected(int x, int y);
      bool connect(int x, int y);
      void printConnection();

    private:
      bool validateRange(int x, int y);
      std::vector<int> d_cache;
};

inline bool
OriginalUnionFind::connected(int x, int y)
{
    if(!validateRange(x, y))
    {
      return false;
    }
    return d_cache[x] == d_cache[y];
}

inline bool
OriginalUnionFind::validateRange(int x, int y)
{
    if(x < 0 || x >= d_cache.size() || y < 0 || y >= d_cache.size())
    {
      return false;
    }
    return true;
}

inline void
OriginalUnionFind::printConnection()
{
    for (size_t i = 0; i < d_cache.size(); ++i)
    {  
      std::cout << "Node: " << i
                << " pool: " << d_cache[i]
                << std::endl;
    }
}

}

#endif
