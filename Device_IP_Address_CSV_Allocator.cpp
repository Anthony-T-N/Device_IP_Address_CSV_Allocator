// Device_IP_Address_CSV_Allocator.cpp

#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::ofstream output_file;
    output_file.open("Test.csv");
    output_file << "Section 1" << "," << " " << "," << "Section 2" << "\n";
    output_file << "Subnet 1" << "," << " " << "," << "Subnet 1" << "," << " " << "\n";
    output_file << "Device" << "," << "IP Address Placeholder" << "," << "Device" << "," << "IP Address Placeholder" << "\n";
    output_file.close();
    return 0;
}
