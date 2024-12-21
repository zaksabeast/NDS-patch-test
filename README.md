# NDS patch sandbox

This is a sandbox for testing nds patches.

## Building

Tools needed:

- [armips](https://github.com/Kingcom/armips)
- [dsrom](https://github.com/AetiasHax/ds-rom)
- [devkitARM](https://devkitpro.org/wiki/devkitARM)

To build:

1. Copy a `diamond.nds` file to the repo directory
2. Run `make extract` to get the nds files
3. Run `make build` to build the patches (do this for any code changes)
4. Run `out/diamond.nds` in an emulator
