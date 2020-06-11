#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main(int argc, char* argv[])
{
	try
	{
		if (argc != 2)
		{
			std::cerr << "usage: client <host>" << std::endl;
			return 1;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13)));
		if (!stream)
		{
			std::cout << "unable to connect" << stream.error().message() << std::endl;
			return 1;
		}
		std::string message_to_send = "hello from client";
		while (TRUE) 
		{
			std::getline(std::cin, message_to_send);
			stream << message_to_send;
			stream << std::endl;

			std::string line;
			std::getline(stream, line);
			std::cout << line << std::endl;
		}
		
	}
	catch (std::exception& e)
	{
		std::cout << "Exeception :" << e.what() << std::endl;
	}
	return 0;
}