add_executable(randadd)
target_sources(randadd PRIVATE randadd.cpp)
target_link_libraries(randadd PRIVATE common-options)

add_executable(randsub)
target_sources(randsub PRIVATE randsub.cpp)
target_link_libraries(randsub PRIVATE common-options)
