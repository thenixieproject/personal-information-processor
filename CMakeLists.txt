cmake_minimum_required(VERSION 4.3)
project(personal-information-processor)

add_executable(personal_information_processor main.cpp)
target_sources(personal_information_processor
    PRIVATE
        main.cpp
)

add_library(information_classes)
target_sources(information_classes
    PRIVATE
        src/personal_info.cpp
        src/contact_info.cpp
        src/education_info.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            include
        FILES
            include/address_info.hpp
            include/contact_info.hpp
            include/education_info.hpp
            include/personal_info.hpp
)
target_link_libraries(personal_information_processor
    PRIVATE
        information_classes
)