#include <stdio.h>
#include <assert.h>

#include "common_Conversions.h"
#include "main.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    /* print the reference manual */
    printReferenceManual();
    
    return 0;
}
