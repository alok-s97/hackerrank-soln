#include <stdio.h>

int main(){
    int arr_size, arr_element;
    scanf("%d", &arr_size);
    int pos=0, neg=0, zer=0;
    for (int i=0; i<arr_size; i++) {
        scanf("%d", &arr_element);
        if (arr_element>0){
            pos += 1;
        }
        else if (arr_element<0){
            neg += 1;
        }
        else
            zer++;
    }

    printf("%6f\n",(float)pos / arr_size);
    printf("%6f\n%6f\n",(float)neg / arr_size ,(float)zer / arr_size);
    return 0;
}
