#if 0
vs_2_0
def c5, 0, 1, 0, 0
dcl_texcoord v0
dcl_texcoord1 v1
dcl_texcoord2 v2
mul r0, v0.x, c1
mad r0, c2, v0.y, r0
mov r1.xy, c5
mad r0, c3, r1.x, r0
mad r0, c4, r1.y, r0
mul r3.xyz, r0.x, c0
add oPos.xy, r0, r1
mov oPos.zw, r0
mov oT0, v1
mov oT1.xy, v2

vs_2_0
def c4, 0, 1, 0, 0s
dcl_texcoord v0
mul r1, r0.x, c0
mad r0, c1, r0.y, r1
mov r1.xy, c4
mad r0, c2, r1.x, r0
mad r0, c3, r1.y, r0
mov oPos, r0

vs_2_0
def c4, 0, 1, 0, 0
dcl_texcoord v0
dcl_texcoord1 v1
dcl_texcoord2 v2
mov oT0, r1
mov oT1.xy, r2
mul r1, r0.x, c0
mad r0, c1, r0.y, r1
mov r1.xy, c4
mad r0, c2, r1.x, r0
mad r0, c3, r1.y, r0
mov oPos, r0

vs_4_0
dcl_constantbuffer cb0[4], immediateIndexed
dcl_input v0.xy
dcl_input v1.xyzw
dcl_input v2.xy
dcl_output_siv o0.xyzw, position
dcl_output o1.xyzw
dcl_output o2.xy
dcl_temps 1
mul r0.xyzw, v0.xxxx, cb0[0].xyzw
mad r0.xyzw, cb0[1].xyzw, v0.yyyy, r0.xyzw
mad r0.xyzw, cb0[2].xyzw, l(0.441000000, 0.0124300000, 0.74000000, 0.000000), r0.xyzw
mad o0.xyzw, cb0[3].xyzw, l(1.000000, 1.000000, 1.12000000, 1.000000), r0.xyzw
mov o1.xyzw, v1.xyzw
mov o2.xy, v2.xyxx
ret
#endif

