/*
 * wavtable.h
 *
 *  Created on: May 1, 2021
 *      Author: michalb
 */

#ifndef INC_WAVETABLE_H_
#define INC_WAVETABLE_H_

#include <stdint.h>
const float noise[128] = {
		0.47f,
		0.87f,
		0.23f,
		0.02f,
		0.28f,
		0.75f,
		0.15f,
		0.13f,
		0.68f,
		0.93f,
		0.20f,
		0.98f,
		0.80f,
		0.55f,
		0.91f,
		0.69f,
		0.67f,
		0.93f,
		0.11f,
		0.36f,
		0.82f,
		0.66f,
		0.86f,
		0.87f,
		0.04f,
		0.14f,
		0.51f,
		0.57f,
		0.39f,
		0.36f,
		0.98f,
		0.39f,
		0.03f,
		0.94f,
		0.81f,
		0.57f,
		0.45f,
		0.66f,
		0.24f,
		0.96f,
		0.02f,
		0.78f,
		0.38f,
		0.13f,
		0.04f,
		0.86f,
		0.92f,
		0.46f,
		0.96f,
		0.43f,
		0.59f,
		0.28f,
		0.94f,
		0.66f,
		0.01f,
		0.72f,
		0.11f,
		0.80f,
		0.14f,
		0.21f,
		0.20f,
		0.78f,
		0.01f,
		0.27f,
		0.68f,
		0.23f,
		0.54f,
		0.05f,
		0.23f,
		0.69f,
		0.91f,
		0.87f,
		0.75f,
		0.02f,
		0.71f,
		0.26f,
		0.08f,
		0.42f,
		0.98f,
		0.74f,
		0.42f,
		0.38f,
		0.20f,
		0.23f,
		0.97f,
		0.51f,
		0.62f,
		0.47f,
		0.67f,
		0.23f,
		0.44f,
		0.01f,
		0.76f,
		0.35f,
		0.81f,
		0.75f,
		0.68f,
		0.48f,
		0.35f,
		0.50f,
		0.62f,
		0.17f,
		0.88f,
		0.92f,
		0.01f,
		0.55f,
		0.88f,
		0.80f,
		0.31f,
		0.40f,
		0.37f,
		0.74f,
		0.08f,
		0.04f,
		0.60f,
		0.78f,
		0.35f,
		0.35f,
		0.01f,
		0.01f,
		0.00f,
		0.20f,
		0.97f,
		0.46f,
		0.24f,
		0.61f,
		0.63f,
		0.35f,
};

