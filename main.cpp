
#include "CSVReader.h"
#include <fstream>
 
int main()
{
	// Creating an object of CSVWriter
	CSVReader reader("teste.txt");
        
        std::ofstream myfile;
        myfile.open ("saida.csv");
 
	// Get the data from CSV File
	std::vector<std::vector<std::string> > dataList = reader.getData();
 
	// Print the content of row by row on screen
	for(std::vector<std::string> vec : dataList)
	{
		for(std::string data : vec)
		{
			std::cout<<data << " , ";
                        myfile << data ;
                        myfile << " ";
		}
                myfile << "\n";
		std::cout<<std::endl;
	}

        myfile.close();
        
	return 0;
 
}