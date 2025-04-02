# Libft

Libft is the very first project at 42 School.  
The goal is to recreate a portion of the C standard library functions, as well as implement utility functions for use in future projects.

## Goals 🎯

- Reimplement standard C functions (`strlen`, `memset`, etc.)
- Understand memory management and pointers
- Create a static library (`libft.a`)
- Build strong fundamentals for upcoming projects

## Contents 🧩

- Libc functions (`ft_strlen`, `ft_memcpy`, `ft_strchr`, etc.)
- Additional functions (`ft_split`, `ft_itoa`, etc.)
- Files:
  - `libft.h` : header file
  - `*.c` : source files
  - `Makefile`
## Utilisation 🛠️

Compile the library :

```bash
make
```

Use libft.a in your project :

```bash
gcc main.c libft.a
```

Clean obejct files :

```bash
make clean
```

Clean object files and the executable :

```bash
make fclean
```

Recompile everything from scratch :

```bash
make re
```

# Libft (French version)

Libft est le tout premier projet de l'école 42.  
Il consiste à recréer une partie des fonctions de la librairie standard du langage C, ainsi que d’implémenter des fonctions utilitaires pour les projets futurs.

## Objectifs 🎯

- Reproduire les fonctions standards en C (`strlen`, `memset`, etc.)
- Comprendre la gestion de la mémoire et des pointeurs
- Créer une bibliothèque statique (`libft.a`)
- Acquérir de bonnes bases pour les prochains projets

## Contenu 🧩

- Fonctions de la libc (`ft_strlen`, `ft_memcpy`, `ft_strchr`, etc.)
- Fonctions supplémentaires (`ft_split`, `ft_itoa`, etc.)
- Fichiers :
  - `libft.h` : en-tête
  - `*.c` : fichiers source
  - `Makefile`

## Utilisation 🛠️

Compiler la bibliothèque :

```bash
make
```

Utiliser libft.a dans un projet :

```bash
gcc main.c libft.a
```

Nettoyer les fichiers objets :

```bash
make clean
```

Nettoyer les fichiers objets et l'exécutable :

```bash
make fclean
```

Recompiler depuis zéro :

```bash
make re

