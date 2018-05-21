
#include "CSVReader.h"
#include <fstream>

int main()
{   
        std::string x, y, z, iPos, jPos;
        int sizeNetwork = 10;
        //int cont = 0;
        
	// Creating an object of CSVWriter
	CSVReader reader("texte2.txt");
        
        //std::ofstream myfile;
        //myfile.open ("saida.csv");
 
	// Get the data from CSV File
	std::vector<std::vector<std::string> > dataList = reader.getData();
        
        
        for(int i = 1; i <= sizeNetwork*sizeNetwork; i++){
                iPos = dataList[i][0];
                jPos = dataList[i][0+1];
                x = dataList[i][0+2];
                y = dataList[i][0+3];
                z = dataList[i][0+4];
                std::cout << "i = " << iPos << std::endl;
                std::cout << "j = " << jPos << std::endl;
                std::cout << "x = " << x << std::endl;
                std::cout << "y = " << y << std::endl;
                std::cout << "z = " << z << std::endl;
                std::cout << std::endl;
        }
            
        /*//Testando o acesso a um unico dado do vetor
        for(std::vector<std::string> vec : dataList)
	{
		for(std::string data : vec)
		{                   
                    if(cont > 4){
                        i = data;
                        //aux = data.substr(data.find(",")+1, data.length());
                        //y = aux.substr(0, aux.find(" "));
                        //z = aux.substr(aux.find(" ")+1, aux.length());
                    
                        //std::cout << data << std::endl;
                        //std::cout << "i = " << i << std::endl;
                        //std::cout << "aux =" << aux << std::endl;
                        //std::cout << "y = " << y << std::endl;
                        //std::cout << "z = " << z << std::endl;
                        
                        //std::cout << cont << std::endl;
                        std::cout<<std::endl;
                    }
                    //cont++; 
		}
	}
        
        //cont = 0;
 
	// Print the content of row by row on screen
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
	}

        myfile.close();*/
        
	return 0;
 
}