file(GLOB SRC
    "src/*.cc"
    "include/*.h"
)
add_madoop_library(google-concurrency-library ${SRC})

