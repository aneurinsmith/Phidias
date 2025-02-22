
cmake_minimum_required (VERSION 3.12)
project (Phidias)

include(FetchContent)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")



#-------------------------#
#  DOWNLOAD DEPENDENCIES  #
#-------------------------#
message(STATUS "Populating logger")
FetchContent_Declare(logger 
	URL https://github.com/aneurinsmith/Logger/releases/download/v1.0.1/logger-src.zip
	DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(logger)



#-----------------------#
#  EXECUTABLE CREATION  #
#-----------------------#
add_executable (Phidias "entry.cpp")
target_link_libraries(Phidias PRIVATE logger)
