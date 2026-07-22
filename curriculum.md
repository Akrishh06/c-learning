# C → COMP2017 Exam Roadmap

Goal: go from zero C to comfortably solving `mock_exam_1.pdf` (COMP2017 Systems
Programming). Each module maps to one or more exam questions so nothing here
is busywork.

Mode: learning mode. I explain the minimum theory needed, then you write code
or answer a question before I show any solution. I compile/run what you write
and give feedback instead of handing you finished answers.

## Modules

- [x] 0. Toolchain — compiling & running a C program (gcc)
- [x] 1. Fundamentals — types, operators, control flow, functions
- [x] 2. Arrays & strings — char arrays, `string.h`
- [x] 3. Pointers — addresses, deref, pointer arithmetic, pointers+arrays
- [x] 4. File I/O — `fopen`/`fgets`/`sscanf`/parsing            → **Q1 SOLVED (a+b)**
- [ ] 5. Structs & unions — memory layout, padding, offsets      → **Q2**
- [ ] 6. Dynamic memory — `malloc`/`free`/`calloc`/`realloc`, common bugs
- [ ] 7. Compilation & linking — static libs vs shared objects, security → **Q3**
- [ ] 8. Processes — `fork`/`exec`/`wait`/pipes/signals           → **Q6**
- [ ] 9. Concurrency — pthreads, mutex, condvar, semaphores, race
      conditions, producer-consumer, parallel work splitting    → **Q4, Q5**
- [ ] 10. Capstone — timed attempt at the full mock exam, review

## Notes / weak spots log

- Learning style: near-total beginner, ADHD — keep each step to ONE small,
  concrete concept before combining into anything exam-sized. Templates
  with blanks work well when a new concept lands wrong; full independent
  attempts work fine once a pattern has been repeated.
- Recurring bug patterns to watch for (already made, already fixed once,
  worth a quick re-check if they resurface): uninitialized variables used
  before assignment; integer division silently truncating; printf format
  specifier not matching the actual variable type; off-by-one buffer sizing
  (forgetting the `\0` terminator byte); quoting a variable name into an
  accidental string literal.
