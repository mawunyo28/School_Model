#ifndef SCHOOL_GLOBAL_H
#define SCHOOL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SCHOOL_LIBRARY)
#  define SCHOOL_EXPORT Q_DECL_EXPORT
#else
#  define SCHOOL_EXPORT Q_DECL_IMPORT
#endif

#endif // SCHOOL_GLOBAL_H
