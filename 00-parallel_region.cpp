//
// Created by Nalaka on 5/12/2018.
//

#include <iostream>
#include <sstream>
#include <opm.h>

int main() {
    #pragma omp parallel
    {
        int tid = tid = omp_get_thread_num();
        printf("Hello World from thread = %d\n", tid);
    }
}
