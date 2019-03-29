/*
 00002  * Copyright (c) 2000 Jeroen Ruigrok van der Werven <asmodai@FreeBSD.org>
 00003  * All rights reserved.
 00004  *
 00005  * Redistribution and use in source and binary forms, with or without
 00006  * modification, are permitted provided that the following conditions
 00007  * are met:
 00008  * 1. Redistributions of source code must retain the above copyright
 00009  *    notice, this list of conditions and the following disclaimer.
 00010  * 2. Redistributions in binary form must reproduce the above copyright
 00011  *    notice, this list of conditions and the following disclaimer in the
 00012  *    documentation and/or other materials provided with the distribution.
 00013  *
 00014  * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 00015  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 00016  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 00017  * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 00018  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 00019  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 00020  * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 00021  * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 00022  * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 00023  * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 00024  * SUCH DAMAGE.
 00025  *
 00026  * $FreeBSD: src/include/stdbool.h,v 1.6 2002/08/16 07:33:14 alfred Exp $
 00027  */

#ifndef _STDBOOL_H_
#define _STDBOOL_H_

#define __bool_true_false_are_defined   1

#ifndef __cplusplus

#define false   0
#define true    1

#define bool    _Bool
#if __STDC_VERSION__ < 199901L && __GNUC__ < 3
typedef int _Bool;
#endif

#endif /* !__cplusplus */

#endif /* !_STDBOOL_H_ */
