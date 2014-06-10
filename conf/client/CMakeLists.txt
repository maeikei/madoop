FILE(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.conf.json")
INSTALL(FILES ${files} DESTINATION conf/client)
