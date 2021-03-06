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
"prefetcht0 4624(%%rcx);"
"prefetcht0 9248(%%rcx);"
"prefetcht0 13872(%%rcx);"
"prefetcht0 18496(%%rcx);"
"prefetcht0 23120(%%rcx);"
"prefetcht0 27744(%%rcx);"
"prefetcht0 32368(%%rcx);"
"prefetcht0 36992(%%rcx);"
"prefetcht0 41616(%%rcx);"
"prefetcht0 46240(%%rcx);"
"prefetcht0 50864(%%rcx);"
"prefetcht0 55488(%%rcx);"
"prefetcht0 60112(%%rcx);"
"prefetcht0 64736(%%rcx);"
"prefetcht0 69360(%%rcx);"
"test %%rsi, %%rsi;"
"jz .L1002;"
".L1001:"
"prefetcht0 5184(%%rax);"
"prefetcht0 5216(%%rax);"
"prefetcht0 576(%%rbx);"
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

"prefetcht0 640(%%rbx);"
"vmovaps 64(%%rbx), %%ymm2;"
"vmovaps 96(%%rbx), %%ymm3;"
"vbroadcastss 4(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 4(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 4(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 704(%%rbx);"
"vmovaps 128(%%rbx), %%ymm2;"
"vmovaps 160(%%rbx), %%ymm3;"
"vbroadcastss 8(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 8(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 8(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 5328(%%rax);"
"prefetcht0 5360(%%rax);"
"prefetcht0 768(%%rbx);"
"vmovaps 192(%%rbx), %%ymm2;"
"vmovaps 224(%%rbx), %%ymm3;"
"vbroadcastss 144(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 144(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 144(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 144(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 144(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 144(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 832(%%rbx);"
"vmovaps 256(%%rbx), %%ymm2;"
"vmovaps 288(%%rbx), %%ymm3;"
"vbroadcastss 148(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 148(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 148(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 148(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 148(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 148(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 896(%%rbx);"
"vmovaps 320(%%rbx), %%ymm2;"
"vmovaps 352(%%rbx), %%ymm3;"
"vbroadcastss 152(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 152(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 152(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 152(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 152(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 152(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 5472(%%rax);"
"prefetcht0 5504(%%rax);"
"prefetcht0 960(%%rbx);"
"vmovaps 384(%%rbx), %%ymm2;"
"vmovaps 416(%%rbx), %%ymm3;"
"vbroadcastss 288(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 288(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 288(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 288(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 288(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 288(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 1024(%%rbx);"
"vmovaps 448(%%rbx), %%ymm2;"
"vmovaps 480(%%rbx), %%ymm3;"
"vbroadcastss 292(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 292(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 292(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 292(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 292(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 292(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"prefetcht0 1088(%%rbx);"
"vmovaps 512(%%rbx), %%ymm2;"
"vmovaps 544(%%rbx), %%ymm3;"
"vbroadcastss 296(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 296(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 296(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 296(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
"vbroadcastss 296(%%rax,%%r12,4), %%ymm0;"
"vbroadcastss 296(%%rax,%%r13,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm12;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm13;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm14;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm15;"

