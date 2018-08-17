/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Android, arm64, clang */
/* Command for C compiler:
   clang -c  -w  -I/data/data/com.termux/files/usr/lib/nim/lib -o /data/data/com.termux/files/home/termux-taskwarrior/nimcache/stdlib_algorithm.o /data/data/com.termux/files/home/termux-taskwarrior/nimcache/stdlib_algorithm.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, reverse_XQiN4wExsmIg8NFBmG3ObA)(NimStringDesc** a, NI aLen_0, NI first, NI last);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NI, star__mciSqxUij8SrsZknIQqvwwalgorithm)(NI x, tyEnum_SortOrder_8iBc6wlNqBa9cju9cUAhUAxA order) {
	NI result;
	NI y;
	NI TM_JdC9c6SaUkvO1XjYuWP1JWQ_2;
	NI TM_JdC9c6SaUkvO1XjYuWP1JWQ_3;
	nimfr_("*", "algorithm.nim");
	result = (NI)0;
	nimln_(24, "algorithm.nim");
	TM_JdC9c6SaUkvO1XjYuWP1JWQ_2 = subInt(order, ((NI) 1));
	y = (NI)(TM_JdC9c6SaUkvO1XjYuWP1JWQ_2);
	nimln_(25, "algorithm.nim");
	TM_JdC9c6SaUkvO1XjYuWP1JWQ_3 = subInt((NI)(x ^ y), y);
	result = (NI)(TM_JdC9c6SaUkvO1XjYuWP1JWQ_3);
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, reverse_XQiN4wExsmIg8NFBmG3ObA)(NimStringDesc** a, NI aLen_0, NI first, NI last) {
	NI x;
	NI y;
	nimfr_("reverse", "algorithm.nim");
	nimln_(40, "algorithm.nim");
	x = first;
	nimln_(41, "algorithm.nim");
	y = last;
	{
		nimln_(42, "algorithm.nim");
		while (1) {
			NimStringDesc* T3_;
			NI TM_JdC9c6SaUkvO1XjYuWP1JWQ_4;
			NI TM_JdC9c6SaUkvO1XjYuWP1JWQ_5;
			if (!(((NI) (x)) < ((NI) (y)))) goto LA2;
			nimln_(43, "algorithm.nim");
			T3_ = (NimStringDesc*)0;
			if ((NU)(x) >= (NU)(aLen_0)) raiseIndexError();
			if ((NU)(y) >= (NU)(aLen_0)) raiseIndexError();
			T3_ = a[x];
			unsureAsgnRef((void**) (&a[x]), a[y]);
			unsureAsgnRef((void**) (&a[y]), T3_);
			nimln_(44, "algorithm.nim");
			TM_JdC9c6SaUkvO1XjYuWP1JWQ_4 = subInt(y, ((NI) 1));
			if (TM_JdC9c6SaUkvO1XjYuWP1JWQ_4 < 0 || TM_JdC9c6SaUkvO1XjYuWP1JWQ_4 > IL64(9223372036854775807)) raiseOverflow();
			y = (NI)(TM_JdC9c6SaUkvO1XjYuWP1JWQ_4);
			nimln_(45, "algorithm.nim");
			TM_JdC9c6SaUkvO1XjYuWP1JWQ_5 = addInt(x, ((NI) 1));
			if (TM_JdC9c6SaUkvO1XjYuWP1JWQ_5 < 0 || TM_JdC9c6SaUkvO1XjYuWP1JWQ_5 > IL64(9223372036854775807)) raiseOverflow();
			x = (NI)(TM_JdC9c6SaUkvO1XjYuWP1JWQ_5);
		} LA2: ;
	}
	popFrame();
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, reverse_LoixoqZetR6FfezoPedx8w)(NimStringDesc** a, NI aLen_0) {
	nimfr_("reverse", "algorithm.nim");
	nimln_(49, "algorithm.nim");
	reverse_XQiN4wExsmIg8NFBmG3ObA(a, aLen_0, ((NI) 0), ((NI)chckRange(((((NI) 0) >= (aLen_0-1)) ? ((NI) 0) : (aLen_0-1)), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void) {
	nimfr_("algorithm", "algorithm.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void) {
}

