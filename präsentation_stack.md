---
marp: true
theme: default
paginate: true
---

# Stack in C
Gruppenarbeit Datenstrukturen  
Elektrotechniker HF – Programmiertechnik B

---

# Agenda
1. Einführung  
2. Definition & Prinzip  
3. Aufbau & Funktionsweise  
4. Grafische Darstellung  
5. Operationen  
6. Vor- und Nachteile  
7. Einsatzbereiche  
8. Implementierung in C  
9. Quiz  

---

# Einführung
- Was ist eine Datenstruktur?  
- Warum sind Datenstrukturen wichtig?  

---

# Definition & Prinzip
- Stack = Stapel  
- LIFO-Prinzip („Last In – First Out“)  

---

# Aufbau & Funktionsweise
- Elemente werden übereinandergelegt  
- Zugriff nur auf oberstes Element  

---

# Grafische Darstellung
*(Hier kommt eine Skizze oder Grafik hin)*  

---

# Operationen
**Push** – Element oben ablegen  
**Pop** – oberstes Element entfernen  
**Peek** – oberstes Element ansehen  

---

# Vor- und Nachteile
**Vorteile:**  
- Einfach, effizient  
- Gute Speicherverwaltung  

**Nachteile:**  
- Zugriff nur auf oberstes Element  

---

# Einsatzbereiche
- Undo-Funktionen  
- Funktionsaufruf-Stack  
- Ausdrucksauswertung (z. B. Klammernprüfung)  

---

# Implementierung in C
```c
#include <stdio.h>
#define SIZE 5

int stack[SIZE], top = -1;

void push(int value) {
    if(top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = value;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
