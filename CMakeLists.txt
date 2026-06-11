cmake_minimum_required(VERSION 4.3)
project(personal-information-processor)

add_executable(personal-information-processor main.cpp)

add_library(information-classes
        src/contact_info.cpp
        src/education_info.cpp
        src/personal_info.cpp
)

target_link_libraries(personal-information-processor information-classes)