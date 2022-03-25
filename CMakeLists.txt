cmake_minimum_required(VERSION 3.10)

project(torch_deploy_custom_ops)
add_library(custom SHARED main.cpp)
#target_compile_features(custom PRIVATE cxx_std_14)


find_package(Torch REQUIRED)


target_include_directories(custom PRIVATE ${TORCH_INCLUDE_DIRS})
target_link_libraries(custom PRIVATE ${TORCH_LIBRARIES})
