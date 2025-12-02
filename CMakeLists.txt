cmake_minimum_required(VERSION 3.10)
project(greetlib VERSION 0.1.0 LANGUAGES C)

include(GNUInstallDirs)

# Library
add_library(greet SHARED src/greetlib.c)
target_include_directories(greet PUBLIC include)
set_target_properties(greet PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 0
    PUBLIC_HEADER include/greetlib.h
)

# Example binary
add_executable(greet-demo examples/demo.c)
target_link_libraries(greet-demo greet)

# Install
install(TARGETS greet
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
install(TARGETS greet-demo RUNTIME DESTINATION ${CMAKE_INSTALL_LIBEXECDIR}/greetlib)
install(FILES doc/usage.txt DESTINATION ${CMAKE_INSTALL_DOCDIR})

