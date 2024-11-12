#include <iostream>

void HelpMessage()
{
    std::cout << "Sposob uzycia programu:" << std::endl
        << "    -h Wypisuje sposob uzycia programu" << std::endl
        << "    -i Plik wejsciowy" << std::endl
        << "    -o Plik wyjsciowy" << std::endl
        << "    -t Tryb: k - Kompresja, d - Dekompresja" << std::endl
        << "    -s Plik ze slownikiem" << std::endl;




}

int main(int argc, char* argv[])
{
    switch (argc)
    {
    case 1:
        HelpMessage();
        return 0;
    default:
        if (!(argc % 2)) { HelpMessage(); return 0; }

        break;
    }

    
}
