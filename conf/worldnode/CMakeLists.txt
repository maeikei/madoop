FILE(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.conf.json")
INSTALL(FILES ${files} DESTINATION conf/bridgenode)
INSTALL(FILES ${files} DESTINATION conf/datanode)
INSTALL(FILES ${files} DESTINATION conf/resourcenode)
