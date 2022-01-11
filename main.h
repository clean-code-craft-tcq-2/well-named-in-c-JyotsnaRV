#ifndef MAIN_H
#define MAIN_H
/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include <stdio.h>
#include <assert.h>

/*
 **********************************************************************************************************************
 * Type definitions
 **********************************************************************************************************************
 */

typedef struct
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

/*
 **********************************************************************************************************************
 * Externals
 **********************************************************************************************************************
 */

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void printRefernceManual(void);

#endif /* MAIN_H */