const float noise512[] = {
		0.8613f,
		0.4116f,
		0.7628f,
		0.1221f,
		0.0251f,
		0.1207f,
		0.7107f,
		0.7251f,
		0.0766f,
		0.8059f,
		0.4573f,
		0.4905f,
		0.6309f,
		0.7171f,
		0.9098f,
		0.7507f,
		0.8014f,
		0.2784f,
		0.9823f,
		0.3911f,
		0.0542f,
		0.9705f,
		0.1636f,
		0.9614f,
		0.6705f,
		0.4646f,
		0.6927f,
		0.8447f,
		0.0368f,
		0.0764f,
		0.9955f,
		0.9407f,
		0.4154f,
		0.9221f,
		0.9085f,
		0.7668f,
		0.5891f,
		0.2798f,
		0.5671f,
		0.5038f,
		0.5229f,
		0.7951f,
		0.2842f,
		0.1546f,
		0.7072f,
		0.1861f,
		0.1573f,
		0.5126f,
		0.9248f,
		0.0980f,
		0.6876f,
		0.5497f,
		0.2077f,
		0.5898f,
		0.7562f,
		0.3518f,
		0.2804f,
		0.4927f,
		0.5047f,
		0.9056f,
		0.5228f,
		0.7906f,
		0.5611f,
		0.0938f,
		0.4571f,
		0.4794f,
		0.4624f,
		0.6860f,
		0.8265f,
		0.5451f,
		0.6752f,
		0.6824f,
		0.5843f,
		0.6811f,
		0.7496f,
		0.1282f,
		0.0507f,
		0.1006f,
		0.4621f,
		0.2466f,
		0.0230f,
		0.4702f,
		0.8765f,
		0.3283f,
		0.1282f,
		0.0648f,
		0.3677f,
		0.2057f,
		0.7382f,
		0.6939f,
		0.3716f,
		0.2750f,
		0.0879f,
		0.1875f,
		0.6935f,
		0.7524f,
		0.5222f,
		0.4141f,
		0.9585f,
		0.2520f,
		0.4951f,
		0.7292f,
		0.3049f,
		0.1400f,
		0.7875f,
		0.8493f,
		0.0046f,
		0.2994f,
		0.8658f,
		0.8277f,
		0.7444f,
		0.0242f,
		0.8262f,
		0.2194f,
		0.3596f,
		0.2126f,
		0.6772f,
		0.6054f,
		0.7278f,
		0.0952f,
		0.0611f,
		0.2879f,
		0.4717f,
		0.5160f,
		0.8551f,
		0.7629f,
		0.4113f,
		0.2930f,
		0.9287f,
		0.2646f,
		0.3753f,
		0.2099f,
		0.0681f,
		0.2367f,
		0.3263f,
		0.2623f,
		0.9391f,
		0.4154f,
		0.8271f,
		0.1086f,
		0.7358f,
		0.4055f,
		0.9979f,
		0.9667f,
		0.1732f,
		0.2141f,
		0.3875f,
		0.0488f,
		0.9278f,
		0.9246f,
		0.5771f,
		0.6497f,
		0.8692f,
		0.4896f,
		0.2756f,
		0.9432f,
		0.6689f,
		0.6809f,
		0.5980f,
		0.2780f,
		0.8961f,
		0.6165f,
		0.4015f,
		0.3933f,
		0.6658f,
		0.0013f,
		0.6640f,
		0.9350f,
		0.2636f,
		0.4421f,
		0.0707f,
		0.4480f,
		0.2926f,
		0.3890f,
		0.1105f,
		0.2179f,
		0.0381f,
		0.5913f,
		0.0120f,
		0.6382f,
		0.2737f,
		0.4115f,
		0.8462f,
		0.6863f,
		0.0386f,
		0.8793f,
		0.4452f,
		0.0684f,
		0.7156f,
		0.0858f,
		0.9347f,
		0.7565f,
		0.3901f,
		0.9493f,
		0.9386f,
		0.5263f,
		0.7445f,
		0.9609f,
		0.2321f,
		0.4556f,
		0.0596f,
		0.7344f,
		0.8521f,
		0.9246f,
		0.3760f,
		0.2533f,
		0.7107f,
		0.5309f,
		0.6032f,
		0.3616f,
		0.1259f,
		0.5266f,
		0.6357f,
		0.3996f,
		0.3834f,
		0.9247f,
		0.7258f,
		0.9394f,
		0.3798f,
		0.6075f,
		0.6530f,
		0.2380f,
		0.1146f,
		0.6297f,
		0.9957f,
		0.0201f,
		0.2334f,
		0.9335f,
		0.4687f,
		0.4736f,
		0.6647f,
		0.9091f,
		0.8881f,
		0.7228f,
		0.9718f,
		0.6426f,
		0.9513f,
		0.2960f,
		0.5037f,
		0.4188f,
		0.4379f,
		0.2742f,
		0.4275f,
		0.2515f,
		0.1155f,
		0.1603f,
		0.2101f,
		0.3845f,
		0.3840f,
		0.7353f,
		0.9601f,
		0.7387f,
		0.5159f,
		0.5176f,
		0.1944f,
		0.5673f,
		0.5417f,
		0.4618f,
		0.3017f,
		0.1072f,
		0.8482f,
		0.0810f,
		0.5941f,
		0.2950f,
		0.6444f,
		0.6760f,
		0.3513f,
		0.5579f,
		0.8427f,
		0.2819f,
		0.2359f,
		0.4009f,
		0.5866f,
		0.2175f,
		0.2636f,
		0.2108f,
		0.0334f,
		0.5021f,
		0.0988f,
		0.7958f,
		0.6510f,
		0.9136f,
		0.3884f,
		0.4097f,
		0.3087f,
		0.9156f,
		0.7288f,
		0.9069f,
		0.4254f,
		0.7541f,
		0.0418f,
		0.9220f,
		0.3398f,
		0.8668f,
		0.0067f,
		0.7885f,
		0.0372f,
		0.2431f,
		0.9695f,
		0.9367f,
		0.7343f,
		0.0571f,
		0.4568f,
		0.6647f,
		0.9429f,
		0.0646f,
		0.6941f,
		0.7598f,
		0.5713f,
		0.1346f,
		0.6000f,
		0.9981f,
		0.3608f,
		0.5423f,
		0.3178f,
		0.8384f,
		0.3085f,
		0.9206f,
		0.8653f,
		0.3349f,
		0.4574f,
		0.7197f,
		0.9371f,
		0.8281f,
		0.1505f,
		0.0596f,
		0.8228f,
		0.1597f,
		0.6335f,
		0.4110f,
		0.1939f,
		0.2945f,
		0.8537f,
		0.4395f,
		0.8843f,
		0.8689f,
		0.2503f,
		0.0265f,
		0.5843f,
		0.3366f,
		0.2602f,
		0.4373f,
		0.6566f,
		0.2002f,
		0.5352f,
		0.6566f,
		0.8472f,
		0.4492f,
		0.9805f,
		0.3785f,
		0.7323f,
		0.6632f,
		0.8150f,
		0.6451f,
		0.9769f,
		0.4497f,
		0.4188f,
		0.9733f,
		0.3295f,
		0.6006f,
		0.0774f,
		0.3020f,
		0.3328f,
		0.1109f,
		0.8631f,
		0.0307f,
		0.2523f,
		0.6792f,
		0.1816f,
		0.0756f,
		0.5343f,
		0.4464f,
		0.9006f,
		0.2704f,
		0.5187f,
		0.9384f,
		0.8555f,
		0.7088f,
		0.6964f,
		0.0441f,
		0.0252f,
		0.4544f,
		0.8627f,
		0.1085f,
		0.4046f,
		0.4313f,
		0.2305f,
		0.3985f,
		0.4823f,
		0.7267f,
		0.2536f,
		0.0454f,
		0.8226f,
		0.6153f,
		0.2146f,
		0.5279f,
		0.5646f,
		0.0512f,
		0.6605f,
		0.6969f,
		0.9751f,
		0.4251f,
		0.9709f,
		0.4880f,
		0.5637f,
		0.1376f,
		0.4315f,
		0.5216f,
		0.1176f,
		0.5825f,
		0.5044f,
		0.8197f,
		0.0069f,
		0.3753f,
		0.0509f,
		0.9703f,
		0.9757f,
		0.6045f,
		0.2769f,
		0.7294f,
		0.7463f,
		0.3136f,
		0.5236f,
		0.4791f,
		0.8573f,
		0.3471f,
		0.4255f,
		0.1887f,
		0.8832f,
		0.3189f,
		0.4425f,
		0.7865f,
		0.9218f,
		0.0725f,
		0.1365f,
		0.8198f,
		0.7495f,
		0.0372f,
		0.6729f,
		0.4221f,
		0.6568f,
		0.7548f,
		0.3486f,
		0.9471f,
		0.6346f,
		0.2947f,
		0.4490f,
		0.7813f,
		0.3963f,
		0.2050f,
		0.2890f,
		0.2248f,
		0.9542f,
		0.8347f,
		0.1306f,
		0.4427f,
		0.5173f,
		0.1117f,
		0.0389f,
		0.1814f,
		0.2485f,
		0.6334f,
		0.4737f,
		0.0099f,
		0.6854f,
		0.8196f,
		0.1119f,
		0.7467f,
		0.3488f,
		0.6343f,
		0.1279f,
		0.2900f,
		0.5503f,
		0.3226f,
		0.9296f,
		0.4549f,
		0.0223f,
		0.9027f,
		0.1049f,
		0.8846f,
		0.8440f,
		0.5624f,
		0.7296f,
		0.7162f,
		0.4529f,
		0.4923f,
		0.7113f,
		0.2187f,
		0.8412f,
		0.8403f,
		0.6807f,
		0.6574f,
		0.7277f,
		0.8645f,
		0.5794f,
		0.7028f,
		0.8890f,
		0.2121f,
		0.0795f,
		0.1513f,
		0.1062f,
		0.3797f,
		0.9985f,
		0.8343f,
		0.2457f,
		0.7313f,
		0.6786f,
		0.4928f,
		0.8790f,
		0.2216f,
		0.6217f,
		0.3333f,
};

