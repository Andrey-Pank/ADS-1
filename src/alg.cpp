// Copyright 2022 NNTU-CS
#include <iostream>
#include <math.h>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool checker = false;
    int count = 0;
    int kor = sqrt(value);
    for (int i = 2; i <= kor; i++) {
        if (0 == value%i) {
            count += 1;
        }
    }
    if (0 == count) {
        checker = true;
        return checker;
    }
    else
        return checker;
}

uint64_t nPrime(uint64_t n) {
    int flag = 1;
    int num = 0;
    uint64_t cnt_Prime = 0;
    for (int i = 2; 0 != flag; i++) {
        num = i;
        int count = 0;
        int kor = sqrt(num);
        for (int i = 2; i <= kor; i++) {
            if (0 == num%i) {
                count += 1;
                break;
            }
        }
        if (0 == count) {
            cnt_Prime += 1;
            if (cnt_Prime == n) {
                flag = 0;
            }
        }
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    int flag = 1;
    uint64_t num = 0;
    for (uint64_t i = value+1; 0 != flag; i++) {
        num = i;
        int count = 0;
        int kor = sqrt(num);
        for (int i = 2; i <= kor; i++) {
            if (0 == num%i) {
                count += 1;
                break;
            }
        }
        if (0 == count) {
            flag = 0;
        }
    }
    return num;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t num = 0;
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        num = i;
        int count = 0;
        int kor = sqrt(num);
        for (int i = 2; i <= kor; i++) {
            if (0 == num%i) {
                count += 1;
                break;
            }
        }
        if (0 == count) {
            sum += num;
        }
    }
    return sum;
}
