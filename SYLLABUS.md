# ACTP Prerequisite Gate — 12-Week Study Plan

> **Goal:** Score 85–100% on MANTECH's ACTP prerequisite test (a tech-interview-style
> screen that decides enrollment).

| | |
|---|---|
| **Window** | Mon Jun 29 → Sun Sep 20 (12 themed weeks) + Sep 21–Oct 1 review buffer |
| **Hard deadline** | Oct 1 |
| **Baseline** | Strong general dev; new to low-level / systems |
| **Must be proficient by end** | C, Python, x86-64 assembly |
| **Gate surface area (assumed)** | C, x86 assembly, Python, sockets, debugging, + the two canonical study-guide exercises. RE status TBD. |

### Resource Map  (★ = from MANTECH's study sheet)

| Domain | First exposure | Ground truth | Fluency | Tier |
|---|---|---|---|---|
| **C** | EssentialC ★ (Stanford, ~45 pg — just read it) | libc man pages (`man 3 malloc`) | Exercism C track ★ | **Gate** |
| **x86-64 asm** | OST2 **Arch1001: x86-64 Assembly** (free) † | Intel/AMD manuals (lookup only) | Exercism x86-64 track ★ | **Gate** |
| **Debugging** | OST2 **Dbg1012: Intro GDB** (free) | GDB manual + Linux GDB cheatsheet ★ | — | **Gate** |
| **Networking** | Beej ★ (done) + binarytides Python socket tutorial ★ | `man 2 socket`, `man 7 ip`; Wireshark ★ to see traffic | — | **Gate** |
| **Python** | (you have the base) | Official Python docs | Exercism Python track ★ | **Gate** |
| **Linux systems** | — | man pages §2 & §3 (build the no-external-refs habit) | — | **Gate** |
| **Reverse eng.** | OST2 **Dbg1102: Intro Ghidra** (free) | — | — | **Gate-dependent** |

## The 12 Weeks

### Week 1 — Jun 29 → Jul 5 · PRIMARY: C memory model & pointers
- **Why now:** Bedrock. Everything downstream (asm, RE, systems) is built on this.
- **Distill for you:** EssentialC — pointers, arrays, strings, stack vs. heap.
- **Milestone:** Hand-trace a set of pointer programs; explain stack vs. heap with zero hand-waving.
- **Callback / variety:** Warm up sockets in Python (familiar, motivating) — a TCP echo.

