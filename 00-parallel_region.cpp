//
// Created by Nalaka on 5/12/2018.
//

#include <iostream>
#include <sstream>
#include <omp.h>

int main() {
    #pragma omp parallel num_threads(2)
    {
        int tid = omp_get_thread_num();
        printf("Hello from thread = %d\n", tid);
    }
}