"add $5184, %%rax;"
"add $576, %%rbx;"
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
"vmovups 4624(%%rcx), %%xmm13;"
"vmovups 9248(%%rcx), %%xmm14;"
"vmovups 13872(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 4624(%%rcx);"
"vmovups %%xmm8, 9248(%%rcx);"
"vmovups %%xmm10, 13872(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 18496(%%rcx), %%xmm12;"
"vmovups 23120(%%rcx), %%xmm13;"
"vmovups 27744(%%rcx), %%xmm14;"
"vmovups 32368(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 18496(%%rcx);"
"vmovups %%xmm6, 23120(%%rcx);"
"vmovups %%xmm8, 27744(%%rcx);"
"vmovups %%xmm10, 32368(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 36992(%%rcx), %%xmm12;"
"vmovups 41616(%%rcx), %%xmm13;"
"vmovups 46240(%%rcx), %%xmm14;"
"vmovups 50864(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 36992(%%rcx);"
"vmovups %%xmm7, 41616(%%rcx);"
"vmovups %%xmm9, 46240(%%rcx);"
"vmovups %%xmm11, 50864(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 55488(%%rcx), %%xmm12;"
"vmovups 60112(%%rcx), %%xmm13;"
"vmovups 64736(%%rcx), %%xmm14;"
"vmovups 69360(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 55488(%%rcx);"
"vmovups %%xmm7, 60112(%%rcx);"
"vmovups %%xmm9, 64736(%%rcx);"
"vmovups %%xmm11, 69360(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 16(%%rcx), %%xmm4, %%xmm4;"
"vmovhps 4640(%%rcx), %%xmm4, %%xmm4;"
"vmovlps 9264(%%rcx), %%xmm5, %%xmm5;"
"vmovhps 13888(%%rcx), %%xmm5, %%xmm5;"
"vmovlps 37008(%%rcx), %%xmm6, %%xmm6;"
"vmovhps 41632(%%rcx), %%xmm6, %%xmm6;"
"vmovlps 46256(%%rcx), %%xmm7, %%xmm7;"
"vmovhps 50880(%%rcx), %%xmm7, %%xmm7;"
"vaddps %%ymm0, %%ymm4, %%ymm4;"
"vaddps %%ymm1, %%ymm5, %%ymm5;"
"vaddps %%ymm2, %%ymm6, %%ymm6;"
"vaddps %%ymm3, %%ymm7, %%ymm7;"
"vmovlps %%xmm4, 16(%%rcx);"
"vmovhps %%xmm4, 4640(%%rcx);"
"vmovlps %%xmm5, 9264(%%rcx);"
"vmovhps %%xmm5, 13888(%%rcx);"
"vmovlps %%xmm6, 37008(%%rcx);"
"vmovhps %%xmm6, 41632(%%rcx);"
"vmovlps %%xmm7, 46256(%%rcx);"
"vmovhps %%xmm7, 50880(%%rcx);"
"vxorps %%ymm4, %%ymm4, %%ymm4;"
"vxorps %%ymm5, %%ymm5, %%ymm5;"
"vxorps %%ymm6, %%ymm6, %%ymm6;"
"vxorps %%ymm7, %%ymm7, %%ymm7;"
"vmovlps 18512(%%rcx), %%xmm12, %%xmm12;"
"vmovhps 23136(%%rcx), %%xmm12, %%xmm12;"
"vmovlps 27760(%%rcx), %%xmm13, %%xmm13;"
"vmovhps 32384(%%rcx), %%xmm13, %%xmm13;"
"vmovlps 55504(%%rcx), %%xmm14, %%xmm14;"
"vmovhps 60128(%%rcx), %%xmm14, %%xmm14;"
"vmovlps 64752(%%rcx), %%xmm15, %%xmm15;"
"vmovhps 69376(%%rcx), %%xmm15, %%xmm15;"
"vextractf128 $1, %%ymm0, %%xmm8;"
"vextractf128 $1, %%ymm1, %%xmm9;"
"vextractf128 $1, %%ymm2, %%xmm10;"
"vextractf128 $1, %%ymm3, %%xmm11;"
"vaddps %%ymm8, %%ymm12, %%ymm12;"
"vaddps %%ymm9, %%ymm13, %%ymm13;"
"vaddps %%ymm10, %%ymm14, %%ymm14;"
"vaddps %%ymm11, %%ymm15, %%ymm15;"
"vmovlps %%xmm12, 18512(%%rcx);"
"vmovhps %%xmm12, 23136(%%rcx);"
"vmovlps %%xmm13, 27760(%%rcx);"
"vmovhps %%xmm13, 32384(%%rcx);"
"vmovlps %%xmm14, 55504(%%rcx);"
"vmovhps %%xmm14, 60128(%%rcx);"
"vmovlps %%xmm15, 64752(%%rcx);"
"vmovhps %%xmm15, 69376(%%rcx);"
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
"prefetcht0 4624(%%rcx);"
"prefetcht0 9248(%%rcx);"
"prefetcht0 13872(%%rcx);"
"prefetcht0 18496(%%rcx);"
"prefetcht0 23120(%%rcx);"
"prefetcht0 27744(%%rcx);"
"prefetcht0 32368(%%rcx);"
"prefetcht0 36992(%%rcx);"
"prefetcht0 41616(%%rcx);"
"prefetcht0 46240(%%rcx);"
"prefetcht0 50864(%%rcx);"
"prefetcht0 55488(%%rcx);"
"prefetcht0 60112(%%rcx);"
"prefetcht0 64736(%%rcx);"
"prefetcht0 69360(%%rcx);"
"test %%rsi, %%rsi;"
"jz .Lpart1002;"
".Lpart1001:"
"prefetcht0 5184(%%rax);"
"prefetcht0 5216(%%rax);"
"prefetcht0 576(%%rbx);"
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

