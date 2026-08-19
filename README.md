<div align="center">

# C Piscine — 42 Lisboa

**Lucas Cerqueira** · [@MiniPanado](https://github.com/MiniPanado)

[![Last Commit](https://img.shields.io/github/last-commit/MiniPanado/2026-piscine-42?color=blue&label=last%20commit)](https://github.com/MiniPanado/2026-piscine-42/commits/main)
![C](https://img.shields.io/badge/language-C-00599C)
![Shell](https://img.shields.io/badge/language-POSIX_shell-4EAA25)

[Overview](#overview) • [Snapshot](#snapshot) • [Exams](#exams) • [Shell](#shell) • [C Modules](#c-modules) • [Rushes](#rushes) • [BSQ](#bsq) • [Structure](#repository-structure) • [Skills](#skills--concepts)

</div>

---

## Overview

This repository holds my work from the **C Piscine at 42 Lisboa** — the school's month-long, peer-evaluated selection process. There are no lectures: every exercise, rush, and exam here started from a subject PDF, a deadline, and whatever I could work out — alone or with an assigned team — before time ran out.

The tables below show where each piece currently stands: validated at 100%, mid-fix, or not started yet. A few entries explain exactly why they look the way they do, because the reason usually matters more than the number.

> New to 42? It's a tuition-free, project-based school with no teachers and no classes — cadets learn by building, breaking, and evaluating each other's code. The Piscine is the entry process: about four weeks to show you can keep up.

## Snapshot

| 18 / 24 | 7,634 | 24 | 2 |
|:---:|:---:|:---:|:---:|
| **at 100%** | **lines of C written** | **modules, exams & projects** | **built with teammates** |

*Status key: ✅ validated at 100% · 🟡 partially validated · 🔒 complete, pending a prerequisite · ⚠️ scored 0% despite a working solution · ⬜ not started*

## Exams

Exams run on 42's own locked-down machines — no notes, no internet, nothing carried over — so there's no folder to link here; this table is the full record.

| Exam | Result |
|---|:---:|
| exam00 | ✅ 100% |
| exam01 | ✅ 100% |
| exam02 | ✅ 100% |
| exam03 | 🟡 90% |

## Shell

Two modules building working fluency with a POSIX shell and Git — permissions, redirections, SSH access, process and group inspection, targeted file search, and a first real introduction to version control.

| Module | Result | Focus |
|---|:---:|---|
| [shell00](shell00) | ✅ 100% | Permissions, SSH, first Git commits, `.gitignore`, `diff` |
| [shell01](shell01) | ✅ 100% | Process & group inspection, `find`-based file search, deliberately awkward edge cases — including a filename designed to break naive scripts |

## C Modules

Fourteen modules, roughly in order of what they build on.

### Foundations — C00 → C04

| Module | Result | Covers |
|---|:---:|---|
| [C00](C00) | ✅ 100% | Output basics — `write`, character/number printing, nested loops for pattern printing |
| [C01](C01) | ✅ 100% | Pointers & arrays — swap by reference, division/modulo, reversing and sorting an int array |
| [C02](C02) | ✅ 100% | String fundamentals — character-class checks, case conversion, safely printing non-printable memory |
| [C03](C03) | ✅ 100% | A small string library — `strcmp`, `strcat`, `strstr` and related functions, written from scratch |
| [C04](C04) | ✅ 100% | Number conversion — `atoi`/`putnbr` reimplemented, extended to arbitrary numeric bases |

### Algorithms & Structures — C05 → C09

| Module | Result | Covers |
|---|:---:|---|
| [C05](C05) | ✅ 100% | Recursion — factorial & power (iterative *and* recursive), Fibonacci, integer sqrt, primality testing, and the N-Queens backtracking puzzle |
| [C06](C06) | ✅ 100% | Command-line arguments — reading, reversing, and sorting `argv` |
| [C07](C07) | ✅ 100% | Pointers-to-pointers — `split`, `join`, range generation, base conversion |
| [C08](C08) | ✅ 100% | Custom types — structs, booleans, points, and displaying 2D arrays |
| [C09](C09) | ✅ 100% | Packaging code into a real static library — `ar`, a proper `Makefile`, and linking against your own `.a` |

### Systems & Data Structures — C10 → C13

| Module | Result | Covers |
|---|:---:|---|
| [C10](C10) | 🟡 15% | Rebuilding Unix tools from raw file I/O — `cat`, `tail`, and a `hexdump` clone |
| [C11](C11) | ✅ 100% | Function pointers — `foreach`/`map`/`any`/`count_if`, and pointer-driven sorting |
| [C12](C12) | 🔒 Complete, ungraded | Singly linked lists — create, push, traverse, filter, reverse, merge, and sort (18 exercises) |
| C13 | ⬜ Not started | Binary trees — the three traversal orders, insertion, search, level-order application |

> **On C10, C12, and C13:** C12's eighteen exercises are written and working locally, but 42's evaluation chain requires C10 to be validated first — and C10 only cleared its first exercise (`display_file`) before `cat`, `tail`, and `hexdump` proved tougher than expected. So C12 hasn't been formally graded yet, and C13 — next in line — wasn't reached before time ran out. The code exists; the grade doesn't, yet.

## Rushes

Three team projects, assigned rather than chosen.

| Rush | Result | What it was |
|---|:---:|---|
| [rush00](rush00) | ⚠️ 0%* | A parameterized function drawing bordered rectangles in one of five visual styles, assigned per team |
| [rush01](rush01) | ✅ 100%† | A backtracking solver for a 4×4 "skyscraper" visibility puzzle |
| rush02 | ⬜ Not started | A number-to-words converter driven by an editable dictionary file |

*\*rush00 — a working solution, submitted wrong.* The `rush` function itself was correct and passed every case we threw at it, but the subject calls for submissions inside an `ex00/` folder, and ours ended up sitting in the project root instead. The evaluation found nothing to grade there — a fair 0%, and a lesson that stuck: check the submission structure before the deadline, not after.

*†Mandatory part only — the up-to-9×9 bonus wasn't attempted.*

## BSQ

BSQ is the **C Piscine's final project**: given a map of empty and obstacle cells, find the largest unobstructed square and mark it — handling multiple maps, malformed input, and both file and `stdin` sources along the way.

**Result: ✅ 100%** — built together with **Ivan**, a fellow cadet. Genuinely paired, not just parallel: several files, including the core algorithm, carry both our names in their history.

The solution is split across focused files — [`parsing`](BSQ/parsing.c), [`validation`](BSQ/validation.c), [`algorithm`](BSQ/algorithm.c), [`memory`](BSQ/memory.c), [`output`](BSQ/output.c) — rather than one large `main.c`. The core is a row/column dynamic-programming table: the standard approach for this class of "largest square in a grid" problem.

## A few things this Piscine made clear

- **A correct solution in the wrong folder scores the same as no solution.** See rush00, above.
- **"Finished" and "validated" aren't the same thing here.** C12 is done; it just can't be graded until C10 clears its prerequisite.
- **The team projects were the ones that stuck.** rush01 with an assigned team, BSQ with Ivan — both were places where explaining a decision out loud mattered as much as writing the code.

## Repository Structure

<details>
<summary>Show full layout</summary>

```
2026-piscine-42/
├── C00/ … C09/          Foundations through static libraries (100%)
├── C10/                 Unix tool clones — ex00 validated, ex01–ex03 in progress
├── C11/                 Function pointers (100%)
├── C12/                 Linked lists — complete, pending evaluation
├── shell00/, shell01/   Shell & Git fundamentals (100%)
├── rush00/, rush01/, rush02/   Team projects
├── BSQ/                 Final project
├── subjects/            Official subject PDFs, kept for reference
└── README.md
```

`C13` and `rush02` don't have a folder yet — neither has been started.

</details>

## Skills & Concepts

**Language & tooling** — C (`-Wall -Wextra -Werror`), POSIX shell, Git, Makefiles, static libraries (`ar`), 42 Norm compliance

**Core programming** — pointers and pointers-to-pointers, manual memory management, recursion, string and array manipulation built from raw primitives

**Algorithms** — backtracking (N-Queens, the rush01 puzzle solver), dynamic programming (BSQ), sorting, primality testing

**Data structures** — singly linked lists, function-pointer-driven iteration, custom structs, binary trees (in progress)

**Systems** — rebuilding core Unix utilities from raw file descriptors and syscalls

**Collaboration** — two team-based deliverables, shared git history with teammates, peer evaluation on both sides of the table

## What's next

This repository covers the Piscine only. Once Common Core starts, each project gets its own README in its own repo, and a root profile README will tie the whole journey together — this one stays focused on where it started.

---

<div align="center">

Built by **Lucas Cerqueira** — [GitHub](https://github.com/MiniPanado) — 42 Lisboa

</div>
