#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int numBooks;

    cout << "Enter the number of books returned late: ";
    cin >> numBooks;

    cout << fixed << setprecision(2);

    int book = 1; 
    while (book <= numBooks) {
        cout << "\n--- Calculating fine for Book " << book << " ---" << std::endl;

        double fine = 5.00; 
        int day = 1;        

        while (true) {
            double displayFine = fine;

            if (displayFine > 1000.00) {
                displayFine = 1000.00; 
            }

            cout << "Day " << day << ": Rs. " << displayFine << std::endl;

            if (displayFine == 1000.00) {
                break; 
            }

            fine *= 2; 
            day++;     
        }

        book++; 
    }

   cout << "\n--- All fines calculated. ---" << std::endl;

    return 0;
}