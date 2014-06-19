file(GLOB SRC
    "*.hpp"
    "*.cpp"
)
add_madoop_library(program_options ${SRC})

