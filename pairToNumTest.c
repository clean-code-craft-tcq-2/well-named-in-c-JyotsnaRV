#include "common_Conversions.h"
#include "main.h"

/*
 **********************************************************************************************************************
 * Service name         : testPairToNumber
 * Syntax               : void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
 * param[in]            : major
 * param[in]            : minor
 * param[in]            : expectedPairNumber
 * return               : None
 * Description          : Program to verify colour's pair with colour number
 **********************************************************************************************************************
 */
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