const uint16_t sine512[] = {
		0x1f4,0x1fa,0x200,0x206,0x20d,0x213,0x219,0x21f,
		0x225,0x22b,0x231,0x237,0x23d,0x243,0x249,0x250,
		0x256,0x25c,0x262,0x268,0x26d,0x273,0x279,0x27f,
		0x285,0x28b,0x291,0x297,0x29c,0x2a2,0x2a8,0x2ae,
		0x2b3,0x2b9,0x2bf,0x2c4,0x2ca,0x2cf,0x2d5,0x2da,
		0x2e0,0x2e5,0x2ea,0x2f0,0x2f5,0x2fa,0x2ff,0x305,
		0x30a,0x30f,0x314,0x319,0x31e,0x323,0x328,0x32c,
		0x331,0x336,0x33b,0x33f,0x344,0x348,0x34d,0x351,
		0x356,0x35a,0x35e,0x362,0x366,0x36b,0x36f,0x373,
		0x377,0x37a,0x37e,0x382,0x386,0x389,0x38d,0x390,
		0x394,0x397,0x39a,0x39e,0x3a1,0x3a4,0x3a7,0x3aa,
		0x3ad,0x3b0,0x3b3,0x3b5,0x3b8,0x3bb,0x3bd,0x3c0,
		0x3c2,0x3c4,0x3c6,0x3c9,0x3cb,0x3cd,0x3cf,0x3d1,
		0x3d2,0x3d4,0x3d6,0x3d7,0x3d9,0x3da,0x3dc,0x3dd,
		0x3de,0x3e0,0x3e1,0x3e2,0x3e3,0x3e3,0x3e4,0x3e5,
		0x3e6,0x3e6,0x3e7,0x3e7,0x3e7,0x3e8,0x3e8,0x3e8,
		0x3e8,0x3e8,0x3e8,0x3e8,0x3e7,0x3e7,0x3e7,0x3e6,
		0x3e6,0x3e5,0x3e4,0x3e3,0x3e3,0x3e2,0x3e1,0x3e0,
		0x3de,0x3dd,0x3dc,0x3da,0x3d9,0x3d7,0x3d6,0x3d4,
		0x3d2,0x3d1,0x3cf,0x3cd,0x3cb,0x3c9,0x3c6,0x3c4,
		0x3c2,0x3c0,0x3bd,0x3bb,0x3b8,0x3b5,0x3b3,0x3b0,
		0x3ad,0x3aa,0x3a7,0x3a4,0x3a1,0x39e,0x39a,0x397,
		0x394,0x390,0x38d,0x389,0x386,0x382,0x37e,0x37a,
		0x377,0x373,0x36f,0x36b,0x366,0x362,0x35e,0x35a,
		0x356,0x351,0x34d,0x348,0x344,0x33f,0x33b,0x336,
		0x331,0x32c,0x328,0x323,0x31e,0x319,0x314,0x30f,
		0x30a,0x305,0x2ff,0x2fa,0x2f5,0x2f0,0x2ea,0x2e5,
		0x2e0,0x2da,0x2d5,0x2cf,0x2ca,0x2c4,0x2bf,0x2b9,
		0x2b3,0x2ae,0x2a8,0x2a2,0x29c,0x297,0x291,0x28b,
		0x285,0x27f,0x279,0x273,0x26d,0x268,0x262,0x25c,
		0x256,0x250,0x249,0x243,0x23d,0x237,0x231,0x22b,
		0x225,0x21f,0x219,0x213,0x20d,0x206,0x200,0x1fa,
		0x1f4,0x1ee,0x1e8,0x1e2,0x1db,0x1d5,0x1cf,0x1c9,
		0x1c3,0x1bd,0x1b7,0x1b1,0x1ab,0x1a5,0x19f,0x198,
		0x192,0x18c,0x186,0x180,0x17b,0x175,0x16f,0x169,
		0x163,0x15d,0x157,0x151,0x14c,0x146,0x140,0x13a,
		0x135,0x12f,0x129,0x124,0x11e,0x119,0x113,0x10e,
		0x108,0x103,0xfe,0xf8,0xf3,0xee,0xe9,0xe3,
		0xde,0xd9,0xd4,0xcf,0xca,0xc5,0xc0,0xbc,
		0xb7,0xb2,0xad,0xa9,0xa4,0xa0,0x9b,0x97,
		0x92,0x8e,0x8a,0x86,0x82,0x7d,0x79,0x75,
		0x71,0x6e,0x6a,0x66,0x62,0x5f,0x5b,0x58,
		0x54,0x51,0x4e,0x4a,0x47,0x44,0x41,0x3e,
		0x3b,0x38,0x35,0x33,0x30,0x2d,0x2b,0x28,
		0x26,0x24,0x22,0x1f,0x1d,0x1b,0x19,0x17,
		0x16,0x14,0x12,0x11,0xf,0xe,0xc,0xb,
		0xa,0x8,0x7,0x6,0x5,0x5,0x4,0x3,
		0x2,0x2,0x1,0x1,0x1,0x0,0x0,0x0,
		0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x2,
		0x2,0x3,0x4,0x5,0x5,0x6,0x7,0x8,
		0xa,0xb,0xc,0xe,0xf,0x11,0x12,0x14,
		0x16,0x17,0x19,0x1b,0x1d,0x1f,0x22,0x24,
		0x26,0x28,0x2b,0x2d,0x30,0x33,0x35,0x38,
		0x3b,0x3e,0x41,0x44,0x47,0x4a,0x4e,0x51,
		0x54,0x58,0x5b,0x5f,0x62,0x66,0x6a,0x6e,
		0x71,0x75,0x79,0x7d,0x82,0x86,0x8a,0x8e,
		0x92,0x97,0x9b,0xa0,0xa4,0xa9,0xad,0xb2,
		0xb7,0xbc,0xc0,0xc5,0xca,0xcf,0xd4,0xd9,
		0xde,0xe3,0xe9,0xee,0xf3,0xf8,0xfe,0x103,
		0x108,0x10e,0x113,0x119,0x11e,0x124,0x129,0x12f,
		0x135,0x13a,0x140,0x146,0x14c,0x151,0x157,0x15d,
		0x163,0x169,0x16f,0x175,0x17b,0x180,0x186,0x18c,
		0x192,0x198,0x19f,0x1a5,0x1ab,0x1b1,0x1b7,0x1bd,
		0x1c3,0x1c9,0x1cf,0x1d5,0x1db,0x1e2,0x1e8,0x1ee,
};

