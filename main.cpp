#include "simdjson/simdjson.h"
#include <emscripten.h>

extern "C" {
  int EMSCRIPTEN_KEEPALIVE version() {
    return simdjson::SUCCESS_AND_HAS_MORE;
  }
}
