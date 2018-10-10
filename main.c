#include <stdio.h>

int findMaxValue(int *pointer, int sizeOfArray) {
    int max = *pointer;
    for (int i = 0; i < sizeOfArray; ++i) {
        if (max < *(pointer + i)) {
            max = *(pointer + i);
        }
    }
    return max;
}

int findMinValue(int *pointer, int sizeOfArray) {
    int min = *pointer;
    for (int i = 0; i < sizeOfArray; ++i) {
        if (min > *(pointer + i)) {
            min = *(pointer + i);
        }
    }
    return min;
}

int main() {
    int sizeOfArray;
    int *p;
    printf("Moi nhap so luong phan tu tu 1 den 10.\n");
    scanf("%d", &sizeOfArray);
    if (sizeOfArray < 1 || sizeOfArray > 10) {
        printf("So luong phan tu khong dung yeu cau.");
        return 0;
    }
    int array[sizeOfArray];
    p = array;
    printf("Moi nhap cac phan tu.\n");
    for (int i = 0; i < sizeOfArray; ++i) {
        printf("Moi nhap phan tu thu %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Hien thi cac phan tu trong mang.\n");
    for (int i = 0; i < sizeOfArray; ++i) {
        printf("%d\n", array[i]);
    }
    int choice;
    printf("Moi chon gia tri muon tim 1 | 2\n");
    printf("1. So lon nhat\n");
    printf("2. So nho nhat\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("So lon nhat la %d\n", findMaxValue(p, sizeOfArray));
            break;
        case 2:
            printf("So nho nhat la %d\n", findMinValue(p, sizeOfArray));
            break;
    }
    return 0;
}
