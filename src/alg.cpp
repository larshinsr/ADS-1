// Copyright 2022 NNTU-CS
#include <Cmath>
#include "alg.h"
#include <cstdint>



bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t curNum = 2;
    uint64_t i = 0;
    while (1) {
        if (checkPrime(curNum) == 1) {
            i++;
        }
        if (i == n) {
            break;
        }
        ++curNum;
    }
    return curNum;
}
uint64_t nextPrime(uint64_t value) {
    uint64_t nextPr = 0;
    while (1) {
        value++;
        if (checkPrime(value)) {
            return value;
            break;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t curNum = 2;
    uint64_t sum = 0;
    while (curNum < hbound) {
        if (checkPrime(curNum)) {
            sum += curNum;
            curNum++;
        } else {
            curNum++;
        }
    }
    return sum;
}
