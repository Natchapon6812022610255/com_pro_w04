#include <stdio.h>

int main() {
    char nameInitial = 'N' ; //บอกชื่อ
    int age = 18; //บอกอายุ
    float weight = 52; //บอกน้ำหนัก
    char gender[] = "Female"; //บอกเพศ

    printf("Initial: %c\n", nameInitial); //ปริ้นชื่อตามตัวแปรที่กำหนด
    printf("Age: %d\n", age); //ปริ้นอายุตามตัวแปรที่กำหนด
    printf("Weight: %.1f kg\n", weight ); //ปริ้นน้ำหนักตามตัวแปรที่กำหนด
    printf("Gender: %s\n", gender); //ปริ้นเพศตามที่กำหนด
    return 0;
}