
#include "CSVReader.h"
#include <fstream>

int main()
{   
        std::string x,y,z,aux;
        int cont = 0;
        
	// Creating an object of CSVWriter
	CSVReader reader("teste.txt");
        
        std::ofstream myfile;
        myfile.open ("saida.csv");
 
	// Get the data from CSV File
	std::vector<std::vector<std::string> > dataList = reader.getData();
        
        //Testando o acesso a um unico dado do vetor
        for(std::vector<std::string> vec : dataList)
	{
		for(std::string data : vec)
		{                   
                    if(cont > 0){
                        x = data.substr(0, data.find(" "));
                        aux = data.substr(data.find(" ")+1, data.length());
                        y = aux.substr(0, aux.find(" "));
                        z = aux.substr(aux.find(" ")+1, aux.length());
                    
                        std::cout << "x = " << x << std::endl;
                        //std::cout << "aux =" << aux << std::endl;
                        std::cout << "y = " << y << std::endl;
                        std::cout << "z = " << z << std::endl;
                        
                        std::cout<<std::endl;
                    }
                    cont++; 
		}
                myfile << "\n";
		//std::cout<<std::endl;
	}
        
        cont = 0;
 
	/*// Print the content of row by row on screen
	for(std::vector<std::string> vec : dataList)
	{
		for(std::string data : vec)
		{
			std::cout<<data;
                        myfile << data ;
                        myfile << " ";
		}
                myfile << "\n";
		std::cout<<std::endl;
	}*/

        myfile.close();
        
	return 0;
 
}