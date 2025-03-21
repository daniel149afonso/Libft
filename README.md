# Libft

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

Utiliser libft.a dans un projet :

```bash
gcc main.c libft.a

Nettoyer les fichiers objets :

```bash
make clean

Nettoyer les fichiers objets et l'exécutable :

```bash
make fclean

Recompiler depuis zéro :

```bash
make re

