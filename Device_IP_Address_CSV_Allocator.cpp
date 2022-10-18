// Device_IP_Address_CSV_Allocator.cpp

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int main()
{
    std::string user_input;
    std::cout << "> ";
    std::getline(std::cin, user_input);

    std::ofstream output_file;
    output_file.open("Test.csv");
    output_file << "Section 1" << "," << " " << "," << "Section 2" << "\n";
    output_file << "Subnet 1" << "," << " " << "," << "Subnet 1" << "," << " " << "\n";
    output_file << "Device" << "," << user_input << "," << "Device" << "," << user_input << "\n";
    output_file.close();
    return 0;
}
