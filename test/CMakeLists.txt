FILE(GLOB_RECURSE all_files *.cc)
                                                                                                                  
add_executable(cspec ${all_files})
target_link_libraries(cspec geometry)
