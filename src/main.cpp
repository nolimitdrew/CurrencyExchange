// main.cpp
// The purpose of this file is to provide i/o for the program
// Andrew Stade
// Last Edited: 2/7/2024

#include <iostream>
#include <iomanip>
#include <limits>

void MainMenu()
{
    std::cout << "=== Currency Exchange ===" << std::endl;
    std::cout << "1. Convert USD to EUR" << std::endl;
    std::cout << "2. Convert USD to JPY" << std::endl;
    std::cout << "3. Convert USD to GBP" << std::endl;
    std::cout << "4. Convert USD to CAD" << std::endl;
    std::cout << "5. Display Menu" << std::endl;
    std::cout << "6. Exit" << std::endl;
}

int main() 
{
    double dollar, euro, yen, pound, cad;
    int choice;

    // Exchange rates
    const double dollarsToEuros = 0.93;
    const double dollarsToYen = 148.19;
    const double dollarsToPound = 0.79;
    const double dollarsToCAD = 1.35;

    // Input the amount in dollars
    std::cout << "*Welcome*" << std::endl;
    std::cout << "Enter the amount in US dollars\n> ";

    // Validate and read the input dollar amount
    while (!(std::cin >> dollar)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid amount in US dollars\n> ";
    }

    MainMenu();
    std::cout << "> ";

    // Main menu
    while (true) {
        // Validate and read the input choice
        while (!(std::cin >> choice) || choice < 1 || choice > 6) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please enter a valid choice (1-6)\n> ";
        }

        switch (choice) {
            case 1:
                // Conversion logic for USD to EUR
                std::cout << "Selected: USD to EUR conversion" << std::endl;
                euro = dollar * dollarsToEuros;
                std::cout << "Equivalent amount in Euro: €" << std::fixed << std::setprecision(2) << euro << std::endl;
                break;
            case 2:
                // Conversion logic for USD to JPY
                std::cout << "Selected: USD to JPY conversion" << std::endl;
                yen = dollar * dollarsToYen;
                std::cout << "Equivalent amount in Yen: ¥" << std::fixed << std::setprecision(2) << yen << std::endl;
                break;
            case 3:
                // Conversion logic for USD to GBP
                std::cout << "Selected: USD to GBP conversion" << std::endl;
                pound = dollar * dollarsToPound;
                std::cout << "Equivalent amount in Pound: £" << std::fixed << std::setprecision(2) << pound << std::endl;
                break;
            case 4:
                // Conversion logic for USD to CAD
                std::cout << "Selected: USD to CAD conversion" << std::endl;
                cad = dollar * dollarsToCAD;
                std::cout << "Equivalent amount in CAD: CAD " << std::fixed << std::setprecision(2) << cad << std::endl;
                break;
            case 5:
                MainMenu();
                break;
            case 6:
                // Exit the program
                std::cout << "Exiting..." << std::endl;
                return 0;
        }

        std::cout << "> ";

    }

    return 0;
}
