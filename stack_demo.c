#include <stdio.h>    // für printf
#include <stdbool.h>  // für bool, true, false

#define MAX 5   // maximale Größe des Stacks (Anzahl erlaubter Elemente)

// Globale Stack-Datenstruktur
int stack[MAX];   // Array, das die Stack-Elemente speichert
int top = -1;     // Index des obersten Elements (-1 bedeutet: Stack ist leer)

// Prüft, ob der Stack leer ist
bool isEmpty() {
    return top == -1;
}

// Prüft, ob der Stack voll ist
bool isFull() {
    return top == MAX - 1;
}

// Legt ein Element oben auf den Stack
void push(int value) {
    if (isFull()) {
        // Stack hat keinen Platz mehr → Overflow
        printf("Stack Overflow! Kann %d nicht hinzufügen.\n", value);
    } else {
        // zuerst Index erhöhen, dann Wert einfügen
        stack[++top] = value;
        printf("%d wurde auf den Stack gelegt.\n", value);
    }
}

// Nimmt ein Element vom Stack herunter
int pop() {
    if (isEmpty()) {
        // Stack ist leer → nichts zu entfernen
        printf("Stack Underflow! Kann kein Element entfernen.\n");
        return -1; // Fehlerwert
    } else {
        // oberstes Element zurückgeben und Index erniedrigen
        printf("%d wurde vom Stack genommen.\n", stack[top]);
        return stack[top--];
    }
}

// Zeigt das oberste Element an, ohne es zu entfernen
int peek() {
    if (isEmpty()) {
        printf("Stack ist leer.\n");
        return -1;
    } else {
        printf("Oberstes Element ist: %d\n", stack[top]);
        return stack[top];
    }
}

// Gibt den gesamten Inhalt des Stacks aus
void printStack() {
    if (isEmpty()) {
        printf("[leer]\n");
    } else {
        printf("Stack-Inhalt: ");
        // von unten bis oben ausgeben
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Hauptprogramm zur Demonstration
int main() {
    printf("Stack-Demo (max %d Elemente)\n\n", MAX);

    printStack();      // aktueller Stack: leer

    push(10);          // Elemente hinzufügen
    push(20);
    push(30);
    printStack();      // sollte 10 20 30 zeigen

    peek();            // oberstes Element anzeigen (30)

    pop();             // Element entfernen (30)
    printStack();      // sollte 10 20 zeigen

    push(40);          // weitere Elemente
    push(50);
    push(60);          // Überlauf, da MAX=5
    printStack();      // sollte 10 20 40 50 zeigen

    // Alle Elemente entfernen, bis leer
    while (!isEmpty()) {
        pop();
    }
    printStack();      // Stack leer

    return 0;
}
