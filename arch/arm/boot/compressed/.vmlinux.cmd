cmd_arch/arm/boot/compressed/vmlinux := /home/AndroPlus/android-toolchain-eabi-linaro-4.6-2011.10/bin/arm-eabi-ld -EL    --defsym _kernel_bss_size=2265388 --defsym zreladdr=0x00008000 -p --no-undefined -X -T arch/arm/boot/compressed/vmlinux.lds arch/arm/boot/compressed/head.o arch/arm/boot/compressed/piggy.lzo.o arch/arm/boot/compressed/misc.o arch/arm/boot/compressed/decompress.o arch/arm/boot/compressed/string.o arch/arm/boot/compressed/lib1funcs.o arch/arm/boot/compressed/ashldi3.o -o arch/arm/boot/compressed/vmlinux 
