# cmake_minimum_required(VERSION 3.0.0)
# project(main VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(lab SHARED lab.cpp)

include(GenerateExportHeader)

generate_export_header(lab)
# configure_file(labconfig.h.in labconfig.h)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE lab)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)

install(TARGETS lab DESTINATION lib)
install(FILES lab.h DESTINATION include)
