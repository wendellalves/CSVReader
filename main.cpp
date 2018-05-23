
#include "CSVReader.h"
#include <fstream>

void leitorCSV() {
    std::string x, y, z, iPos, jPos;
    int sizeNetwork = 10;
    //int cont = 0;

    // Creating an object of CSVWriter
    CSVReader reader("texte2.txt");

    //std::ofstream myfile;
    //myfile.open ("saida.csv");

    // Get the data from CSV File
    std::vector<std::vector<std::string> > dataList = reader.getData();


    for (int i = 1; i <= sizeNetwork * sizeNetwork; i++) {
        iPos = dataList[i][0];
        jPos = dataList[i][0 + 1];
        x = dataList[i][0 + 2];
        y = dataList[i][0 + 3];
        z = dataList[i][0 + 4];
        std::cout << "i = " << iPos << std::endl;
        std::cout << "j = " << jPos << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
        std::cout << "z = " << z << std::endl;
        std::cout << std::endl;
    }
}

void organizeCSV() {
    int cont = 0, linhas, colunas = 3;

    // Creating an object of CSVWriter
    CSVReader reader("CSVs/direita/direita7.csv");

    std::ofstream myfile;
    myfile.open("CSVs/newDireita/direita7.csv");

    // Get the data from CSV File
    std::vector<std::vector<std::string> > dataList = reader.getData();
    
    linhas = dataList.size()/3;
    
    myfile << linhas << " " << colunas << "\n";
    
    for (std::vector<std::string> vec : dataList) {
        for (std::string data : vec) {
            myfile << data;
            myfile << " ";
            cont++;
            if(cont == 3){
                myfile << "\n";
                cont = 0;
            }
        }
    }
    std::cout << dataList.size();

    myfile.close();
}

int main() {
    //escolher uma das duas funções
    
    //leitorCSV();
    organizeCSV();

    return 0;

}