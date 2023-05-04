#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define STACK_SIZE 100

typedef struct {
        double data[STACK_SIZE]; // массив элементов
        int top; // индекс вершины стека
} Stack;

//инициализируем стек
void init(Stack* s){
        s->top = 0; // говорим что он изначально пуст
}

//заполнение стека
void push(Stack* s, int value) {
        if(s->top < STACK_SIZE - 1) { // не превышен ли размер стека? если топ мнеьше стексайз - 1 то место еще есть и элемент можно добавить
                s->data[++s->top] = value;
                } else {
                        printf("Стек полон, количество элементов: %d !\n", s->top);
                        exit(EXIT_FAILURE);
                }
}
// функция удаления элемента из стека
int pop(Stack* s) {
        if (s->top >= 0) {
                return s->data[s->top--];
        }
        else {
                printf("Ошибка: стек пуст.\n");
                exit(EXIT_FAILURE);
        }
}

// функция получения верхнего элемента
int peek(Stack* s) {
        if (s->top >= 0) {
        return s->data[s->top];
        }
        else {
                printf("Ошибка: стек пуст.\n");
                exit(EXIT_FAILURE);
        }
}

int main()
{
        char operator;
        double a;
        double b;
        double result;

        printf ("введите выражение:");
        scanf ("%lf %c %lf", &a, &operator, &b);

        switch(operator) {
                case '+':
                        result = a + b;
                        break;
                case '-':
                        result = a - b;
                        break;
                case '*':
                        result = a * b;
                        break;
                case '/':
                        if ( b == 0) {
                                printf("на ноль делить нельзя!\n");
                                return 1;
                                }
                                result = a / b;
                        break;
                default:
                        printf("Ошибка\n");
			return 1;
                }
                printf("%lf %c %lf = %lf\n", a, operator, b, result);
        return 0;
}
