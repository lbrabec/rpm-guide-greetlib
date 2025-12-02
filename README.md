# greetlib

Simple greeting library for RPM packaging examples.

**This is for rpm-guide**

## Build

```bash
cmake -B build
cmake --build build
sudo cmake --install build
```

## Usage

```c
#include <greetlib.h>

const char *msg = greet("World");  // "Hello, World!"
```

## License

MIT

