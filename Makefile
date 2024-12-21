.PHONY: extract build clean

extract:
	@dsrom extract -r diamond.nds -o nds_extract
	@cp nds_extract/arm9/arm9.bin nds_extract/arm9/arm9.orig.bin

build:
	@mkdir -p out build
	@arm-none-eabi-gcc -mthumb -mcpu=arm9e -c src/vblank_hook.c -o build/vblank_hook.o
	@armips -root src arm9.s
	@dsrom build -c nds_extract/config.yaml -o out/diamond.nds

clean:
	@rm -r nds_extract out build
