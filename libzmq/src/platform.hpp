#ifndef __ZMQ_PLATFORM_HPP_INCLUDED__
#define __ZMQ_PLATFORM_HPP_INCLUDED__

#ifdef _AIX
#define ZMQ_HAVE_AIX
#endif

#if defined __ANDROID__
#define ZMQ_HAVE_ANDROID
#endif

#if defined __CYGWIN__
#define ZMQ_HAVE_CYGWIN
#endif

#if defined __MINGW32__
#define ZMQ_HAVE_MINGW32
#endif

#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
#define ZMQ_HAVE_FREEBSD
#endif

#if defined(__DragonFly__)
#define ZMQ_HAVE_FREEBSD
#define ZMQ_HAVE_DRAGONFLY
#endif

#if defined __hpux
#define ZMQ_HAVE_HPUX
#endif

#if defined __linux__
#define ZMQ_HAVE_LINUX
#endif

#if defined __NetBSD__
#define ZMQ_HAVE_NETBSD
#endif

#if defined __OpenBSD__
#define ZMQ_HAVE_OPENBSD
#endif

// TODO better move OS-specific defines to the automake files, and check for
// availability of IPC with an explicit test there
#if defined __VMS
#define ZMQ_HAVE_OPENVMS
#undef ZMQ_HAVE_IPC
#endif

#if defined __APPLE__
#define ZMQ_HAVE_OSX
#endif

#if defined __QNXNTO__
#define ZMQ_HAVE_QNXNTO
#endif

#if defined(sun) || defined(__sun)
#define ZMQ_HAVE_SOLARIS
#endif

#endif
