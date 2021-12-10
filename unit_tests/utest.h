#include <float.h>
#include <corecrt_math.h>

// float constants
const float fltnan = NAN;               // NaN
const float fpinfi = +INFINITY;         // positive infinity
const float fpnmax = +FLT_MAX;          // maximum positive normalized number
const float fpnmin = +FLT_MIN;          // minimum positive normalized number
const float fpdmax = +1.175494211e-38f; // maximum positive denormalized number
const float fpdmin = +FLT_TRUE_MIN;     // minimum positive denormalized number
const float fpzero = +0.0f;             // positive zero
const float fnzero = -0.0f;             // negative zero
const float fndmax = -FLT_TRUE_MIN;     // maximum negative denormalized number
const float fndmin = -1.175494211e-38f; // minimum negative denormalized number
const float fnnmax = -FLT_MIN;          // maximum negative normalize number
const float fnnmin = -FLT_MAX;          // minimum negative normalized number
const float fninfi = -INFINITY;         // negative infinity

// integer constants
const uint32_t ipnanmax = 0x7FFFFFFF;       // maximum positive NaN
const uint32_t ipnanmin = 0x7F800001;       // minimum positive NaN
const uint32_t ipinfi = 0x7F800000;         // positive infinity
const uint32_t ipnmax = 0x7F7FFFFF;         // maximum positive normalized number
const uint32_t ipnmin = 0x00800000;         // minimum positive normalized number
const uint32_t ipdmax = 0x007FFFFF;         // maximum positive denormalized number
const uint32_t ipdmin = 0x00000001;         // minimum positive denormalized number
const uint32_t ipzero = 0x00000000;         // positive zero
const uint32_t inzero = 0x80000000;         // negative zero
const uint32_t indmax = 0x80000001;         // maximum negative denormalized number
const uint32_t indmin = 0x807FFFFF;         // minimum negative denormalized number
const uint32_t innmax = 0x80800000;         // maximum negative normalize number
const uint32_t innmin = 0xFF7FFFFF;         // minimum negative normalized number
const uint32_t ininfi = 0xFF800000;         // negative infinity
const uint32_t innanmax = 0xFF800001;       // maximum negative NaN
const uint32_t innanmin = 0xFFFFFFFF;       // minimum negative NaN

// double constants
const double dblnan = NAN;
const double dpinfi = +HUGE_VAL;                  // positive infinity
const double dpnmax = +DBL_MAX;                   // maximum positive normalized number
const double dpnmin = +DBL_MIN;                   // minimum positive normalized number
const double dpdmax = +2.225073858507200889e-308; // maximum positive denormalized number
const double dpdmin = +DBL_TRUE_MIN;              // minimum positive denormalized number
const double dpzero = +0.0;                       // positive zero
const double dnzero = -0.0;                       // negative zero
const double dndmax = -DBL_TRUE_MIN;              // maximum negative denormalized number
const double dndmin = -2.225073858507200889e-308; // minimum negative denormalized number
const double dnnmax = -DBL_MIN;                   // maximum negative normalize number
const double dnnmin = -DBL_MAX;                   // minimum negative normalized number
const double dninfi = -HUGE_VAL;                  // negative infinity

// long integer constants
const uint64_t lpnanmax = 0x7FFFFFFFFFFFFFFF;    // maximum positive NaN
const uint64_t lpnanmin = 0x7FF0000000000001;    // minimum positive NaN
const uint64_t lpinfi = 0x7FF0000000000000;      // positive infinity
const uint64_t lpnmax = 0x7FEFFFFFFFFFFFFF;      // maximum positive normalized number
const uint64_t lpnmin = 0x0010000000000000;      // minimum positive normalized number
const uint64_t lpdmax = 0x000FFFFFFFFFFFFF;      // maximum positive denormalized number
const uint64_t lpdmin = 0x0000000000000001;      // minimum positive denormalized number
const uint64_t lpzero = 0x0000000000000000;      // positive zero
const uint64_t lnzero = 0x8000000000000000;      // negative zero
const uint64_t lndmax = 0x8000000000000001;      // maximum negative denormalized number
const uint64_t lndmin = 0x800FFFFFFFFFFFFF;      // minimum negative denormalized number
const uint64_t lnnmax = 0x8010000000000000;      // maximum negative normalize number
const uint64_t lnnmin = 0xFFEFFFFFFFFFFFFF;      // minimum negative normalized number
const uint64_t lninfi = 0xFFF0000000000000;      // negative infinity
const uint64_t lnnanmax = 0xFFF0000000000001;    // maximum negative NaN
const uint64_t lnnanmin = 0xFFFFFFFFFFFFFFFF;    // minimum negative NaN#pragma once
