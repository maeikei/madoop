function (add_madoop_executable name )
	add_executable(${name} ${ARGN} )
	target_link_libraries(${name} boost_program_options)
endfunction(add_madoop_executable)
