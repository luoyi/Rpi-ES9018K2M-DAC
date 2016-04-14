pkgname=ALASabreBerry
pkgver=4.4.7
pkgrel=1
pkgdesc="ES9018Q2C Kernel Modules For Raspberry"
arch=('armv6h' 'armv7h')
license=('GPL')
depends=('linux-raspberrypi')
makedepends=('gcc' 'linux-raspberrypi-headers')
source=("git+https://github.com/SatoruKawase/SabreBerry32.git"
		"Makefile.archlinux.patch"
       )
md5sums=('SKIP'
		 'd6665658780b0a75aaf2ddc376f81083'
        )


prepare() {
	cd "${srcdir}/SabreBerry32"
	echo $(pwd)
    patch -N -i ../Makefile.archlinux.patch
	make -f Makefile.archLinux clean
}

build() {
	cd "${srcdir}/SabreBerry32"
	echo $(pwd)
	make -f Makefile.archLinux
	make -f Makefile.archLinux dtbs
}

package() {
	cd "${srcdir}/SabreBerry32"
	echo $(pwd)
	make -f Makefile.archLinux DESTDIR=${pkgdir} modules_install
	make -f Makefile.archLinux DESTDIR=${pkgdir} install_dtb
}
