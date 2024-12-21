.nds
.thumb
.open "../nds_extract/arm9/arm9.orig.bin", "../nds_extract/arm9/arm9.bin", 0x2000000

.org 0x2000dba
  bl vblank_hook

.org 0x2106f5c
.area 0x44
  .importobj "../build/vblank_hook.o"
.endarea

.close
