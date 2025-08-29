# Stack in C – Gruppenarbeit

Dieses Repository enthält unsere Präsentation zum Thema **Stack in C** (Programmiertechnik B, HF).

Wir erstellen die Präsentation im **Markdown-Format** (`presentation.md`) und wandeln sie mit **Marp** in Folien (PowerPoint/PDF) um.

---

## 🔧 Zusammenarbeit

- Alle Inhalte kommen in `presentation.md`.
- Am Ende exportieren wir die Folien mit **Marp**:
  1. [Visual Studio Code](https://code.visualstudio.com/) installieren  
  2. [Marp for VS Code](https://marketplace.visualstudio.com/items?itemName=marp-team.marp-vscode) installieren  
  3. `presentation.md` öffnen → "Export Slide Deck" → `PowerPoint (.pptx)` oder PDF  
- Die Abgabe auf GitHub muss im **Markdown-Format** erfolgen, die Präsentation halten wir mit den exportierten Folien.

---

## 💡 Kurze Markdown-Erklärung

- `#` = Überschrift  
- `-` = Liste  
- `` `Code` `` = Code inline  
- ```` ```c ... ``` ```` = C-Codeblock  
- `---` = Trennt Folien in Marp  

### Beispiel: Einführung (fertige Folie)

So könnte die **erste Folie** unserer Präsentation aussehen:

```markdown
---
# Einführung

- Eine **Datenstruktur** ist eine Art, Daten im Speicher zu organisieren und zu verwalten.  
- Sie bestimmt, wie Daten **gespeichert, gefunden und verändert** werden.  
- Bekannte Beispiele: Arrays, Listen, Bäume, Stapel (Stack), Warteschlangen (Queue).  

**Warum wichtig?**
- Effiziente Datenstrukturen = schnellere Programme  
- Grundlage für viele **Algorithmen** und Anwendungen  
