#ifndef COMMON_H
#define COMMON_H

#include <QVariant>

#define MSGPACK_MAJOR 0
#define MSGPACK_MINOR 0
#define MSGPACK_VERSION 0

namespace MsgPack {
/**
 * pack some variant to byte array data
 * when write == false only calculates and returns size
 * when write == true writes bytes to data, and returns the same size
 * return type size
 */
typedef quint32 (*pack_user_f)(const QVariant &variant, QByteArray &data, bool write);

typedef QVariant (*unpack_user_f)(const QByteArray &data);

QString version();
}

#endif // COMMON_H
