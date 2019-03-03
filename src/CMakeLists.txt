FILE(GLOB_RECURSE geometry_srcs
*.cc
)

add_library(geometry STATIC ${geometry_srcs}) 
