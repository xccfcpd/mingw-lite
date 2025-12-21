#pragma once

#include <stddef.h>

namespace mingw_thunk
{
  namespace internal
  {
    void *early_malloc(size_t size);
  } // namespace internal
} // namespace mingw_thunk
