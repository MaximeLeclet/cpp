with import<nixpkgs> {};

stdenv.mkDerivation {

  name = "L3_CPP";

  buildInputs = [
    boost
    cmake
    cppcheck
    cpputest
    eigen
    gdb
    gede
    glog
    gnome2.gtkmm
    gnome3.gtkmm
    gnome3.nemiver
    gnuplot
    imagemagick
    pkgconfig
    poco
    sqlitebrowser
    valgrind
  ];

}

