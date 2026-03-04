#include <stdio.h>

int main() {

    /* Defined Constants */
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_PRICE = 35.20;
    const float HARD_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    /* Integer Variables for Quantities */
    int qtyTV, qtyMonitor, qtyFlash, qtyHard, qtyPrinter;

    /* Float Variables for Totals */
    float totalTV, totalMonitor, totalFlash, totalHard, totalPrinter;
    float subtotal, tax, total;

    /* User Input */
    printf("How Many TVs Were Sold? ");
    scanf("%d", &qtyTV);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &qtyMonitor);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &qtyFlash);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &qtyHard);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &qtyPrinter);

    /* Calculations */
    totalTV = qtyTV * TV_PRICE;
    totalMonitor = qtyMonitor * MONITOR_PRICE;
    totalFlash = qtyFlash * FLASH_PRICE;
    totalHard = qtyHard * HARD_PRICE;
    totalPrinter = qtyPrinter * PRINTER_PRICE;

    subtotal = totalTV + totalMonitor + totalFlash + totalHard + totalPrinter;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    /* Output */
    printf("\nQTY  DESCRIPTION        UNIT PRICE   TOTAL PRICE\n");
    printf("-----------------------------------------------------------\n");

    printf("%-4d TV               %8.2f   %10.2f\n", qtyTV, TV_PRICE, totalTV);
    printf("%-4d Monitor          %8.2f   %10.2f\n", qtyMonitor, MONITOR_PRICE, totalMonitor);
    printf("%-4d Flash Drive      %8.2f   %10.2f\n", qtyFlash, FLASH_PRICE, totalFlash);
    printf("%-4d Hard Drive       %8.2f   %10.2f\n", qtyHard, HARD_PRICE, totalHard);
    printf("%-4d Deskjet Printer  %8.2f   %10.2f\n", qtyPrinter, PRINTER_PRICE, totalPrinter);

    printf("-----------------------------------------------------------\n");
    printf("Subtotal: %38.2f\n", subtotal);
    printf("Tax: %43.2f\n", tax);
    printf("Total: %41.2f\n", total);
    printf("-----------------------------------------------------------\n");

    return 0;
}