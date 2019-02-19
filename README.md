## Gameplay
At the beginning of a game, each battle program is loaded into memory at a random location, after which each program executes one instruction in turn. The goal of the game is to cause the processes of opposing programs to terminate (which happens if they execute an invalid instruction), leaving the victorious program in sole possession of the machine.

## Constant instruction length and time
Each `ASM` instruction occupies exactly one memory slot and takes exactly one cycle to execute. The rate at which a process executes instructions, however, depends on the number of other processes in the queue, as processing time is shared equally.

## Circular memory
The memory is addressed in units of one instruction. The memory space `(or core)` is of finite size `(here 4096)`, but only relative addressing is used, that is, address 0 always refers to the currently executing instruction, address 1 to the instruction after it, and so on. The maximum address value is set to equal one less than the number of memory locations, and will wrap around if necessary. As a result, there is a one-to-one correspondence between addresses and memory locations, but it is impossible for an ASM program to determine any absolute address. A process that encounters no invalid or jump instructions will continue executing successive instructions endlessly, eventually returning to the instruction where it started.

## Low level multiprocessing
Instead of a single instruction pointer an `ASM` simulator has a process queue for each program containing a variable number of instruction pointers which the simulator cycles through. Each program starts with only one process, but new processes may be added to the queue using the SPL (set priority level) instruction. A process dies when it doesn't executes a `live` instruction on every cycle or performs a division by zero. A program is considered dead when it has no more processes left.

**Core War** was inspired by a self-replicating program called `Creeper` and a subsequent program called `Reaper` that destroyed copies of Creeper. Creeper was created by Bob Thomas at BBN. Dewdney was not aware of the origin of Creeper and Reaper and refers to them as a rumor originating from `Darwin and the worm experiments of Shoch and Hupp`. The 1984 Scientific American article on Core War nevertheless cites the game Darwin, played by Victor A. Vyssotsky, Robert Morris, and Douglas McIlroy at Bell Labs in 1961. The word `"Core"` in the name comes from **magnetic-core memory**, an obsolete random-access memory technology.
