#ifndef HAMINGBRUTEFORCE_H
#define HAMINGBRUTEFORCE_H

#include <vector>
#include "AlignedAllocator.h"
#include <cassert>

#ifndef N_DIM_BINARYDESCRIPTOR
#define N_DIM_BINARYDESCRIPTOR 256
#endif

#ifndef SIZE_BITS_HAMING
#define SIZE_BITS_HAMING 64
#endif

class HamingBruteForce {
public:
    typedef std::vector<int, AlignedAllocator<int, 32>> ivec;

    HamingBruteForce(int n_size_reserve_, int threshold_);

    void match_all(const int64_t *a, int n_size_a, const int64_t *b, int n_size_b);

    const int n_dim_vec = N_DIM_BINARYDESCRIPTOR/SIZE_BITS_HAMING; // <-- N_DIM_BINARYDESCRIPTOR/SIZE_BITS_HAMING = 4
    int n_size_reserve;
    int threshold;
    ivec index_ab;
    ivec distance_ab;
};

#endif
