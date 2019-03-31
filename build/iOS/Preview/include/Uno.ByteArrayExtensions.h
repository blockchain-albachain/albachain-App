// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/ByteArrayExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Byte4;}}
namespace g{namespace Uno{struct ByteArrayExtensions;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{

// public static class ByteArrayExtensions :5
// {
uClassType* ByteArrayExtensions_typeof();
void ByteArrayExtensions__GetByte_fn(uArray* bytes, int32_t* offset, uint8_t* __retval);
void ByteArrayExtensions__GetDouble_fn(uArray* bytes, int32_t* offset, bool* littleEndian, double* __retval);
void ByteArrayExtensions__GetFloat_fn(uArray* bytes, int32_t* offset, bool* littleEndian, float* __retval);
void ByteArrayExtensions__GetInt_fn(uArray* bytes, int32_t* offset, bool* littleEndian, int32_t* __retval);
void ByteArrayExtensions__GetUInt_fn(uArray* bytes, int32_t* offset, bool* littleEndian, uint32_t* __retval);
void ByteArrayExtensions__ReverseBytes_fn(void** ptr, uint64_t* size);
void ByteArrayExtensions__Set_fn(uArray* bytes, int32_t* offset, uint8_t* value);
void ByteArrayExtensions__Set2_fn(uArray* bytes, int32_t* offset, ::g::Uno::Byte4* value);
void ByteArrayExtensions__Set3_fn(uArray* bytes, int32_t* offset, double* value, bool* littleEndian);
void ByteArrayExtensions__Set4_fn(uArray* bytes, int32_t* offset, float* value, bool* littleEndian);
void ByteArrayExtensions__Set5_fn(uArray* bytes, int32_t* offset, ::g::Uno::Float2* value, bool* littleEndian);
void ByteArrayExtensions__Set6_fn(uArray* bytes, int32_t* offset, ::g::Uno::Float3* value, bool* littleEndian);
void ByteArrayExtensions__Set8_fn(uArray* bytes, int32_t* offset, ::g::Uno::Float4* value, bool* littleEndian);
void ByteArrayExtensions__Set10_fn(uArray* bytes, int32_t* offset, int32_t* value, bool* littleEndian);
void ByteArrayExtensions__Set18_fn(uArray* bytes, int32_t* offset, int16_t* value, bool* littleEndian);
void ByteArrayExtensions__Set23_fn(uArray* bytes, int32_t* offset, uint16_t* value, bool* littleEndian);

struct ByteArrayExtensions : uObject
{
    static uint8_t GetByte(uArray* bytes, int32_t offset);
    static double GetDouble(uArray* bytes, int32_t offset, bool littleEndian);
    static float GetFloat(uArray* bytes, int32_t offset, bool littleEndian);
    static int32_t GetInt(uArray* bytes, int32_t offset, bool littleEndian);
    static uint32_t GetUInt(uArray* bytes, int32_t offset, bool littleEndian);
    static void ReverseBytes(void* ptr, uint64_t size);
    static void Set(uArray* bytes, int32_t offset, uint8_t value);
    static void Set2(uArray* bytes, int32_t offset, ::g::Uno::Byte4 value);
    static void Set3(uArray* bytes, int32_t offset, double value, bool littleEndian);
    static void Set4(uArray* bytes, int32_t offset, float value, bool littleEndian);
    static void Set5(uArray* bytes, int32_t offset, ::g::Uno::Float2 value, bool littleEndian);
    static void Set6(uArray* bytes, int32_t offset, ::g::Uno::Float3 value, bool littleEndian);
    static void Set8(uArray* bytes, int32_t offset, ::g::Uno::Float4 value, bool littleEndian);
    static void Set10(uArray* bytes, int32_t offset, int32_t value, bool littleEndian);
    static void Set18(uArray* bytes, int32_t offset, int16_t value, bool littleEndian);
    static void Set23(uArray* bytes, int32_t offset, uint16_t value, bool littleEndian);
};
// }

}} // ::g::Uno