"prefetcht0 640(%%rbx);"
"vmovaps 64(%%rbx), %%ymm2;"
"vmovaps 96(%%rbx), %%ymm3;"
"vbroadcastss 4(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 4(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 4(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 4(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 4(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 704(%%rbx);"
"vmovaps 128(%%rbx), %%ymm2;"
"vmovaps 160(%%rbx), %%ymm3;"
"vbroadcastss 8(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 8(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 8(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 8(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 8(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 5328(%%rax);"
"prefetcht0 5360(%%rax);"
"prefetcht0 768(%%rbx);"
"vmovaps 192(%%rbx), %%ymm2;"
"vmovaps 224(%%rbx), %%ymm3;"
"vbroadcastss 144(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 144(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 144(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 144(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 144(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 144(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 832(%%rbx);"
"vmovaps 256(%%rbx), %%ymm2;"
"vmovaps 288(%%rbx), %%ymm3;"
"vbroadcastss 148(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 148(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 148(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 148(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 148(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 148(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 896(%%rbx);"
"vmovaps 320(%%rbx), %%ymm2;"
"vmovaps 352(%%rbx), %%ymm3;"
"vbroadcastss 152(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 152(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 152(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 152(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 152(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 152(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 5472(%%rax);"
"prefetcht0 5504(%%rax);"
"prefetcht0 960(%%rbx);"
"vmovaps 384(%%rbx), %%ymm2;"
"vmovaps 416(%%rbx), %%ymm3;"
"vbroadcastss 288(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 288(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 288(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 288(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 288(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 288(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 1024(%%rbx);"
"vmovaps 448(%%rbx), %%ymm2;"
"vmovaps 480(%%rbx), %%ymm3;"
"vbroadcastss 292(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 292(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 292(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 292(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 292(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 292(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"prefetcht0 1088(%%rbx);"
"vmovaps 512(%%rbx), %%ymm2;"
"vmovaps 544(%%rbx), %%ymm3;"
"vbroadcastss 296(%%rax,%%r8,4), %%ymm0;"
"vbroadcastss 296(%%rax,%%r9,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm4;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm5;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm6;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm7;"
"vbroadcastss 296(%%rax,%%r10,4), %%ymm0;"
"vbroadcastss 296(%%rax,%%r11,4), %%ymm1;"
"vfmadd231ps %%ymm0, %%ymm2, %%ymm8;"
"vfmadd231ps %%ymm0, %%ymm3, %%ymm9;"
"vfmadd231ps %%ymm1, %%ymm2, %%ymm10;"
"vfmadd231ps %%ymm1, %%ymm3, %%ymm11;"
/* "vbroadcastss 296(%%rax,%%r12,4), %%ymm0;" */
/* "vbroadcastss 296(%%rax,%%r13,4), %%ymm1;" */
/* "vfmadd231ps %%ymm0, %%ymm2, %%ymm12;" */
/* "vfmadd231ps %%ymm0, %%ymm3, %%ymm13;" */
/* "vfmadd231ps %%ymm1, %%ymm2, %%ymm14;" */
/* "vfmadd231ps %%ymm1, %%ymm3, %%ymm15;" */

