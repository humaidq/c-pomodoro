# Pomodoro
[View the project page on humaidq.ae](https://humaidq.ae/projects/pomodoro/)
## 1. Description

This is a suckless pomodoro command-line application I created, as I couldn't
find any good pomodoro command-line application.

## 2. Requirements

The following packages must be installed on your system.

- tcc (you need to modify Makefile to use a different compiler)
- make
- git

## 3. Copying and contributing

This program is written by Humaid AlQassimi,
and is distributed under the [BSD 2 Clause](https://humaidq.ae/license/bsd-2-clause) license.  

### 4. Download and make

```sh
$ git clone git.sr.ht/~humaid/c-pomodoro
$ cd c-pomodoro
$ make all
```

### 5. Usage

```sh
$ ./pomodoro
```

### 6. Configuration

To configure the timing, you have to modify the values in the header file
`pomodoro.h`, and recompile.

