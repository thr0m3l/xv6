# xv6-rng70

---

This is modified version of official xv6-public version. This version of xv6 was modified for 

*   easy functionality
    *   adding system calls easily
*   [bug fixes](#bug-fix)
    *   make qemu "error: writing 1 byte into a region of size 0”
    *   qemu hangs on "Booting from hard disk..."

# Installation 

---

This version is slightly modified and tested on

*   OS: Garuda Linux
*   Kernel: 5.15.12-zen1-1-zen
*   Shell: fish-3.3.1
*   gcc/g++: 11.1.0

*   ***Installation procedure***

    *   install qemu through pacman

        *   `sudo pacman -S qemu`

    *   clone this repository 

        *   `git clone https://github.com/rng70/xv6-public.git`

    *   go to the cloned repo and build and run

        *   cd xv6-public && make qemu

            **in arch linux `make qemu` work exactly `make qemu-nox` where xv6 run at the current terminal instead of new terminal (at least for fish shell). if it’s not then run `make qemu-nox` to run xv6 at the same terminal**

After successful build and run the terminal will look like this if `qemu-nox` works

![image](./images/qemu-nox.png)

otherwise a new qemu terminal will be opened

![images](./images/qemu.png)



# Bug-Fix

1.   ***Case 1: make qemu "error: writing 1 byte into a region of size 0"***

​	two lines added before and after **line 1461: *lastaddr = 99; in usertests.c**

```c
#pragma GCC diagnostic ignored "-Wstringop-overflow"
*lastaddr = 99;
#pragma GCC diagnostic pop
```



2.   ***Case 2: qemu hangs on "Booting from hard disk..."***

​	this problem occurs specially on arch linux though it is quite common for other distros also. See [#155](https://github.com/mit-pdos/xv6-public/pull/155). to solve this problem Makefile was slightly modified.

# Explore xv6 

---

1.   



## official statement [here](./README)
