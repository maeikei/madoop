set(CMAKE_C_COMPILER /usr/bin/clang)
#set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
#set(CMAKE_CXX_COMPILER /usr/bin/g++)

ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)
set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} " -std=c11 ")
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} " -std=c++11 ")
#set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-fpermissive")

