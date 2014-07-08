file(GLOB SRC
    "db/*.cc"
    "db/*.cc"
    "db/*.cc"
    "include/leveldb/*.h"
)
add_madoop_library(leveldb ${SRC})
