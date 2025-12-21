#include "@early_alloc.h"

#include <windows.h>

namespace mingw_thunk
{
  namespace internal
  {
    void *early_malloc(size_t size)
    {
      static HANDLE h = GetProcessHeap();
      return HeapAlloc(h, 0, size);
    }
  } // namespace internal
} // namespace mingw_thunk
