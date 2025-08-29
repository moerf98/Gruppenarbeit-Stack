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
2. Eine kurze Voranmerkung
3. Definition & Prinzip  
4. Aufbau & Funktionsweise  
5. Grafische Darstellung  
6. Operationen  
7. Vor- und Nachteile  
8. Einsatzbereiche  
9. Implementierung in C  
10. Quiz  

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
