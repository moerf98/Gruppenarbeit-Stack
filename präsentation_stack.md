---
marp: true
paginate: true
theme: default
class: lead
---

# Präsentation: Stack in C  
_Gruppenarbeit – Programmiertechnik B_

---

# Agenda  

1. **Manuel Näf**  
   - Einführung: Definition, Aufbau, Funktionsweise  
   - Beispiele & Alltagsvergleiche  
   - Übergang zu den Operationen  

2. **Cristian Cubas**  
   - Grafische Darstellung des Aufbaus  
   - Erklärung der Operationen (Push, Pop, Peek)  
   - Visuelle Beispiele  

3. **Sven Faas**  
   - Vor- und Nachteile  
   - Einsatzbereiche  
   - Implementierung in C  
   - Quiz  

---

# Teil 1 – Manuel Näf  

---

# Stack – Einführung  

<!-- presenter notes
Hallo zusammen, ich beginne mit der Einführung in die Datenstruktur Stack. 
Bevor wir uns die Operationen anschauen, möchte ich die Grundidee, den Aufbau 
und Alltagsbeispiele erklären. Das ist die Basis für die nächsten Teile.
-->

---

## Definition: Stack  

- **Stack** (dt. *Stapel*) ist eine abstrakte Datenstruktur  
- Prinzip: **LIFO** = *Last In, First Out*  
- Vergleich: **Tellerstapel**  
  - Letzter Teller oben → erster Teller wieder weg  

<!-- presenter notes
Ein Stack – auf Deutsch Stapel – ist eine abstrakte Datenstruktur. 
Das zentrale Prinzip ist LIFO – Last In, First Out. 
Das heißt, das letzte Element, das hineingelegt wird, 
ist auch das erste, das wieder hinauskommt. 
Wie bei einem Tellerstapel: ich lege Teller oben ab, 
und nehme beim Abheben wieder den obersten.
-->

---

## Prinzip LIFO  

- **Letztes hinein → erstes hinaus**  

Beispiel:  
1. Karten A, B, C werden gestapelt  
2. Reihenfolge: `[A, B, C]`  
3. Erste Entnahme = **C**  

<!-- presenter notes
Ein Beispiel: Ich lege die Karten A, B und C auf den Stapel. 
C liegt oben, A ganz unten. 
Wenn ich jetzt ein Element herausnehme, bekomme ich nicht A, 
sondern C – also das letzte, das ich hineingelegt habe.
-->

---

## Aufbau & Funktionsweise  

- Zwei typische Implementierungen:  
  - **Array-basiert** → feste Größe  
  - **Verkettete Liste** → flexibel, dynamisch  

- Wichtige Bestandteile:  
  - **Speicherbereich** (Array/Liste)  
  - **`top`-Zeiger** → zeigt auf oberstes Element  

<!-- presenter notes
Es gibt zwei klassische Implementierungen: 
Array-basiert – das ist schnell, aber hat eine feste Größe. 
Oder mit einer verketteten Liste – das ist flexibel, kann aber 
etwas mehr Speicher brauchen. 
Wichtig ist immer der Zeiger auf das oberste Element – top – 
denn dort passieren alle Operationen.
-->

---

## Beispiele aus dem Alltag  

- **Tellerstapel**  
- **Browser-History**  
- **Undo-Funktion**  
- **Wäschekorb**  

---

# Teil 2 – Cristian Cubas  

---

## Grafische Skizze  

*(Platz für Stack-Illustration)*  

---

## Operation: Push  

*(Platz für Erklärung + Visualisierung)*  

---

## Operation: Pop  

*(Platz für Erklärung + Visualisierung)*  

---

## Operation: Peek  

*(Platz für Erklärung + Visualisierung)*  

---

## Zusammenfassung Operationen  

*(Platz für kurze Wiederholung)*  

---

# Teil 3 – Sven Faas  

---

## Vor- und Nachteile  

*(Platz für Aufzählung Pro/Contra)*  

---

## Einsatzbereiche  

*(Platz für 2–3 Programmierbeispiele)*  

---

## Implementierung in C  

https://stunning-space-dollop-x5xg9w99pxgxc67g.github.dev/ 
*(Platz für Codebeispiel Push/Pop)*  

---

## Quiz  

*(Platz für 4–5 Fragen)*  

---

# Vielen Dank für die Aufmerksamkeit! 🎉
