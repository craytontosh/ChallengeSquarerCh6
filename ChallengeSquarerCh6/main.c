//
//  main.c
//  Chapter 6 Challenge Squarer
//
//  Created by Crayton McIntosh on 8/16/16.
//  Copyright © 2016 Crayton McIntosh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x, y;
    printf("Print a value you would like to square: ");
    scanf("%d", &x);
    y = x * x;
    printf("\"%d\" squared is \"%d\".\n", x, y);
    
    return 0;
}
