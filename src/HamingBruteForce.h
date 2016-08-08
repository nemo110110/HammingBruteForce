#ifndef HAMINGBRUTEFORCE_H
#define HAMINGBRUTEFORCE_H

#include <vector>
#include "AlignedAllocator.h"
#include <cassert>

template<typename T>
class HamingBruteForce {
public:
    typedef std::vector<int, AlignedAllocator<int, 32>> ivec;

    HamingBruteForce(int n_size_reserve_, int n_dim_, int threshold);

    void match(const T *a, int i_a, int n_size_a, const T *b, int i_b, int n_size_b);

    static int hamming_distance(const T *a, const T *b, const int n);

    int n_size_reserve;
    int n_dim;
    int threshold;
    ivec index_ab;
    ivec distance_ab;
};

template
class HamingBruteForce<unsigned char>;

template
class HamingBruteForce<int>;

#endif
