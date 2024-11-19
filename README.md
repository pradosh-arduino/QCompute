### Makefile targets

| Command | Action |
|---|---|
| `make all` | Compiles the kernel and generates a bootable ISO image. |
| `make all-hdd` | Compiles the kernel and generates a raw image for USB/HDD. |
| `make run` | Compiles the kernel, generates a bootable ISO, and runs it with QEMU. |
| `make run-hdd` | Compiles the kernel, generates a raw HDD image, and runs it with QEMU. |
| `make run-uefi` | Compiles the kernel, generates a bootable ISO, and runs it with QEMU using UEFI firmware. |
| `make run-hdd-uefi` | Compiles the kernel, generates a raw HDD image, and runs it with QEMU using UEFI firmware. |
