#include <stdio.h>

int main(void) {
    //  Опис змінних типів: int, float, unsigned short
    int a;
    float b;
    unsigned short c;

    //  Ініціалізація змінних згідно з варіантом 2 (табл. 15)
    a = 926;
    b = 4.811e-1f;
    c = 1914;

    // Опис змінних типів: double, int, char
    double d_var;
    int i_var;
    char c_var;

    //  Ініціалізація змінних з п.3 за допомогою змінних з п.1:
  
    // — неявне приведення типів
    d_var = a; // int автоматично перетворюється в double

    // — явне приведення типів
    i_var = (int)b; // float явно приводиться до int

    // — механізм обходу суворої типізації (через покажчики / type punning)
    c_var = *(char *)&c;

    // Перевірка
    printf("Пункт 1-2: a = %d, b = %f, c = %u\n", a, b, c);
    printf("Пункт 3-4 неявне: d_var = %lf\n", d_var);
    printf("Пункт 3-4 явне: i_var = %d\n", i_var);
    printf("Пункт 3-4 обхід типізації: c_var = %d (символ: %c)\n", c_var, c_var);

    return 0;
}
