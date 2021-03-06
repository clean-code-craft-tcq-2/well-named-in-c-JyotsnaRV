#include "common_Conversions.h"
#include "main.h"

extern const int MAX_COLORPAIR_NAME_CHARS;
/*
 **********************************************************************************************************************
 * Service name         : testNumberToPair
 * Syntax               : void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor)
 * param[in]            : pairNumber
 * param[in]            : MajorColor
 * param[in]            : expectedMinor
 * return               : None
 * Description          : Program to verify color number with color's pair
 **********************************************************************************************************************
 */
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor)
{
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Received Pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
