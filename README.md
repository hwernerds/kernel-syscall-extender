# Linux Kernel Syscall Extensions

## Overview

This project involves adding two new system calls to the Linux kernel. The new system calls are:

  - werner5_putval(int val): Stores an integer value in a global location.
  - werner5_getval(): Retrieves the integer value stored by werner5_putval.

The project includes modifications to the kernel source code to integrate these system calls and provides user-space utilities to test them.

## Features

  - Adds new system calls to the Linux kernel.
  - User-space library for interacting with the new system calls.
  - Sample user-space application to demonstrate the usage of the new syscalls.

## Project Structure

patch.out: Contains the patch files and modifications made to the kernel source.
lib.c: User-space library source code for the new syscalls.
trylib.c: Sample user-space application demonstrating the usage of the new syscalls.
README.md: Documentation for the project.

## Instructions

### Kernel Modification

1. Apply Kernel Patch:

  Apply the provided patch files to the kernel source tree to integrate the new system calls. Use the patch command or manually apply changes.

2. Rebuild the Kernel:
   
  Rebuild the kernel with the applied patches.

    make clean
    make
    sudo make modules_install
    sudo make install
    
3. Update GRUB and Reboot:
   
  Update GRUB configuration and reboot the system to use the newly compiled kernel.

    sudo update-grub
    sudo reboot

### User-Space Library and Application

1. Compile the Library:

  Compile the user-space library lib.c.

    gcc -o lib lib.c
    
2. Compile the Sample Application:
   
  Compile the sample application trylib.c.

    gcc -o trylib trylib.c -L. -l:lib
    
3. Run the Sample Application:
   
  Execute the sample application to test the new system calls.

    ./trylib
