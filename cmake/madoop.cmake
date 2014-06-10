function (add_madoop_executable name )
	include_directories(${CMAKE_SOURCE_DIR}/lib/program_options)
	add_executable(${name} ${ARGN} )
	target_link_libraries(${name} boost_program_options)
	target_link_libraries(${name} program_options)
	install(TARGETS ${name} RUNTIME DESTINATION bin)
endfunction(add_madoop_executable)


function (add_madoop_library name )
	include_directories(${CMAKE_SOURCE_DIR}/interface/cpp)
	add_library(${name} ${ARGN} )
endfunction(add_madoop_library)
