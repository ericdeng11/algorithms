#include "originalUnionFind.h"

namespace UnionFind {

OriginalUnionFind::OriginalUnionFind (int x)
{
    if (x > 0)
    {  
      for (int i = 0; i < x; ++i)
      {
        d_cache.push_back(i);
      } 
    }
}

bool
OriginalUnionFind::connect (int x, int y)
{
    if (!validateRange(x, y))
    {
      return false;
    }
    
    int mark = d_cache[y];
    int previous = d_cache[x];
    for (size_t i = 0; i < d_cache.size(); ++i)
    {   
      if (d_cache[i] == previous)
      {
        d_cache[i] = mark;
      }
    }
    return true;
}

}
