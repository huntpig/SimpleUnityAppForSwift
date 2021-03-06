﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t595;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t570;
// System.Text.StringBuilder
struct StringBuilder_t308;

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m2690 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m2691 (Object_t * __this /* static, unused */, ASN1_t570 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m2319 (Object_t * __this /* static, unused */, ASN1_t570 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m2692 (Object_t * __this /* static, unused */, StringBuilder_t308 * ___sb, ASN1_t570 * ___entry, bool ___quotes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
