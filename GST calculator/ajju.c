#include <stdio.h>

#include <conio.h>
int add ();

int main() {
    float price, gst, total;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    // Calculate GST at a rate of 18%
    gst = 0.18 * price;

    // Calculate total price including GST
    total = price + gst;

    printf("Price: Rs. %.2f\n", price);
    printf("GST: Rs. %.2f\n", gst);
    printf("Total: Rs. %.2f\n", total);
    add();

    return 0;
}
int add() {
    float price, discount, discountedPrice;

    printf("Enter the price of the product: ");
    scanf("%f", &price);

    printf("Enter the discount percentage: ");
    scanf("%f", &discount);

    // Calculate the discount amount
    float discountAmount = (discount/100) * price;

    // Calculate the discounted price
    discountedPrice = price - discountAmount;

    printf("Price: Rs. %.2f\n", price);
    printf("Discount: Rs. %.2f\n", discountAmount);
    printf("Discounted Price: Rs. %.2f\n", discountedPrice);

    return 0;
}