### Week 2 — Jul 6 → Jul 12 · PRIMARY: C dynamic memory & data structures
- **Why now:** Builds directly on W1; produces the first canonical exercise.
- **Distill:** EssentialC — malloc/free, structs, pointers-to-pointers.
- **Milestone:** **Doubly-linked list in C** (insert / delete / print), clean. *(Canonical exercise #1)*
- **Callback:** Keep Python sockets warm — UDP variant of the W1 echo.

### Week 3 — Jul 13 → Jul 19 · PRIMARY: x86-64 Assembly I
- **Why now:** C memory + stack (W1–2) is the prerequisite to reading what code *becomes*.
- **Distill:** IntroX86 / asm intro — registers, flags, the stack, the calling convention.
- **Milestone:** Compile a C function and map it to its disassembly, line by line.
- **Callback:** Reason about a linked-list operation from W2 at the register/memory level.

### Week 4 — Jul 20 → Jul 26 · PRIMARY: Networking & sockets in C
- **Why now:** Rotation away from raw asm grind; leverages your Beej knowledge, now with
  real pointer/byte-order rigor from W1–3. Gate-critical.
- **Distill:** Beej callbacks (you've read it) + struct packing / network byte order.
- **Milestone:** **TCP client/server chat in C.** *(Canonical exercise #2, part 1)*
- **Callback:** Daily short asm reading so W3 doesn't cool.

### Week 5 — Jul 27 → Aug 2 · PRIMARY: x86-64 Assembly II
- **Why now:** Return to asm before decay (the interleaving payoff), now deeper.
- **Distill:** Control flow, addressing modes, string instructions, writing routines by hand.
- **Milestone:** A hand-written asm routine, stepped through in GDB.
- **Callback:** Finish the UDP chat (C and/or Python) — *(Canonical exercise #2, complete)*.

### Week 6 — Aug 3 → Aug 9 · PRIMARY: Debugging & the C↔asm bridge
- **Why now:** Ties W1–5 together; GDB fluency is a force-multiplier for everything after.
- **Distill:** GDB cheatsheet, objdump — breakpoints, watchpoints, examining memory/registers.
- **Milestone:** Debug a crashing C program down to the faulting instruction.
- **Callback:** Debug a deliberately broken version of your W2 linked list.

### Week 7 — Aug 10 → Aug 16 · PRIMARY: Python depth for tooling
- **Why now:** Consolidates the Python proficiency target; uses networking from W4–5.
- **Distill:** `bytes` / `struct` / `ctypes`, sockets in Python, scripting patterns for tooling.
- **Milestone:** A small networked or packet utility in Python.
- **Callback:** Keep C + asm reading warm via the spine.

### Week 8 — Aug 17 → Aug 23 · PRIMARY: Linux systems fluency
- **Why now:** Needs C + a process model; bridges toward the course's systems module.
- **Distill:** Processes, syscalls (`strace`), `/proc`, permissions, ELF basics, terminal-only workflow.
- **Milestone:** Build something using raw syscalls, or dissect an ELF header by hand.
- **Callback:** Syscalls at the asm level (the `syscall` instruction) — ties W3/W5 to W8.

### Week 9 — Aug 24 → Aug 30 · PRIMARY: Reverse engineering basics  ⚠️ *gate-dependent*
- **Why now:** Requires asm (W3/W5) + debugging (W6); only now is it actually doable.
- **Distill:** Ghidra + GDB workflow — static and dynamic, recovering C from disassembly.
- **Milestone:** Reverse a small stripped toy binary to equivalent C.
- **⚠️ Flag:** If the gate doesn't test RE, **shrink or cut this week** and redistribute to W3/W5/W6.

### Week 10 — Aug 31 → Sep 6 · PRIMARY: Integration capstone
- **Why now:** Synthesis. Everything rotates in through one build.
- **Milestone:** A capstone fusing C + sockets + asm awareness + debugging, committed.
- **Callback:** All prior domains, exercised via the project.

### Week 11 — Sep 7 → Sep 13 · PRIMARY: Mock gate
- **Why now:** Performance under pressure ≠ knowing the material. Expose the gap now, not on test day.
- **Activities:** Timed drills across C/Python/asm; the two canonical exercises against the clock;
  read disassembly cold; explain-out-loud. Triage weak spots into fresh Hearth cards.
- **Milestone:** A graded self-assessment that names your real gaps.

### Week 12 — Sep 14 → Sep 20 · PRIMARY: Targeted review + polish
- **Why now:** Hammer exactly what W11 exposed. Clean up proof artifacts (READMEs, repo structure).
- **Milestone:** Gaps closed; repo presentable.

### Buffer — Sep 21 → Oct 1
Pure review + FSRS maintenance. No new material. Walk in over-prepared.

---

## Milestone / Proof Checklist

- [ ] W2 — Doubly-linked list in C (canonical #1)
- [ ] W4/W5 — TCP + UDP socket chat, C and Python (canonical #2)
- [ ] W5 — Hand-written asm routine
- [ ] W6 — Debug-to-faulting-instruction writeup
- [ ] W7 — Python networking/packet utility
- [ ] W8 — Raw-syscall tool or ELF dissection
- [ ] W9 — RE: binary → recovered C *(if gate tests RE)*
- [ ] W10 — Integration capstone
- [ ] W11 — Mock-gate self-assessment
