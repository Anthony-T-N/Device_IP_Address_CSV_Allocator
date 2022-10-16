// Device_IP_Address_CSV_Allocator.cpp

#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::ofstream output_file;
    output_file.open("Test.csv");\
    output_file << "123" << "," << "456" << "\n";
    output_file.close();
    return 0;
}