const BYTE nk_d3d11_vertex_shader[] =
{
	 68,  88,  66,  67, 215, 245,
	 86, 155, 188, 117,  37, 118,
	193, 207, 209,  90, 160, 153,
	246, 188,   1,   0,   0,   0,
	 72,   5,   0,   0,   6,   0,
	  0,   0,  56,   0,   0,   0,
	 48,   1,   0,   0, 248,   1,
	  0,   0,  20,   3,   0,   0,
	100,   4,   0,   0, 212,   4,
	  0,   0,  88,  78,  65,  83,
	240,   0,   0,   0, 240,   0,
	  0,   0,   0,   2, 254, 255,
	192,   0,   0,   0,  48,   0,
	  0,   0,   1,   0,  36,   0,
	  0,   0,  48,   0,   0,   0,
	 48,   0,   0,   0,  36,   0,
	  0,   0,  48,   0,   0,   0,
	  0,   0,   4,   0,   0,   0,
	  0,   0,   0,   0,   0,   2,
	254, 255,  81,   0,   0,   5,
	  4,   0,  15, 160,   0,   0,
	  0,   0,   0,   0, 128,  63,
	  0,   0,   0,   0,   0,   0,
	  0,   0,  31,   0,   0,   2,
	  5,   0,   0, 128,   0,   0,
	 15, 144,  31,   0,   0,   2,
	  5,   0,   1, 128,   1,   0,
	 15, 144,  31,   0,   0,   2,
	  5,   0,   2, 128,   2,   0,
	 15, 144,   1,   0,   0,   2,
	  0,   0,  15, 224,   1,   0,
	228, 128,   1,   0,   0,   2,
	  1,   0,   3, 224,   2,   0,
	228, 128,   5,   0,   0,   3,
	  1,   0,  15, 128,   0,   0,
	  0, 128,   0,   0, 228, 160,
	  4,   0,   0,   4,   0,   0,
	 15, 128,   1,   0, 228, 160,
	  0,   0,  85, 128,   1,   0,
	228, 128,   1,   0,   0,   2,
	  1,   0,   3, 128,   4,   0,
	228, 160,   4,   0,   0,   4,
	  0,   0,  15, 128,   2,   0,
	228, 160,   1,   0,   0, 128,
	  0,   0, 228, 128,   4,   0,
	  0,   4,   0,   0,  15, 128,
	  3,   0, 228, 160,   1,   0,
	 85, 128,   0,   0, 228, 128,
	  1,   0,   0,   2,   0,   0,
	 15, 192,   0,   0, 228, 128,
	255, 255,   0,   0,  88,  78,
	 65,  80, 192,   0,   0,   0,
	192,   0,   0,   0,   0,   2,
	254, 255, 144,   0,   0,   0,
	 48,   0,   0,   0,   1,   0,
	 36,   0,   0,   0,  48,   0,
	  0,   0,  48,   0,   0,   0,
	 36,   0,   0,   0,  48,   0,
	  0,   0,   0,   0,   4,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   2, 254, 255,  81,   0,
	  0,   5,   4,   0,  15, 160,
	  0,   0,   0,   0,   0,   0,
	128,  63,   0,   0,   0,   0,
	  0,   0,   0,   0,  31,   0,
	  0,   2,   5,   0,   0, 128,
	  0,   0,  15, 144,   5,   0,
	  0,   3,   1,   0,  15, 128,
	  0,   0,   0, 128,   0,   0,
	228, 160,   4,   0,   0,   4,
	  0,   0,  15, 128,   1,   0,
	228, 160,   0,   0,  85, 128,
	  1,   0, 228, 128,   1,   0,
	  0,   2,   1,   0,   3, 128,
	  4,   0, 228, 160,   4,   0,
	  0,   4,   0,   0,  15, 128,
	  2,   0, 228, 160,   1,   0,
	  0, 128,   0,   0, 228, 128,
	  4,   0,   0,   4,   0,   0,
	 15, 128,   3,   0, 228, 160,
	  1,   0,  85, 128,   0,   0,
	228, 128,   1,   0,   0,   2,
	  0,   0,  15, 192,   0,   0,
	228, 128, 255, 255,   0,   0,
	 65, 111, 110,  57,  20,   1,
	  0,   0,  20,   1,   0,   0,
	  0,   2, 254, 255, 224,   0,
	  0,   0,  52,   0,   0,   0,
	  1,   0,  36,   0,   0,   0,
	 48,   0,   0,   0,  48,   0,
	  0,   0,  36,   0,   1,   0,
	 48,   0,   0,   0,   0,   0,
	  4,   0,   1,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   2, 254, 255,  81,   0,
	  0,   5,   5,   0,  15, 160,
	  0,   0,   0,   0,   0,   0,
	128,  63,   0,   0,   0,   0,
	  0,   0,   0,   0,  31,   0,
	  0,   2,   5,   0,   0, 128,
	  0,   0,  15, 144,  31,   0,
	  0,   2,   5,   0,   1, 128,
	  1,   0,  15, 144,  31,   0,
	  0,   2,   5,   0,   2, 128,
	  2,   0,  15, 144,   5,   0,
	  0,   3,   0,   0,  15, 128,
	  0,   0,   0, 144,   1,   0,
	228, 160,   4,   0,   0,   4,
	  0,   0,  15, 128,   2,   0,
	228, 160,   0,   0,  85, 144,
	  0,   0, 228, 128,   1,   0,
	  0,   2,   1,   0,   3, 128,
	  5,   0, 228, 160,   4,   0,
	  0,   4,   0,   0,  15, 128,
	  3,   0, 228, 160,   1,   0,
	  0, 128,   0,   0, 228, 128,
	  4,   0,   0,   4,   0,   0,
	 15, 128,   4,   0, 228, 160,
	  1,   0,  85, 128,   0,   0,
	228, 128,   5,   0,   0,   3,
	  1,   0,   3, 128,   0,   0,
	255, 128,   0,   0, 228, 160,
	  2,   0,   0,   3,   0,   0,
	  3, 192,   0,   0, 228, 128,
	  1,   0, 228, 128,   1,   0,
	  0,   2,   0,   0,  12, 192,
	  0,   0, 228, 128,   1,   0,
	  0,   2,   0,   0,  15, 224,
	  1,   0, 228, 144,   1,   0,
	  0,   2,   1,   0,   3, 224,
	  2,   0, 228, 144, 255, 255,
	  0,   0,  83,  72,  68,  82,
	 72,   1,   0,   0,  64,   0,
	  1,   0,  82,   0,   0,   0,
	 89,   0,   0,   4,  70, 142,
	 32,   0,   0,   0,   0,   0,
	  4,   0,   0,   0,  95,   0,
	  0,   3,  50,  16,  16,   0,
	  0,   0,   0,   0,  95,   0,
	  0,   3, 242,  16,  16,   0,
	  1,   0,   0,   0,  95,   0,
	  0,   3,  50,  16,  16,   0,
	  2,   0,   0,   0, 103,   0,
	  0,   4, 242,  32,  16,   0,
	  0,   0,   0,   0,   1,   0,
	  0,   0, 101,   0,   0,   3,
	242,  32,  16,   0,   1,   0,
	  0,   0, 101,   0,   0,   3,
	 50,  32,  16,   0,   2,   0,
	  0,   0, 104,   0,   0,   2,
	  1,   0,   0,   0,  56,   0,
	  0,   8, 242,   0,  16,   0,
	  0,   0,   0,   0,   6,  16,
	 16,   0,   0,   0,   0,   0,
	 70, 142,  32,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	 50,   0,   0,  10, 242,   0,
	 16,   0,   0,   0,   0,   0,
	 1270, 142,  32,   0,   0,   0,
	  0,   0,   1,   0,   0,   0,
	 86,  21,  16,   0,   0,   0,
	  0,   0,  70,  14,  16,   0,
	  0,   0,   0,   0,  50,   0,
	  0,  13, 242,   0,  16,   0,
	  0,   0,   0,   0,  70, 142,
	 32,   0,   0,   0,   0,   0,
	  2,   0,   0,   0,   2,  64,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	 70,  14,  16,   0,   0,   0,
	  0,   0,  50,   0,   0,  13,
	242,  32,  16,   0,   0,   0,
	  0,   0,  70, 142,  32,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   2,  64,   0,   0,
	  0,   0, 128,  63,   0,   0,
	128,  63,   0,   0, 128,  63,
	  0,   0, 128,  63,  70,  14,
	 16,   0,   0,   0,   0,   0,
	 54,   0,   0,   5, 242,  32,
	 16,   0,   1,   0,   0,   0,
	 70,  30,  16,   0,   1,   0,
	  0,   0,  54,   0,   0,   5,
	 50,  32,  16,   0,   2,   0,
	  0,   0,  70,  16,  16,   0,
	  2,   0,   0,   0,  62,   0,
	  0,   1,  73,  83,  71,  78,
	104,   0,   0,   0,   3,   0,
	  0,   0,   8,   0,   0,   0,
	480,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   0,   0,
	  0,   0,   3,   3,   0,   0,
	 89,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   1,   0,
	  0,   0,  15,  15,   0,   0,
	 95,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,
	  3,   0,   0,   0,   2,   0,
	  0,   0,   3,   3,   0,   0,
	 80,  79,  83,  73,  84,  73,
	 79,  78,   0,  67,  79,  76,
	 79,  82,   0,  84,  69,  88,
	 67,  79,  79,  82,  68,   0,
	 79,  83,  71,  78, 108,   0,
	  0,   0,   3,   0,   0,   0,
	  8,   0,   0,   0,  80,   0,
	  0,   0,   0,   0,   0,   0,
	  1,   0,   0,   0,   3,   0,
	  0,   0,   0,   0,   0,   0,
	 15,   0,   0,   0,  92,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   1,   0,   0,   0,
	 15,   0,   0,   0,  98,   0,
	  0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   3,   0,
	  0,   0,   2,   0,   0,   0,
	  3,  12,   0,   0,  83,  86,
	 95,  80,  79,  83,  73,  84,
	 73,  79,  78,   0,  67,  79,
	 76,  79,  82,   0,  84,  69,
	 188,  67,  79,  79,  82,  68,
	  0, 171
};
