#include<stdio.h>
#include <string.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int h, m, s;

int clock(int x) {
    if (x < 10) {
        printf("0%d", x);
        return(0);
    }
    else {
        printf("%d", x);
        return(0);
    }
}
int main() {
    scanf_s("%d", &h);
    scanf_s("%d", &m);
    scanf_s("%d", &s);
    if (s == 0) {
        s = 59;
        if (m == 0) {
            m = 59;
            if (h == 0) {
                h = 23;
            }
            else {
                h = h - 1;
            }
        }
        else {
            m = m - 1;
        }
    }
    else {
        s = s - 1;
    }

    clock(h);
    printf(":");
    clock(m);
    printf(":");
    clock(s);
    return(0);
}