const uint16_t triangle512[] = {
	0x4,0x8,0xc,0x10,0x14,0x17,0x1b,0x1f,
	0x23,0x27,0x2b,0x2f,0x33,0x37,0x3b,0x3f,
	0x42,0x46,0x4a,0x4e,0x52,0x56,0x5a,0x5e,
	0x62,0x66,0x69,0x6d,0x71,0x75,0x79,0x7d,
	0x81,0x85,0x89,0x8d,0x91,0x94,0x98,0x9c,
	0xa0,0xa4,0xa8,0xac,0xb0,0xb4,0xb8,0xbc,
	0xbf,0xc3,0xc7,0xcb,0xcf,0xd3,0xd7,0xdb,
	0xdf,0xe3,0xe6,0xea,0xee,0xf2,0xf6,0xfa,
	0xfe,0x102,0x106,0x10a,0x10e,0x111,0x115,0x119,
	0x11d,0x121,0x125,0x129,0x12d,0x131,0x135,0x139,
	0x13c,0x140,0x144,0x148,0x14c,0x150,0x154,0x158,
	0x15c,0x160,0x163,0x167,0x16b,0x16f,0x173,0x177,
	0x17b,0x17f,0x183,0x187,0x18b,0x18e,0x192,0x196,
	0x19a,0x19e,0x1a2,0x1a6,0x1aa,0x1ae,0x1b2,0x1b6,
	0x1b9,0x1bd,0x1c1,0x1c5,0x1c9,0x1cd,0x1d1,0x1d5,
	0x1d9,0x1dd,0x1e0,0x1e4,0x1e8,0x1ec,0x1f0,0x1f4,
	0x1f8,0x1fc,0x200,0x204,0x208,0x20b,0x20f,0x213,
	0x217,0x21b,0x21f,0x223,0x227,0x22b,0x22f,0x233,
	0x236,0x23a,0x23e,0x242,0x246,0x24a,0x24e,0x252,
	0x256,0x25a,0x25d,0x261,0x265,0x269,0x26d,0x271,
	0x275,0x279,0x27d,0x281,0x285,0x288,0x28c,0x290,
	0x294,0x298,0x29c,0x2a0,0x2a4,0x2a8,0x2ac,0x2b0,
	0x2b3,0x2b7,0x2bb,0x2bf,0x2c3,0x2c7,0x2cb,0x2cf,
	0x2d3,0x2d7,0x2da,0x2de,0x2e2,0x2e6,0x2ea,0x2ee,
	0x2f2,0x2f6,0x2fa,0x2fe,0x302,0x305,0x309,0x30d,
	0x311,0x315,0x319,0x31d,0x321,0x325,0x329,0x32d,
	0x330,0x334,0x338,0x33c,0x340,0x344,0x348,0x34c,
	0x350,0x354,0x357,0x35b,0x35f,0x363,0x367,0x36b,
	0x36f,0x373,0x377,0x37b,0x37f,0x382,0x386,0x38a,
	0x38e,0x392,0x396,0x39a,0x39e,0x3a2,0x3a6,0x3aa,
	0x3ad,0x3b1,0x3b5,0x3b9,0x3bd,0x3c1,0x3c5,0x3c9,
	0x3cd,0x3d1,0x3d4,0x3d8,0x3dc,0x3e0,0x3e4,0x3e8,
	0x3e4,0x3e0,0x3dc,0x3d8,0x3d4,0x3d1,0x3cd,0x3c9,
	0x3c5,0x3c1,0x3bd,0x3b9,0x3b5,0x3b1,0x3ad,0x3aa,
	0x3a6,0x3a2,0x39e,0x39a,0x396,0x392,0x38e,0x38a,
	0x386,0x382,0x37f,0x37b,0x377,0x373,0x36f,0x36b,
	0x367,0x363,0x35f,0x35b,0x357,0x354,0x350,0x34c,
	0x348,0x344,0x340,0x33c,0x338,0x334,0x330,0x32d,
	0x329,0x325,0x321,0x31d,0x319,0x315,0x311,0x30d,
	0x309,0x305,0x302,0x2fe,0x2fa,0x2f6,0x2f2,0x2ee,
	0x2ea,0x2e6,0x2e2,0x2de,0x2da,0x2d7,0x2d3,0x2cf,
	0x2cb,0x2c7,0x2c3,0x2bf,0x2bb,0x2b7,0x2b3,0x2b0,
	0x2ac,0x2a8,0x2a4,0x2a0,0x29c,0x298,0x294,0x290,
	0x28c,0x288,0x285,0x281,0x27d,0x279,0x275,0x271,
	0x26d,0x269,0x265,0x261,0x25d,0x25a,0x256,0x252,
	0x24e,0x24a,0x246,0x242,0x23e,0x23a,0x236,0x233,
	0x22f,0x22b,0x227,0x223,0x21f,0x21b,0x217,0x213,
	0x20f,0x20b,0x208,0x204,0x200,0x1fc,0x1f8,0x1f4,
	0x1f0,0x1ec,0x1e8,0x1e4,0x1e0,0x1dd,0x1d9,0x1d5,
	0x1d1,0x1cd,0x1c9,0x1c5,0x1c1,0x1bd,0x1b9,0x1b6,
	0x1b2,0x1ae,0x1aa,0x1a6,0x1a2,0x19e,0x19a,0x196,
	0x192,0x18e,0x18b,0x187,0x183,0x17f,0x17b,0x177,
	0x173,0x16f,0x16b,0x167,0x163,0x160,0x15c,0x158,
	0x154,0x150,0x14c,0x148,0x144,0x140,0x13c,0x139,
	0x135,0x131,0x12d,0x129,0x125,0x121,0x11d,0x119,
	0x115,0x111,0x10e,0x10a,0x106,0x102,0xfe,0xfa,
	0xf6,0xf2,0xee,0xea,0xe6,0xe3,0xdf,0xdb,
	0xd7,0xd3,0xcf,0xcb,0xc7,0xc3,0xbf,0xbc,
	0xb8,0xb4,0xb0,0xac,0xa8,0xa4,0xa0,0x9c,
	0x98,0x94,0x91,0x8d,0x89,0x85,0x81,0x7d,
	0x79,0x75,0x71,0x6d,0x69,0x66,0x62,0x5e,
	0x5a,0x56,0x52,0x4e,0x4a,0x46,0x42,0x3f,
	0x3b,0x37,0x33,0x2f,0x2b,0x27,0x23,0x1f,
	0x1b,0x17,0x14,0x10,0xc,0x8,0x4,0x0,
};

