# Stack in C – Gruppenarbeit

Dieses Repository enthält unsere Präsentation zum Thema **Stack in C** (Programmiertechnik B, HF).

Die Präsentation schreiben wir im **Markdown-Format** in der Datei `präsentation_stack.md`.  
Am Ende exportieren wir diese Datei mit **Marp** zu Folien (PowerPoint oder PDF).

---

## Zusammenarbeit

- Alle Inhalte kommen in `präsentation_stack.md`.  
- Export mit Marp:  
  1. Visual Studio Code installieren  
  2. Erweiterung **Marp for VS Code** installieren  
  3. `präsentation_stack.md` öffnen → „Export Slide Deck“ → **PowerPoint (.pptx)** oder **PDF**  

Die Abgabe auf GitHub muss im **Markdown-Format** erfolgen, präsentieren werden wir mit den exportierten Folien.

---

## Markdown-Grundlagen

- *kursiv* → `*kursiv*`  
- **fett** → `**fett**`  
- ***fett & kursiv*** → `***fett***`  
- Überschriften: `#` (Titel 1), `##` (Titel 2), `###` (Titel 3)  
- Listen: `-` für Aufzählung, `1.` für nummerierte Liste  
- Inline-Code: `printf` → mit Backticks  
- Mehrzeiliger Codeblock: drei Backticks vor und nach dem C-Code  
- Folientrenner in Marp: `---`  

**Beispiel-Folie Einführung:**

```markdown
---
# Einführung

- Eine **Datenstruktur** ist eine Art, Daten im Speicher zu organisieren und zu verwalten.  
- Sie bestimmt, wie Daten **gespeichert, gefunden und verändert** werden.  
- Bekannte Beispiele: Arrays, Listen, Bäume, Stapel (Stack), Warteschlangen (Queue).  

**Warum wichtig?**
- Effiziente Datenstrukturen = schnellere Programme  
- Grundlage für viele **Algorithmen** und Anwendungen  

## Themenaufteilung

Damit jede Person ungefähr gleich viel Aufwand und Redezeit hat, teilen wir die Inhalte wie folgt auf:

### Manuel Näf
1. Einführung  
   - Was ist eine Datenstruktur?  
   - Warum sind Datenstrukturen wichtig?  
2. Definition & Prinzip  
   - Was ist ein Stack?  
   - LIFO-Prinzip (Last In – First Out)  
3. Aufbau & Funktionsweise  
   - Elemente stapeln  
   - Zugriff nur auf oberstes Element

---

### Person B
4. Grafische Darstellung  
   - Skizze / Visualisierung von Push & Pop  
5. Operationen im Detail  
   - Push (hinzufügen)  
   - Pop (entfernen)  
   - Peek (oberstes Element ansehen)  
6. Vor- und Nachteile  
   - Vorteile (einfach, effizient)  
   - Nachteile (nur Zugriff auf Top)  

---

### Person C
7. Einsatzbereiche  
   - Undo-Funktion  
   - Funktionsaufruf-Stack  
   - Ausdrucksauswertung (z. B. Klammern)  
8. Implementierung in C  
   - Einfacher Beispielcode für Push/Pop  
   - Erklärung des Codes  
9. Quiz  
   - 5 Fragen zur Wiederholung  
