#include <stdio.h>

int main (void){

    //Опис зміних символьного типу
    char var1, var2, var3;

    //Опису констант символьного типу
    const char const1 = 0x2d;
    const char const2 = 0x32;
    const char const3 = 0x4;

    //Ініціювання об'єктів при опису
    char init_var1 = '[';
    char init_var2 = 'T';
    char init_var3 = '2';

    var1 = '[';
    var2 = 'T';
    var3 = '2';

    //Ініціювання об'єктів оператором привласнення
    char hex_var1, hex_var2, hex_var3;

    hex_var1 = 0x2d;
    hex_var2 = 0x32;
    hex_var3 = 0x4;

    //Перевірка
    printf("1 та 3. Ініціалізація при опису: %c, %c, %c\n", init_var1, init_var2, init_var3);
    printf("2. Константи: %c, %c, %c\n", const1, const2, const3);
    printf("4. Привласнення (літерали): %c, %c, %c\n", var1, var2, var3);
    printf("4. Привласнення (коди): %c, %c, %c\n", hex_var1, hex_var2, hex_var3);

    return 0;
}
