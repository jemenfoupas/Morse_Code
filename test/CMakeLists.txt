include(FetchContent)

FetchContent_Declare(
  gtest
  GIT_REPOSITORY https://github.com/google/googletest
  GIT_TAG main
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_forct_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)
add_executable(test-lab test-lab.cpp)

target_link_libraries(test-lab PRIVATE gtest_main lab)


include(CTest)
include(GoogleTest)
gtest_discover_tests(test-lab)
