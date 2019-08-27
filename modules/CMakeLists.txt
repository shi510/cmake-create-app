set(the_library "cca")
set(cca_source_files)
set(cca_header_files)

file(GLOB_RECURSE files "*.*")
group_files("${files}")

add_subdirectory(module1)

include_directories(${cca_include_dirs})
add_library(${the_library} ${LIB_TYPE} ${cca_source_files} ${cca_header_files})
target_link_libraries(${the_library} ${cca_lib_deps})

set_target_properties(${the_library} PROPERTIES FOLDER "cca_library")