const uint16_t triangle1024[] = {
		0x2,0x4,0x6,0x8,0xa,0xc,0xe,0x10,
		0x12,0x14,0x15,0x17,0x19,0x1b,0x1d,0x1f,
		0x21,0x23,0x25,0x27,0x29,0x2b,0x2d,0x2f,
		0x31,0x33,0x35,0x37,0x39,0x3b,0x3d,0x3f,
		0x40,0x42,0x44,0x46,0x48,0x4a,0x4c,0x4e,
		0x50,0x52,0x54,0x56,0x58,0x5a,0x5c,0x5e,
		0x60,0x62,0x64,0x66,0x68,0x69,0x6b,0x6d,
		0x6f,0x71,0x73,0x75,0x77,0x79,0x7b,0x7d,
		0x7f,0x81,0x83,0x85,0x87,0x89,0x8b,0x8d,
		0x8f,0x91,0x92,0x94,0x96,0x98,0x9a,0x9c,
		0x9e,0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,
		0xae,0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,
		0xbd,0xbf,0xc1,0xc3,0xc5,0xc7,0xc9,0xcb,
		0xcd,0xcf,0xd1,0xd3,0xd5,0xd7,0xd9,0xdb,
		0xdd,0xdf,0xe1,0xe3,0xe5,0xe6,0xe8,0xea,
		0xec,0xee,0xf0,0xf2,0xf4,0xf6,0xf8,0xfa,
		0xfc,0xfe,0x100,0x102,0x104,0x106,0x108,0x10a,
		0x10c,0x10e,0x10f,0x111,0x113,0x115,0x117,0x119,
		0x11b,0x11d,0x11f,0x121,0x123,0x125,0x127,0x129,
		0x12b,0x12d,0x12f,0x131,0x133,0x135,0x137,0x139,
		0x13a,0x13c,0x13e,0x140,0x142,0x144,0x146,0x148,
		0x14a,0x14c,0x14e,0x150,0x152,0x154,0x156,0x158,
		0x15a,0x15c,0x15e,0x160,0x162,0x163,0x165,0x167,
		0x169,0x16b,0x16d,0x16f,0x171,0x173,0x175,0x177,
		0x179,0x17b,0x17d,0x17f,0x181,0x183,0x185,0x187,
		0x189,0x18b,0x18c,0x18e,0x190,0x192,0x194,0x196,
		0x198,0x19a,0x19c,0x19e,0x1a0,0x1a2,0x1a4,0x1a6,
		0x1a8,0x1aa,0x1ac,0x1ae,0x1b0,0x1b2,0x1b4,0x1b6,
		0x1b7,0x1b9,0x1bb,0x1bd,0x1bf,0x1c1,0x1c3,0x1c5,
		0x1c7,0x1c9,0x1cb,0x1cd,0x1cf,0x1d1,0x1d3,0x1d5,
		0x1d7,0x1d9,0x1db,0x1dd,0x1df,0x1e0,0x1e2,0x1e4,
		0x1e6,0x1e8,0x1ea,0x1ec,0x1ee,0x1f0,0x1f2,0x1f4,
		0x1f6,0x1f8,0x1fa,0x1fc,0x1fe,0x200,0x202,0x204,
		0x206,0x208,0x209,0x20b,0x20d,0x20f,0x211,0x213,
		0x215,0x217,0x219,0x21b,0x21d,0x21f,0x221,0x223,
		0x225,0x227,0x229,0x22b,0x22d,0x22f,0x231,0x233,
		0x234,0x236,0x238,0x23a,0x23c,0x23e,0x240,0x242,
		0x244,0x246,0x248,0x24a,0x24c,0x24e,0x250,0x252,
		0x254,0x256,0x258,0x25a,0x25c,0x25d,0x25f,0x261,
		0x263,0x265,0x267,0x269,0x26b,0x26d,0x26f,0x271,
		0x273,0x275,0x277,0x279,0x27b,0x27d,0x27f,0x281,
		0x283,0x285,0x286,0x288,0x28a,0x28c,0x28e,0x290,
		0x292,0x294,0x296,0x298,0x29a,0x29c,0x29e,0x2a0,
		0x2a2,0x2a4,0x2a6,0x2a8,0x2aa,0x2ac,0x2ae,0x2b0,
		0x2b1,0x2b3,0x2b5,0x2b7,0x2b9,0x2bb,0x2bd,0x2bf,
		0x2c1,0x2c3,0x2c5,0x2c7,0x2c9,0x2cb,0x2cd,0x2cf,
		0x2d1,0x2d3,0x2d5,0x2d7,0x2d9,0x2da,0x2dc,0x2de,
		0x2e0,0x2e2,0x2e4,0x2e6,0x2e8,0x2ea,0x2ec,0x2ee,
		0x2f0,0x2f2,0x2f4,0x2f6,0x2f8,0x2fa,0x2fc,0x2fe,
		0x300,0x302,0x303,0x305,0x307,0x309,0x30b,0x30d,
		0x30f,0x311,0x313,0x315,0x317,0x319,0x31b,0x31d,
		0x31f,0x321,0x323,0x325,0x327,0x329,0x32b,0x32d,
		0x32e,0x330,0x332,0x334,0x336,0x338,0x33a,0x33c,
		0x33e,0x340,0x342,0x344,0x346,0x348,0x34a,0x34c,
		0x34e,0x350,0x352,0x354,0x356,0x357,0x359,0x35b,
		0x35d,0x35f,0x361,0x363,0x365,0x367,0x369,0x36b,
		0x36d,0x36f,0x371,0x373,0x375,0x377,0x379,0x37b,
		0x37d,0x37f,0x380,0x382,0x384,0x386,0x388,0x38a,
		0x38c,0x38e,0x390,0x392,0x394,0x396,0x398,0x39a,
		0x39c,0x39e,0x3a0,0x3a2,0x3a4,0x3a6,0x3a8,0x3aa,
		0x3ab,0x3ad,0x3af,0x3b1,0x3b3,0x3b5,0x3b7,0x3b9,
		0x3bb,0x3bd,0x3bf,0x3c1,0x3c3,0x3c5,0x3c7,0x3c9,
		0x3cb,0x3cd,0x3cf,0x3d1,0x3d3,0x3d4,0x3d6,0x3d8,
		0x3da,0x3dc,0x3de,0x3e0,0x3e2,0x3e4,0x3e6,0x3e8,
		0x3e6,0x3e4,0x3e2,0x3e0,0x3de,0x3dc,0x3da,0x3d8,
		0x3d6,0x3d4,0x3d3,0x3d1,0x3cf,0x3cd,0x3cb,0x3c9,
		0x3c7,0x3c5,0x3c3,0x3c1,0x3bf,0x3bd,0x3bb,0x3b9,
		0x3b7,0x3b5,0x3b3,0x3b1,0x3af,0x3ad,0x3ab,0x3aa,
		0x3a8,0x3a6,0x3a4,0x3a2,0x3a0,0x39e,0x39c,0x39a,
		0x398,0x396,0x394,0x392,0x390,0x38e,0x38c,0x38a,
		0x388,0x386,0x384,0x382,0x380,0x37f,0x37d,0x37b,
		0x379,0x377,0x375,0x373,0x371,0x36f,0x36d,0x36b,
		0x369,0x367,0x365,0x363,0x361,0x35f,0x35d,0x35b,
		0x359,0x357,0x356,0x354,0x352,0x350,0x34e,0x34c,
		0x34a,0x348,0x346,0x344,0x342,0x340,0x33e,0x33c,
		0x33a,0x338,0x336,0x334,0x332,0x330,0x32e,0x32d,
		0x32b,0x329,0x327,0x325,0x323,0x321,0x31f,0x31d,
		0x31b,0x319,0x317,0x315,0x313,0x311,0x30f,0x30d,
		0x30b,0x309,0x307,0x305,0x303,0x302,0x300,0x2fe,
		0x2fc,0x2fa,0x2f8,0x2f6,0x2f4,0x2f2,0x2f0,0x2ee,
		0x2ec,0x2ea,0x2e8,0x2e6,0x2e4,0x2e2,0x2e0,0x2de,
		0x2dc,0x2da,0x2d9,0x2d7,0x2d5,0x2d3,0x2d1,0x2cf,
		0x2cd,0x2cb,0x2c9,0x2c7,0x2c5,0x2c3,0x2c1,0x2bf,
		0x2bd,0x2bb,0x2b9,0x2b7,0x2b5,0x2b3,0x2b1,0x2b0,
		0x2ae,0x2ac,0x2aa,0x2a8,0x2a6,0x2a4,0x2a2,0x2a0,
		0x29e,0x29c,0x29a,0x298,0x296,0x294,0x292,0x290,
		0x28e,0x28c,0x28a,0x288,0x286,0x285,0x283,0x281,
		0x27f,0x27d,0x27b,0x279,0x277,0x275,0x273,0x271,
		0x26f,0x26d,0x26b,0x269,0x267,0x265,0x263,0x261,
		0x25f,0x25d,0x25c,0x25a,0x258,0x256,0x254,0x252,
		0x250,0x24e,0x24c,0x24a,0x248,0x246,0x244,0x242,
		0x240,0x23e,0x23c,0x23a,0x238,0x236,0x234,0x233,
		0x231,0x22f,0x22d,0x22b,0x229,0x227,0x225,0x223,
		0x221,0x21f,0x21d,0x21b,0x219,0x217,0x215,0x213,
		0x211,0x20f,0x20d,0x20b,0x209,0x208,0x206,0x204,
		0x202,0x200,0x1fe,0x1fc,0x1fa,0x1f8,0x1f6,0x1f4,
		0x1f2,0x1f0,0x1ee,0x1ec,0x1ea,0x1e8,0x1e6,0x1e4,
		0x1e2,0x1e0,0x1df,0x1dd,0x1db,0x1d9,0x1d7,0x1d5,
		0x1d3,0x1d1,0x1cf,0x1cd,0x1cb,0x1c9,0x1c7,0x1c5,
		0x1c3,0x1c1,0x1bf,0x1bd,0x1bb,0x1b9,0x1b7,0x1b6,
		0x1b4,0x1b2,0x1b0,0x1ae,0x1ac,0x1aa,0x1a8,0x1a6,
		0x1a4,0x1a2,0x1a0,0x19e,0x19c,0x19a,0x198,0x196,
		0x194,0x192,0x190,0x18e,0x18c,0x18b,0x189,0x187,
		0x185,0x183,0x181,0x17f,0x17d,0x17b,0x179,0x177,
		0x175,0x173,0x171,0x16f,0x16d,0x16b,0x169,0x167,
		0x165,0x163,0x162,0x160,0x15e,0x15c,0x15a,0x158,
		0x156,0x154,0x152,0x150,0x14e,0x14c,0x14a,0x148,
		0x146,0x144,0x142,0x140,0x13e,0x13c,0x13a,0x139,
		0x137,0x135,0x133,0x131,0x12f,0x12d,0x12b,0x129,
		0x127,0x125,0x123,0x121,0x11f,0x11d,0x11b,0x119,
		0x117,0x115,0x113,0x111,0x10f,0x10e,0x10c,0x10a,
		0x108,0x106,0x104,0x102,0x100,0xfe,0xfc,0xfa,
		0xf8,0xf6,0xf4,0xf2,0xf0,0xee,0xec,0xea,
		0xe8,0xe6,0xe5,0xe3,0xe1,0xdf,0xdd,0xdb,
		0xd9,0xd7,0xd5,0xd3,0xd1,0xcf,0xcd,0xcb,
		0xc9,0xc7,0xc5,0xc3,0xc1,0xbf,0xbd,0xbc,
		0xba,0xb8,0xb6,0xb4,0xb2,0xb0,0xae,0xac,
		0xaa,0xa8,0xa6,0xa4,0xa2,0xa0,0x9e,0x9c,
		0x9a,0x98,0x96,0x94,0x92,0x91,0x8f,0x8d,
		0x8b,0x89,0x87,0x85,0x83,0x81,0x7f,0x7d,
		0x7b,0x79,0x77,0x75,0x73,0x71,0x6f,0x6d,
		0x6b,0x69,0x68,0x66,0x64,0x62,0x60,0x5e,
		0x5c,0x5a,0x58,0x56,0x54,0x52,0x50,0x4e,
		0x4c,0x4a,0x48,0x46,0x44,0x42,0x40,0x3f,
		0x3d,0x3b,0x39,0x37,0x35,0x33,0x31,0x2f,
		0x2d,0x2b,0x29,0x27,0x25,0x23,0x21,0x1f,
		0x1d,0x1b,0x19,0x17,0x15,0x14,0x12,0x10,
		0xe,0xc,0xa,0x8,0x6,0x4,0x2,0x0,
};


#endif /* INC_WAVETABLE_H_ */