/* dumped in big endian order.
   use `mrbc -e` option for better performance on little endian CPU. */
#include <stdint.h>
extern const uint8_t ble_chk[];
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
ble_chk[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x34,0xb2,0x43,0x00,0x00,0x00,0xd3,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x00,0xb5,0x30,0x30,
0x30,0x30,0x00,0x00,0x00,0xad,0x00,0x01,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x13,
0x00,0x40,0x07,0x17,0x00,0x80,0x00,0x09,0x01,0x40,0x04,0x83,0x00,0x80,0x40,0xb2,
0x00,0xc0,0x02,0x99,0x00,0x80,0x00,0x06,0x01,0x00,0x00,0x3d,0x00,0x80,0x80,0xa0,
0x00,0xbf,0xff,0x83,0x00,0x80,0x00,0x0a,0x00,0x80,0x00,0x06,0x00,0x80,0xc0,0x20,
0x00,0x80,0x00,0x06,0x01,0x40,0x18,0x83,0x00,0x81,0x00,0xa0,0x00,0x80,0x00,0x07,
0x00,0xbf,0xf8,0x18,0x00,0x80,0x00,0x05,0x00,0x00,0x00,0x4a,0x00,0x00,0x00,0x01,
0x00,0x00,0x14,0x4c,0x45,0x44,0x20,0x43,0x68,0x61,0x6e,0x67,0x65,0x20,0x63,0x6f,
0x75,0x6e,0x74,0x20,0x31,0x30,0x00,0x00,0x00,0x00,0x05,0x00,0x02,0x24,0x64,0x00,
0x00,0x02,0x3d,0x3d,0x00,0x00,0x04,0x70,0x75,0x74,0x73,0x00,0x00,0x11,0x62,0x6c,
0x65,0x5f,0x70,0x72,0x6f,0x63,0x65,0x73,0x73,0x5f,0x65,0x76,0x65,0x6e,0x74,0x00,
0x00,0x08,0x73,0x6c,0x65,0x65,0x70,0x5f,0x6d,0x73,0x00,0x45,0x4e,0x44,0x00,0x00,
0x00,0x00,0x08,
};
