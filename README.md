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
