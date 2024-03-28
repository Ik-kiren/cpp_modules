#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    std::ifstream file("data.csv");
    std::ifstream file2(argv[1]);

    BitcoinExchange data(file);
    data.getBitcoinExchange(file2);
}