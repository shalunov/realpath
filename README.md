realpath
========

realpath(1) is a command-line wrapper for realpath(3)

realpath resolves any possible symlinks and relative pathnames
and gives the final completely resolved absolute path.

realpath is idempotent.

Example:
--------

    fluffy:realpath shalunov$ make
    cc -O3    realpath.c   -o realpath
    fluffy:realpath shalunov$ which tclsh
    /usr/bin/tclsh
    fluffy:realpath shalunov$ ls -l `which tclsh`
    lrwxr-xr-x  1 root  wheel  8 Jul 11  2011 /usr/bin/tclsh -> tclsh8.5
    fluffy:realpath shalunov$ readlink `which tclsh`
    tclsh8.5
    fluffy:realpath shalunov$ ./realpath `which tclsh`
    /System/Library/Frameworks/Tcl.framework/Versions/8.5/tclsh8.5