"add $5184, %%rax;"
"add $576, %%rbx;"
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
"vmovups 4624(%%rcx), %%xmm13;"
"vmovups 9248(%%rcx), %%xmm14;"
"vmovups 13872(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 0(%%rcx);"
"vmovups %%xmm6, 4624(%%rcx);"
"vmovups %%xmm8, 9248(%%rcx);"
"vmovups %%xmm10, 13872(%%rcx);"
"vextractf128 $1, %%ymm4, %%xmm4;"
"vextractf128 $1, %%ymm6, %%xmm6;"
"vextractf128 $1, %%ymm8, %%xmm8;"
"vextractf128 $1, %%ymm10, %%xmm10;"
"vmovups 18496(%%rcx), %%xmm12;"
"vmovups 23120(%%rcx), %%xmm13;"
"vmovups 27744(%%rcx), %%xmm14;"
"vmovups 32368(%%rcx), %%xmm15;"
"vaddps %%ymm4, %%ymm12, %%ymm4;"
"vaddps %%ymm6, %%ymm13, %%ymm6;"
"vaddps %%ymm8, %%ymm14, %%ymm8;"
"vaddps %%ymm10, %%ymm15, %%ymm10;"
"vmovups %%xmm4, 18496(%%rcx);"
"vmovups %%xmm6, 23120(%%rcx);"
"vmovups %%xmm8, 27744(%%rcx);"
"vmovups %%xmm10, 32368(%%rcx);"
"vxorps %%ymm12, %%ymm12, %%ymm12;"
"vxorps %%ymm13, %%ymm13, %%ymm13;"
"vxorps %%ymm14, %%ymm14, %%ymm14;"
"vxorps %%ymm15, %%ymm15, %%ymm15;"
"vmovups 36992(%%rcx), %%xmm12;"
"vmovups 41616(%%rcx), %%xmm13;"
"vmovups 46240(%%rcx), %%xmm14;"
"vmovups 50864(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 36992(%%rcx);"
"vmovups %%xmm7, 41616(%%rcx);"
"vmovups %%xmm9, 46240(%%rcx);"
"vmovups %%xmm11, 50864(%%rcx);"
"vextractf128 $1, %%ymm5, %%xmm5;"
"vextractf128 $1, %%ymm7, %%xmm7;"
"vextractf128 $1, %%ymm9, %%xmm9;"
"vextractf128 $1, %%ymm11, %%xmm11;"
"vmovups 55488(%%rcx), %%xmm12;"
"vmovups 60112(%%rcx), %%xmm13;"
"vmovups 64736(%%rcx), %%xmm14;"
"vmovups 69360(%%rcx), %%xmm15;"
"vaddps %%ymm5, %%ymm12, %%ymm5;"
"vaddps %%ymm7, %%ymm13, %%ymm7;"
"vaddps %%ymm9, %%ymm14, %%ymm9;"
"vaddps %%ymm11, %%ymm15, %%ymm11;"
"vmovups %%xmm5, 55488(%%rcx);"
"vmovups %%xmm7, 60112(%%rcx);"
"vmovups %%xmm9, 64736(%%rcx);"
"vmovups %%xmm11, 69360(%%rcx);"
/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 16(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovhps 4640(%%rcx), %%xmm4, %%xmm4;" */
/* "vmovlps 9264(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovhps 13888(%%rcx), %%xmm5, %%xmm5;" */
/* "vmovlps 37008(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovhps 41632(%%rcx), %%xmm6, %%xmm6;" */
/* "vmovlps 46256(%%rcx), %%xmm7, %%xmm7;" */
/* "vmovhps 50880(%%rcx), %%xmm7, %%xmm7;" */
/* "vaddps %%ymm0, %%ymm4, %%ymm4;" */
/* "vaddps %%ymm1, %%ymm5, %%ymm5;" */
/* "vaddps %%ymm2, %%ymm6, %%ymm6;" */
/* "vaddps %%ymm3, %%ymm7, %%ymm7;" */
/* "vmovlps %%xmm4, 16(%%rcx);" */
/* "vmovhps %%xmm4, 4640(%%rcx);" */
/* "vmovlps %%xmm5, 9264(%%rcx);" */
/* "vmovhps %%xmm5, 13888(%%rcx);" */
/* "vmovlps %%xmm6, 37008(%%rcx);" */
/* "vmovhps %%xmm6, 41632(%%rcx);" */
/* "vmovlps %%xmm7, 46256(%%rcx);" */
/* "vmovhps %%xmm7, 50880(%%rcx);" */
/* "vxorps %%ymm4, %%ymm4, %%ymm4;" */
/* "vxorps %%ymm5, %%ymm5, %%ymm5;" */
/* "vxorps %%ymm6, %%ymm6, %%ymm6;" */
/* "vxorps %%ymm7, %%ymm7, %%ymm7;" */
/* "vmovlps 18512(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovhps 23136(%%rcx), %%xmm12, %%xmm12;" */
/* "vmovlps 27760(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovhps 32384(%%rcx), %%xmm13, %%xmm13;" */
/* "vmovlps 55504(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovhps 60128(%%rcx), %%xmm14, %%xmm14;" */
/* "vmovlps 64752(%%rcx), %%xmm15, %%xmm15;" */
/* "vmovhps 69376(%%rcx), %%xmm15, %%xmm15;" */
/* "vextractf128 $1, %%ymm0, %%xmm8;" */
/* "vextractf128 $1, %%ymm1, %%xmm9;" */
/* "vextractf128 $1, %%ymm2, %%xmm10;" */
/* "vextractf128 $1, %%ymm3, %%xmm11;" */
/* "vaddps %%ymm8, %%ymm12, %%ymm12;" */
/* "vaddps %%ymm9, %%ymm13, %%ymm13;" */
/* "vaddps %%ymm10, %%ymm14, %%ymm14;" */
/* "vaddps %%ymm11, %%ymm15, %%ymm15;" */
/* "vmovlps %%xmm12, 18512(%%rcx);" */
/* "vmovhps %%xmm12, 23136(%%rcx);" */
/* "vmovlps %%xmm13, 27760(%%rcx);" */
/* "vmovhps %%xmm13, 32384(%%rcx);" */
/* "vmovlps %%xmm14, 55504(%%rcx);" */
/* "vmovhps %%xmm14, 60128(%%rcx);" */
/* "vmovlps %%xmm15, 64752(%%rcx);" */
/* "vmovhps %%xmm15, 69376(%%rcx);" */
:
: [A] "m" (A),
 [B] "m" (B),
 [C] "m" (C),
 [sf_tile] "m" (sf_tile),
 [Astride] "m" (Astride)
: "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15", "ymm0", "ymm1", "ymm2", "ymm3", "ymm4", "ymm5", "ymm6", "ymm7", "ymm8", "ymm9", "ymm10", "ymm11", "ymm12", "ymm13", "ymm14", "ymm15");
}
