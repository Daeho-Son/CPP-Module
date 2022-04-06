#ifndef OPEN_FILE_HPP
# define OPEN_FILE_HPP

# include <iostream>
# include <fstream>
# include <string>

std::ifstream open_input_file(char* filename);
std::ofstream open_output_file(std::string filename);

#endif