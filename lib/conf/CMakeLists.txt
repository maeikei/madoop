file(GLOB SRC
    "*.hpp"
    "*.cpp"
)
add_madoop_library(madoop.conf ${SRC})

