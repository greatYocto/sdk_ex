obj-m += hello_kermod.o

all:
	make -C ${SDKTARGETSYSROOT}/usr/src/kernel M=$(PWD) modules

clean:
	make -C ${SDKTARGETSYSROOT}/usr/src/kernel M=$(PWD) clean

