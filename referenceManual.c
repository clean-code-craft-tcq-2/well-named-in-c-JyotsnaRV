#include "common_Conversions.h"
#include "main.h"

extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMajorColors;
extern int numberOfMinorColors;
/*
 **********************************************************************************************************************
 * Service name         : testNumberToPair
 * Syntax               : void printReferenceManual(void)
 * param[in]            : pairNumber
 * param[in]            : MajorColor
 * param[in]            : expectedMinor
 * return               : None
 * Description          : Program to print color code refernce manual
 **********************************************************************************************************************
 */
void printReferenceManual(void)
{
    int pairNumber;
    printf("\nPrinting Color code reference manual\n\n");
    for(pairNumber=1;pairNumber<=(numberOfMajorColors*numberOfMinorColors);pairNumber++)
    {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("color number: %d \t color pair: %s    \t Major color: %d \t Minor color: %d \n", pairNumber, colorPairNames, colorPair.majorColor+1, colorPair.minorColor+1);
    }
}
