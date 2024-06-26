#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    float s = 0, d = 0, p = 0, area = -1;

    while ((opt = getopt(argc, argv, "s:d:p:")) != -1) {
        switch (opt) {
            case 's':
                s = atof(optarg);
                area = s * s;
                break;
            case 'd':
                d = atof(optarg);
                area = 0.5 * d * d;
                break;
            case 'p':
                p = atof(optarg);
                area = (1.0 / 16.0) * p * p;
                break;
        }
    }

    if (area >= 0.0) {
        printf("Area is %f\n", area);
    } else {
        printf("No valid option provided");

    }

    return 0;
}
