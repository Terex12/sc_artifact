#pragma once
inline void cnn_ukr_float_scatter_6x2v_bfxy_bcxy_cwhf(float *A, float *B, float *C, long long sf_tile, long long *Astride){
__asm__(
"mov %[A], %%rax;"
"mov %[B], %%rbx;"
"mov %[C], %%rcx;"
"mov %[sf_tile], %%rsi;"
"mov %[Astride], %%r8;"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vxorps %%ymm8, %%ymm8, %%ymm8;"
"vxorps %%ymm9, %%ymm9, %%ymm9;"
"vxorps %%ymm10, %%ymm10, %%ymm10;"
"vxorps %%ymm11, %%ymm11, %%ymm11;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"mov 8(%%r8), %%r9;"
"mov 16(%%r8), %%r10;"
"mov 24(%%r8), %%r11;"
"mov 32(%%r8), %%r12;"
"mov 40(%%r8), %%r13;"
"mov 0(%%r8), %%r8;"
"prefetcht0 0(%%rcx);"
"prefetcht0 73984(%%rcx);"
"prefetcht0 147968(%%rcx);"
"prefetcht0 221952(%%rcx);"
"prefetcht0 295936(%%rcx);"
"prefetcht0 369920(%%rcx);"
"prefetcht0 443904(%%rcx);"
"prefetcht0 517888(%%rcx);"
"prefetcht0 591872(%%rcx);"
"prefetcht0 665856(%%rcx);"
"prefetcht0 739840(%%rcx);"
"prefetcht0 813824(%%rcx);"
"prefetcht0 887808(%%rcx);"
"prefetcht0 961792(%%rcx);"
"prefetcht0 1035776(%%rcx);"
"prefetcht0 1109760(%%rcx);"
"test %%rsi, %%rsi;"
"jz .L1002;"
".L1001:"
"prefetcht0 73984(%%rax);"
"prefetcht0 74016(%%rax);"
"prefetcht0 64(%%rbx);"
"vmovaps 0(%%rbx), %%ymm2;"
"vmovaps 32(%%rbx), %%ymm3;"
"vbroadcastss 0(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 0(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 0(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"add $73984, %%rax;"
"add $64, %%rbx;"
"sub $1, %%rsi;"
"jnz .L1001;"
".L1002:"
"vunpcklps %%ymm6, %%ymm4, %%ymm0;"
"vunpckhps %%ymm6, %%ymm4, %%ymm1;"
"vunpcklps %%ymm10, %%ymm8, %%ymm2;"
"vunpckhps %%ymm10, %%ymm8, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm4;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm6;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm8;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm10;"
"vunpcklps %%ymm7, %%ymm5, %%ymm0;"
"vunpckhps %%ymm7, %%ymm5, %%ymm1;"
"vunpcklps %%ymm11, %%ymm9, %%ymm2;"
"vunpckhps %%ymm11, %%ymm9, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm5;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm7;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm9;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm11;"
"vunpcklps %%ymm14, %%ymm12, %%ymm0;"
"vunpckhps %%ymm14, %%ymm12, %%ymm1;"
"vunpcklps %%ymm15, %%ymm13, %%ymm2;"
"vunpckhps %%ymm15, %%ymm13, %%ymm3;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 0(%%rcx), %%xmm12;"
"vmovups 73984(%%rcx), %%xmm13;"
"vmovups 147968(%%rcx), %%xmm14;"
"vmovups 221952(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 73984(%%rcx);"
"vmovups %%xmm8, 147968(%%rcx);"
"vmovups %%xmm10, 221952(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 295936(%%rcx), %%xmm12;"
"vmovups 369920(%%rcx), %%xmm13;"
"vmovups 443904(%%rcx), %%xmm14;"
"vmovups 517888(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 295936(%%rcx);"
"vmovups %%xmm6, 369920(%%rcx);"
"vmovups %%xmm8, 443904(%%rcx);"
"vmovups %%xmm10, 517888(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 591872(%%rcx), %%xmm12;"
"vmovups 665856(%%rcx), %%xmm13;"
"vmovups 739840(%%rcx), %%xmm14;"
"vmovups 813824(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 591872(%%rcx);"
"vmovups %%xmm7, 665856(%%rcx);"
"vmovups %%xmm9, 739840(%%rcx);"
"vmovups %%xmm11, 813824(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 887808(%%rcx), %%xmm12;"
"vmovups 961792(%%rcx), %%xmm13;"
"vmovups 1035776(%%rcx), %%xmm14;"
"vmovups 1109760(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 887808(%%rcx);"
"vmovups %%xmm7, 961792(%%rcx);"
"vmovups %%xmm9, 1035776(%%rcx);"
"vmovups %%xmm11, 1109760(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 16(%%rcx), %%xmm4, %%xmm4;"
"vmovhps 74000(%%rcx), %%xmm4, %%xmm4;"
"vmovlps 147984(%%rcx), %%xmm5, %%xmm5;"
"vmovhps 221968(%%rcx), %%xmm5, %%xmm5;"
"vmovlps 591888(%%rcx), %%xmm6, %%xmm6;"
"vmovhps 665872(%%rcx), %%xmm6, %%xmm6;"
"vmovlps 739856(%%rcx), %%xmm7, %%xmm7;"
"vmovhps 813840(%%rcx), %%xmm7, %%xmm7;"
"vaddps %%ymm0, %%ymm4, %%ymm4;"
"vaddps %%ymm1, %%ymm5, %%ymm5;"
"vaddps %%ymm2, %%ymm6, %%ymm6;"
"vaddps %%ymm3, %%ymm7, %%ymm7;"
"vmovlps %%xmm4, 16(%%rcx);"
"vmovhps %%xmm4, 74000(%%rcx);"
"vmovlps %%xmm5, 147984(%%rcx);"
"vmovhps %%xmm5, 221968(%%rcx);"
"vmovlps %%xmm6, 591888(%%rcx);"
"vmovhps %%xmm6, 665872(%%rcx);"
"vmovlps %%xmm7, 739856(%%rcx);"
"vmovhps %%xmm7, 813840(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 295952(%%rcx), %%xmm12, %%xmm12;"
"vmovhps 369936(%%rcx), %%xmm12, %%xmm12;"
"vmovlps 443920(%%rcx), %%xmm13, %%xmm13;"
"vmovhps 517904(%%rcx), %%xmm13, %%xmm13;"
"vmovlps 887824(%%rcx), %%xmm14, %%xmm14;"
"vmovhps 961808(%%rcx), %%xmm14, %%xmm14;"
"vmovlps 1035792(%%rcx), %%xmm15, %%xmm15;"
"vmovhps 1109776(%%rcx), %%xmm15, %%xmm15;"
"vextractf128 $1, %%ymm0, %%xmm8;"
"vextractf128 $1, %%ymm1, %%xmm9;"
"vextractf128 $1, %%ymm2, %%xmm10;"
"vextractf128 $1, %%ymm3, %%xmm11;"
"vaddps %%ymm8, %%ymm12, %%ymm12;"
"vaddps %%ymm9, %%ymm13, %%ymm13;"
"vaddps %%ymm10, %%ymm14, %%ymm14;"
"vaddps %%ymm11, %%ymm15, %%ymm15;"
"vmovlps %%xmm12, 295952(%%rcx);"
"vmovhps %%xmm12, 369936(%%rcx);"
"vmovlps %%xmm13, 443920(%%rcx);"
"vmovhps %%xmm13, 517904(%%rcx);"
"vmovlps %%xmm14, 887824(%%rcx);"
"vmovhps %%xmm14, 961808(%%rcx);"
"vmovlps %%xmm15, 1035792(%%rcx);"
"vmovhps %%xmm15, 1109776(%%rcx);"
:
: [A] "m" (A),
 [B] "m" (B),
 [C] "m" (C),
 [sf_tile] "m" (sf_tile),
 [Astride] "m" (Astride)
: "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "ymm0", "ymm1", "ymm2", "ymm3", "ymm4", "ymm5", "ymm6", "ymm7", "ymm8", "ymm9", "ymm10", "ymm11", "ymm12", "ymm13", "ymm14", "ymm15");
}


















inline void cnn_ukr_float_scatter_4x2v_bfxy_bcxy_cwhf(float *A, float *B, float *C, long long sf_tile, long long *Astride){
__asm__(
"mov %[A], %%rax;"
"mov %[B], %%rbx;"
"mov %[C], %%rcx;"
"mov %[sf_tile], %%rsi;"
"mov %[Astride], %%r8;"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vxorps %%ymm8, %%ymm8, %%ymm8;"
"vxorps %%ymm9, %%ymm9, %%ymm9;"
"vxorps %%ymm10, %%ymm10, %%ymm10;"
"vxorps %%ymm11, %%ymm11, %%ymm11;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"mov 8(%%r8), %%r9;"
"mov 16(%%r8), %%r10;"
"mov 24(%%r8), %%r11;"
"mov 32(%%r8), %%r12;"
"mov 40(%%r8), %%r13;"
"mov 0(%%r8), %%r8;"
"prefetcht0 0(%%rcx);"
"prefetcht0 73984(%%rcx);"
"prefetcht0 147968(%%rcx);"
"prefetcht0 221952(%%rcx);"
"prefetcht0 295936(%%rcx);"
"prefetcht0 369920(%%rcx);"
"prefetcht0 443904(%%rcx);"
"prefetcht0 517888(%%rcx);"
"prefetcht0 591872(%%rcx);"
"prefetcht0 665856(%%rcx);"
"prefetcht0 739840(%%rcx);"
"prefetcht0 813824(%%rcx);"
"prefetcht0 887808(%%rcx);"
"prefetcht0 961792(%%rcx);"
"prefetcht0 1035776(%%rcx);"
"prefetcht0 1109760(%%rcx);"
"test %%rsi, %%rsi;"
"jz .Lpart1002;"
".Lpart1001:"
"prefetcht0 73984(%%rax);"
"prefetcht0 74016(%%rax);"
"prefetcht0 64(%%rbx);"
"vmovaps 0(%%rbx), %%ymm2;"
"vmovaps 32(%%rbx), %%ymm3;"
"vbroadcastss 0(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 0(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 0(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 0(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 0(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"add $73984, %%rax;"
"add $64, %%rbx;"
"sub $1, %%rsi;"
"jnz .Lpart1001;"
".Lpart1002:"
"vunpcklps %%ymm6, %%ymm4, %%ymm0;"
"vunpckhps %%ymm6, %%ymm4, %%ymm1;"
"vunpcklps %%ymm10, %%ymm8, %%ymm2;"
"vunpckhps %%ymm10, %%ymm8, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm4;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm6;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm8;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm10;"
"vunpcklps %%ymm7, %%ymm5, %%ymm0;"
"vunpckhps %%ymm7, %%ymm5, %%ymm1;"
"vunpcklps %%ymm11, %%ymm9, %%ymm2;"
"vunpckhps %%ymm11, %%ymm9, %%ymm3;"
"vshufps $68, %%ymm2, %%ymm0, %%ymm5;"
"vshufps $238, %%ymm2, %%ymm0, %%ymm7;"
"vshufps $68, %%ymm3, %%ymm1, %%ymm9;"
"vshufps $238, %%ymm3, %%ymm1, %%ymm11;"
"vunpcklps %%ymm14, %%ymm12, %%ymm0;"
"vunpckhps %%ymm14, %%ymm12, %%ymm1;"
"vunpcklps %%ymm15, %%ymm13, %%ymm2;"
"vunpckhps %%ymm15, %%ymm13, %%ymm3;"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 0(%%rcx), %%xmm12;"
"vmovups 73984(%%rcx), %%xmm13;"
"vmovups 147968(%%rcx), %%xmm14;"
"vmovups 221952(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 73984(%%rcx);"
"vmovups %%xmm8, 147968(%%rcx);"
"vmovups %%xmm10, 221952(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 295936(%%rcx), %%xmm12;"
"vmovups 369920(%%rcx), %%xmm13;"
"vmovups 443904(%%rcx), %%xmm14;"
"vmovups 517888(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 295936(%%rcx);"
"vmovups %%xmm6, 369920(%%rcx);"
"vmovups %%xmm8, 443904(%%rcx);"
"vmovups %%xmm10, 517888(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 591872(%%rcx), %%xmm12;"
"vmovups 665856(%%rcx), %%xmm13;"
"vmovups 739840(%%rcx), %%xmm14;"
"vmovups 813824(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 591872(%%rcx);"
"vmovups %%xmm7, 665856(%%rcx);"
"vmovups %%xmm9, 739840(%%rcx);"
"vmovups %%xmm11, 813824(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 887808(%%rcx), %%xmm12;"
"vmovups 961792(%%rcx), %%xmm13;"
"vmovups 1035776(%%rcx), %%xmm14;"
"vmovups 1109760(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 887808(%%rcx);"
"vmovups %%xmm7, 961792(%%rcx);"
"vmovups %%xmm9, 1035776(%%rcx);"
"vmovups %%xmm11, 1109760(%%rcx);"
/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 16(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovhps 74000(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovlps 147984(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovhps 221968(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovlps 591888(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovhps 665872(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovlps 739856(%%rcx), %%xmm7, %%xmm7;" */
/* "vmovhps 813840(%%rcx), %%xmm7, %%xmm7;" */
/* "vaddps %%ymm0, %%ymm4, %%ymm4;" */
/* "vaddps %%ymm1, %%ymm5, %%ymm5;" */
/* "vaddps %%ymm2, %%ymm6, %%ymm6;" */
/* "vaddps %%ymm3, %%ymm7, %%ymm7;" */
/* "vmovlps %%xmm4, 16(%%rcx);" */
/* "vmovhps %%xmm4, 74000(%%rcx);" */
/* "vmovlps %%xmm5, 147984(%%rcx);" */
/* "vmovhps %%xmm5, 221968(%%rcx);" */
/* "vmovlps %%xmm6, 591888(%%rcx);" */
/* "vmovhps %%xmm6, 665872(%%rcx);" */
/* "vmovlps %%xmm7, 739856(%%rcx);" */
/* "vmovhps %%xmm7, 813840(%%rcx);" */
/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 295952(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovhps 369936(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovlps 443920(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovhps 517904(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovlps 887824(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovhps 961808(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovlps 1035792(%%rcx), %%xmm15, %%xmm15;" */
/* "vmovhps 1109776(%%rcx), %%xmm15, %%xmm15;" */
/* "vextractf128 $1, %%ymm0, %%xmm8;" */
/* "vextractf128 $1, %%ymm1, %%xmm9;" */
/* "vextractf128 $1, %%ymm2, %%xmm10;" */
/* "vextractf128 $1, %%ymm3, %%xmm11;" */
/* "vaddps %%ymm8, %%ymm12, %%ymm12;" */
/* "vaddps %%ymm9, %%ymm13, %%ymm13;" */
/* "vaddps %%ymm10, %%ymm14, %%ymm14;" */
/* "vaddps %%ymm11, %%ymm15, %%ymm15;" */
/* "vmovlps %%xmm12, 295952(%%rcx);" */
/* "vmovhps %%xmm12, 369936(%%rcx);" */
/* "vmovlps %%xmm13, 443920(%%rcx);" */
/* "vmovhps %%xmm13, 517904(%%rcx);" */
/* "vmovlps %%xmm14, 887824(%%rcx);" */
/* "vmovhps %%xmm14, 961808(%%rcx);" */
/* "vmovlps %%xmm15, 1035792(%%rcx);" */
/* "vmovhps %%xmm15, 1109776(%%rcx);" */
:
: [A] "m" (A),
 [B] "m" (B),
 [C] "m" (C),
 [sf_tile] "m" (sf_tile),
 [Astride] "m" (Astride)
: "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "ymm0", "ymm1", "ymm2", "ymm3", "ymm4", "ymm5", "ymm6", "ymm7", "ymm8", "ymm9", "ymm10", "ymm11", "ymm12", "ymm13", "ymm14", "ymm15");
}
