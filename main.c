#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    float r, d, c, area;



    while ((opt = getopt(argc, argv, "r:d:c:")) != -1) {
        switch (opt) {
            case 'r':
                r = atof(optarg);
                area = 3.14 * (r * r);
                break;
            case 'd':
                d = atof(optarg);
                area = 3.14 * ((d / 2) * (d / 2));
                break;
            case 'c':
                c = atof(optarg);
                area = (c * c) / (4 * 3.14);
                break;
        }
    }

    if (area > 0.0) {
        printf("Area of the circle is %f\n", area);
    } else {
        printf("No valid option provided");
        return 1;
    }

    return 0;
}
