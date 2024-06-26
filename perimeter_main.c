#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int opt;
    float square_perimeter=0,eq_triangle_perimeter=0, circle_perimeter=0,side;



    while ((opt = getopt(argc, argv, "s:t:c:")) != -1) {
        switch (opt) {
            case 's':
                side = atof(optarg);
                square_perimeter = 4*side;
                printf("Perimeter of square is %f",square_perimeter);
                break;
            case 't':
                side = atof(optarg);
                eq_triangle_perimeter = 3*side ;
                printf("Perimeter of equilateral triangle is %f",eq_triangle_perimeter);
                break;
            case 'c':
                side = atof(optarg);
                circle_perimeter = 2*3.14*side ;
                printf("Perimeter of circle is %f",circle_perimeter);
                break;
            default:
                printf("Invalid parameter");
        }
    }
    return 0;
}
