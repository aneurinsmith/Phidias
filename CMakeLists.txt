
cmake_minimum_required (VERSION 3.8)
project ("Phidias")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
	logger
	GIT_REPOSITORY	https://github.com/aneurinsmith/Logger.git
)

message(STATUS "Populating logger")
FetchContent_MakeAvailable(logger)

if(logger_POPULATED)
	message(STATUS "Successfully populated logger")
else()
	message(FATAL_ERROR "Failed to populate logger")
endif()

add_executable (Phidias "entry.cpp")
#target_link_libraries(Phidias LOG::logger)
