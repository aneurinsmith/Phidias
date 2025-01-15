
cmake_minimum_required (VERSION 3.8)
project ("Phidias")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
	logger
	GIT_REPOSITORY	https://github.com/aneurinsmith/Logger.git
)

FetchContent_Populate(logger)
FetchContent_MakeAvailable(logger)
message("-- logger loaded")

add_executable (Phidias "entry.cpp")
#target_link_libraries(Phidias LOG::logger)
