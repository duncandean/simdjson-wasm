# simdjson-wasm

```bash
emcc -std=c++1z -O3 -s WASM=1 -msimd128 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]' \
    -I simdjson \
    main.cpp \
    simdjson/simdjson.cpp
```

* simdjson implementation from https://github.com/lemire/simdjson/
