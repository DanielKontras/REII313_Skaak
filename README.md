# REII313_Skaak

A two-player chess game (Skaak) built with C++ and Qt5.

---

## Prerequisites

You need **Qt 5** (or Qt 6) installed on your computer. The easiest way is to use **Qt Creator**, which bundles the compiler, qmake, and the IDE together.

- Download Qt from: https://www.qt.io/download-qt-installer
- During installation, make sure to select at least one **Qt 5.x** (or Qt 6.x) kit for your platform (Windows, macOS, or Linux).
- Qt Creator is included in the installer.

---

## Building the Game

> **Note:** `<repo-root>` refers to the folder where you cloned this repository.

### Option A – Qt Creator (recommended)

1. Open **Qt Creator**.
2. Click **File → Open File or Project…**
3. Navigate to and open the project file (relative to the repository root):
   ```
   <repo-root>/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/Skaak_V2.pro
   ```
4. Qt Creator will ask you to **configure the project** – select a kit (e.g. *Desktop Qt 5.x.x MinGW 64-bit* on Windows or the appropriate kit on your OS) and click **Configure Project**.
5. Click the green **Run ▶** button (or press **Ctrl+R**) to build and launch the game automatically.

### Option B – Command line (Linux / macOS)

```bash
cd "<repo-root>/Downloads/Jaar3/Werk31/REII 313/Skaak_V2"
qmake Skaak_V2.pro
make
```

Then run the produced binary from the same directory (so it can find the image assets):

```bash
./Skaak_V2        # Linux / macOS
```

### Option C – Command line (Windows with MinGW)

Open the **Qt MinGW** command prompt that was installed with Qt, then:

```cmd
cd "<repo-root>\Downloads\Jaar3\Werk31\REII 313\Skaak_V2"
qmake Skaak_V2.pro
mingw32-make
```

Run the executable:

```cmd
debug\Skaak_V2.exe
```

> **Important:** The executable must be run from the `Skaak_V2` source folder (or you must copy all `*.png` image files next to the executable), otherwise the board and piece images will not load.

---

## How to Play

The game is a two-player hotseat chess game. Both players take turns on the same computer.

### Controls

| Action | How |
|---|---|
| **Select a piece** | Left-click on the piece you want to move |
| **Move the selected piece** | Left-click on the destination square |

### Turn order

- **Black** pieces start at the top of the board.
- **White** pieces start at the bottom of the board.
- White moves first; players alternate turns.

### Chess piece guide

| Piece | Afrikaans name | Movement |
|---|---|---|
| Pawn | Pion | Moves forward one square (two on first move); captures diagonally |
| Knight | Perd (Horse) | Moves in an L-shape (2 + 1 squares) |
| Bishop | Loper | Moves any number of squares diagonally |
| Rook | Kasteel (Castle) | Moves any number of squares horizontally or vertically |
| Queen | Koningin | Moves any number of squares in any direction |
| King | Koning | Moves one square in any direction |

### Winning

Capture the opponent's **King** (Koning) to win the game.

---

## Project Structure

```
<repo-root>/Downloads/Jaar3/Werk31/REII 313/Skaak_V2/
├── Skaak_V2.pro       # Qt project file
├── main.cpp           # Entry point
├── chessgame.cpp/h    # Main game window and game logic
├── chesspiece.cpp/h   # Base class for all chess pieces
├── pionpiece.cpp/h    # Pawn
├── horsepiece.cpp/h   # Knight
├── bishoppiece.cpp/h  # Bishop
├── castlepiece.cpp/h  # Rook
├── queenpiece.cpp/h   # Queen
├── kingpiece.cpp/h    # King
├── barrierpiece.cpp/h # Board boundary pieces (invisible barriers)
├── mainwindow.cpp/h   # Qt main window wrapper
└── *.png              # Board and piece images
```
