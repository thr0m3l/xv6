# xv6

---

This is modified version of official xv6-public version. Most of the modifcation credit goes to [Tanin](https://github.com/rng70) and [Afnan](https://github.com/AfnanCSE98).


*   easy functionality
    *   [adding system calls easily](#modularize-syscalls)
*   [bug fixes](#bug-fix)
    *   make qemu "error: writing 1 byte into a region of size 0”
    *   qemu hangs on "Booting from hard disk..."

# Installation 

---

This version is slightly modified and tested on

*   OS: Fedora Workstation 35
*   Kernel: 5.15.12-200.fc35.x86_64
*   Shell: zsh 5.8
*   gcc/g++: gcc version 11.2.1 20211203 (Red Hat 11.2.1-7) (GCC) 
