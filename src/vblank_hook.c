typedef signed char           i8;
typedef char                  u8;
typedef short                 i16;
typedef unsigned short        u16;
typedef int                   i32;
typedef unsigned int          u32;

// Taken from Pret's pokediamond project: https://github.com/pret/pokediamond/blob/14dee78ddc2ab5d9daab31f9465105d43a2ea6f6/include/main.h#L32-L67
struct Main {
    void (*vBlankIntr)(void *);
    void *vBlankIntrArg;
    void (*hBlankIntr)(void *);
    void *hBlankIntrArg;
    i32 unk10;
    i32 unk14;
    void *unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
    i32 unk28;
    u32 unk2C;
    i32 unk30;
    u32 buttonMode;
    u32 heldKeysRaw;
    u32 newKeysRaw;
    u32 newAndRepeatedKeysRaw;
    u32 heldKeys;
    u32 newKeys;
    u32 newAndRepeatedKeys;
    i32 keyRepeatCounter;
    i32 keyRepeatContinueDelay;
    i32 keyRepeatStartDelay;
    u16 touchX;
    u16 touchY;
    u16 touchNew;
    u16 touchHeld;
    u8 touchpadReadAuto;
    u8 screensFlipped;
    u8 gbaCartId;
    u8 unk67;
    u8 softResetDisabled;
    u8 padding_69[3]; // nice
    i32 unk6C;
};

struct Main* gSystem = (struct Main*)0x21c48b8;

void vblank_hook() {
  // Run code here
  // Or comment the lines below out, get past the title screen, and watch what happens
  if (gSystem->vBlankIntr != 0) {
    gSystem->vBlankIntr(gSystem->vBlankIntrArg);
  }
}
