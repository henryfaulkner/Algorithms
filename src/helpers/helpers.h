#ifndef HELPERS_H
#define HELPERS_H

class Helpers
{
public:
    Helpers() {}
    int *PopulateArray(int *result, int length);
    int *FisherYatesShuffle(int *result, int length);
    int *Swap(int *result, int i, int j);
};

#endif // HELPERS_H
