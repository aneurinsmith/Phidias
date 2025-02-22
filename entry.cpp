
#include "logger.h"
#include <thread>

LOG::Logger logger(LOG::TRACE, LOG::consoleSink("test"));

int main() 
{
	logger.print(LOG::WARN, "test");
	LOG::print("Hello World!");

	LOG::error("ERROR");
	LOG::warn("ERROR");

	std::this_thread::sleep_for(std::chrono::seconds(100));

	return 0;
}
