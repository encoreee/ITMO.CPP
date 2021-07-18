#include <string>
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out("D:\\poesy.txt");

    if (!out.is_open())
    {
		std::cout << "Error\n";
		return 1;
    }
    
	std::string line = "init";
	while (line != "")
	{
		std::cout << "Enter new line or empty to finish" << std::endl;
		std::getline(std::cin, line);
		out << line << std::endl;
	}

	out.close();
}