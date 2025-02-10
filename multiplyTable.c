#include <stdio.h>
int main(){
    int a;//ประกาศค่าตัวเเปร
    scanf("%d", &a);//รับค่า

    for (int i = 1; i <= 12; i++){
        printf("%d x %d = %d\n", a, i, a*i); //เเสดงผล

    }
}
