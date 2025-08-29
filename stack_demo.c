#include <stdio.h>
#include <stdbool.h>

#define MAX 5   // maximale Größe des Stacks

// Stack-Struktur
int stack[MAX];
int top = -1;   // zeigt auf oberstes Element, -1 bedeutet leer

// Funktionen
bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Kann %d nicht hinzufügen.\n", value);
    } else {
        stack[++top] = value;
        printf("%d wurde auf den Stack gelegt.\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Kann kein Element entfernen.\n");
        return -1; // Fehlerwert
    } else {
        printf("%d wurde vom Stack genommen.\n", stack[top]);
        return stack[top--];
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack ist leer.\n");
        return -1;
    } else {
        printf("Oberstes Element ist: %d\n", stack[top]);
        return stack[top];
    }
}

void printStack() {
    if (isEmpty()) {
        printf("[leer]\n");
    } else {
        printf("Stack-Inhalt: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Hauptprogramm
int main() {
    printf("Stack-Demo (max %d Elemente)\n\n", MAX);

    printStack();

    push(10);
    push(20);
    push(30);
    printStack();

    peek();

    pop();
    printStack();

    push(40);
    push(50);
    push(60); // dieser push löst Overflow aus
    printStack();

    while (!isEmpty()) {
        pop();
    }
    printStack();

    return 0;
}
