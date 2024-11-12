#include <iostream>
#include <fstream>
#include <string>

void HelpMessage()
{
    std::cout << "Sposob uzycia programu:" << std::endl
        << "    -h Wypisuje sposob uzycia programu" << std::endl
        << "    -i Plik wejsciowy" << std::endl
        << "    -o Plik wyjsciowy" << std::endl
        << "    -t Tryb: k - Kompresja, d - Dekompresja" << std::endl
        << "    -s Plik ze slownikiem" << std::endl;
}

void HandleArguments(char* stringOne, char* stringTwo)
{
    if (stringOne == "-i")
    {
        
    }
    else if(stringOne == "-o")
    {

    }


}

int main(int argc, char* argv[])
{
    
    std::ifstream inputFile;
    std::string line;
    std::streamsize ss = 0;
    
    switch (argc)
    {
    case 1:
        HelpMessage();
        return 0;
    default:
        if (!(argc % 2)) { HelpMessage(); return 0; }
        std::ofstream outputFile;

        for (int i = 1; i <= (argc-1)/2; i++)
        {
            char* stringOne = argv[i * 2 - 1];
            char* stringTwo = argv[i * 2];
           
            if (stringOne[0] == '-' && stringOne[1] == 'i')
            {
                inputFile.open(stringTwo, std::ios::in);
            }
            else if (stringOne[0] == '-' && stringOne[1] == 'o')
            {
                std::ofstream out(stringTwo);
                outputFile.open(stringTwo, std::ios::out);
            }
        }
        
        if (inputFile.good() && outputFile.good())
        {
            while (std::getline(inputFile, line))
            {
                outputFile << line  << '\n';
                std::cout << line << std::endl;
            }

        }
        else if (inputFile.good())
        {
            while (std::getline(inputFile,line))
            {
                std::cout << line << std::endl;
            }
        }
            
        break;
    }

    
}
