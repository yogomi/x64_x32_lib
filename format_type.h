// Copyright 2014 Makoto Yano

#ifndef FORMAT_TYPE_H_
#define FORMAT_TYPE_H_

#ifdef _LP64
#define __PRIS_PREFIX "z"
#else
#define __PRIS_PREFIX
#endif

// これらのマクロを32ビットと64ビットどちらでも正しく動かすには、
// printf書式文字列において % の直後に用いること。
// size_t size = records.size();
// printf("%"PRIuS"\n", size);

#define PRIdS __PRIS_PREFIX "d"
#define PRIxS __PRIS_PREFIX "x"
#define PRIuS __PRIS_PREFIX "u"
#define PRIXS __PRIS_PREFIX "X"
#define PRIoS __PRIS_PREFIX "o"

#endif  // FORMAT_TYPE_H_
