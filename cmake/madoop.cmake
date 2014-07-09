function (add_madoop_executable name )
	include_directories(${CMAKE_SOURCE_DIR}/lib/conf)
	include_directories(${CMAKE_SOURCE_DIR}/lib/nodegrid)
	include_directories(${CMAKE_SOURCE_DIR}/lib/program_options)
	add_executable(${name} ${ARGN} )
	target_link_libraries(${name} boost_log  boost_log_setup)
	target_link_libraries(${name} program_options mdfs madoop.conf madoop.nodegrid )
	target_link_libraries(${name} boost_program_options boost_filesystem boost_system)
	target_link_libraries(${name} boost_log  boost_log_setup)
	target_link_libraries(${name} pthread)
	install(TARGETS ${name} RUNTIME DESTINATION bin)
endfunction(add_madoop_executable)


function (add_madoop_library name )
	include_directories(${CMAKE_SOURCE_DIR}/interface/cpp)
	include_directories(${CMAKE_SOURCE_DIR}/3dpart/google-concurrency-library/include)
	include_directories(${CMAKE_SOURCE_DIR}/lib/conf)
	include_directories(${CMAKE_SOURCE_DIR}/lib/nodegrid)
	include_directories(${CMAKE_SOURCE_DIR}/lib/program_options)
	add_library(${name} ${ARGN} )
endfunction(add_madoop_library)
