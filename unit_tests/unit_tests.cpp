#include "CppUnitTest.h"
#include "utest.h"
#include "../FloatConverter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittests
{
   TEST_CLASS(unittests)
   {
   public:

      // test real to hex
      // test float
      TEST_METHOD(asm_FloatToHex_positive_inf) { Assert::AreEqual(FloatConverter::float_to_uint(fpinfi), ipinfi); }
      TEST_METHOD(asm_FloatToHex_pos_norm_max) { Assert::AreEqual(FloatConverter::float_to_uint(fpnmax), ipnmax); }
      TEST_METHOD(asm_FloatToHex_pos_norm_min) { Assert::AreEqual(FloatConverter::float_to_uint(fpnmin), ipnmin); }
      TEST_METHOD(asm_FloatToHex_pos_denorm_max) { Assert::AreEqual(FloatConverter::float_to_uint(fpdmax), ipdmax); }
      TEST_METHOD(asm_FloatToHex_pos_denorm_min) { Assert::AreEqual(FloatConverter::float_to_uint(fpdmin), ipdmin); }
      TEST_METHOD(asm_FloatToHex_positive_zero) { Assert::AreEqual(FloatConverter::float_to_uint(fpzero), ipzero); }
      TEST_METHOD(asm_FloatToHex_negative_zero) { Assert::AreEqual(FloatConverter::float_to_uint(fnzero), inzero); }
      TEST_METHOD(asm_FloatToHex_neg_denorm_max) { Assert::AreEqual(FloatConverter::float_to_uint(fndmax), indmax); }
      TEST_METHOD(asm_FloatToHex_neg_denorm_min) { Assert::AreEqual(FloatConverter::float_to_uint(fndmin), indmin); }
      TEST_METHOD(asm_FloatToHex_neg_norm_max) { Assert::AreEqual(FloatConverter::float_to_uint(fnnmax), innmax); }
      TEST_METHOD(asm_FloatToHex_neg_norm_min) { Assert::AreEqual(FloatConverter::float_to_uint(fnnmin), innmin); }
      TEST_METHOD(asm_FloatToHex_negative_inf) { Assert::AreEqual(FloatConverter::float_to_uint(fninfi), ininfi); }

      // test double
      TEST_METHOD(asm_doubleToHex_positive_inf) { Assert::AreEqual(FloatConverter::double_to_uint(dpinfi), lpinfi); }
      TEST_METHOD(asm_doubleToHex_pos_norm_max) { Assert::AreEqual(FloatConverter::double_to_uint(dpnmax), lpnmax); }
      TEST_METHOD(asm_doubleToHex_pos_norm_min) { Assert::AreEqual(FloatConverter::double_to_uint(dpnmin), lpnmin); }
      TEST_METHOD(asm_doubleToHex_pos_denorm_max) { Assert::AreEqual(FloatConverter::double_to_uint(dpdmax), lpdmax); }
      TEST_METHOD(asm_doubleToHex_pos_denorm_min) { Assert::AreEqual(FloatConverter::double_to_uint(dpdmin), lpdmin); }
      TEST_METHOD(asm_doubleToHex_positive_zero) { Assert::AreEqual(FloatConverter::double_to_uint(dpzero), lpzero); }
      TEST_METHOD(asm_doubleToHex_negative_zero) { Assert::AreEqual(FloatConverter::double_to_uint(dnzero), lnzero); }
      TEST_METHOD(asm_doubleToHex_neg_denorm_max) { Assert::AreEqual(FloatConverter::double_to_uint(dndmax), lndmax); }
      TEST_METHOD(asm_doubleToHex_neg_denorm_min) { Assert::AreEqual(FloatConverter::double_to_uint(dndmin), lndmin); }
      TEST_METHOD(asm_doubleToHex_neg_norm_max) { Assert::AreEqual(FloatConverter::double_to_uint(dnnmax), lnnmax); }
      TEST_METHOD(asm_doubleToHex_neg_norm_min) { Assert::AreEqual(FloatConverter::double_to_uint(dnnmin), lnnmin); }
      TEST_METHOD(asm_doubleToHex_negative_inf) { Assert::AreEqual(FloatConverter::double_to_uint(dninfi), lninfi); }

      // test hex to real
      // test float
      TEST_METHOD(asm_HexToFloat_pos_NaN_max) { Assert::IsTrue(isnan(FloatConverter::uint_to_float(ipnanmax))); }
      TEST_METHOD(asm_HexToFloat_pos_NaN_min) { Assert::IsTrue(isnan(FloatConverter::uint_to_float(ipnanmin))); }
      TEST_METHOD(asm_HexToFloat_positive_inf) { Assert::AreEqual(FloatConverter::uint_to_float(ipinfi), fpinfi); }
      TEST_METHOD(asm_HexToFloat_pos_norm_max) { Assert::AreEqual(FloatConverter::uint_to_float(ipnmax), fpnmax); }
      TEST_METHOD(asm_HexToFloat_pos_norm_min) { Assert::AreEqual(FloatConverter::uint_to_float(ipnmin), fpnmin); }
      TEST_METHOD(asm_HexToFloat_pos_denorm_max) { Assert::AreEqual(FloatConverter::uint_to_float(ipdmax), fpdmax); }
      TEST_METHOD(asm_HexToFloat_pos_denorm_min) { Assert::AreEqual(FloatConverter::uint_to_float(ipdmin), fpdmin); }
      TEST_METHOD(asm_HexToFloat_positive_zero) { Assert::AreEqual(FloatConverter::uint_to_float(ipzero), fpzero); }
      TEST_METHOD(asm_HexToFloat_negative_zero) { Assert::AreEqual(FloatConverter::uint_to_float(inzero), fnzero); }
      TEST_METHOD(asm_HexToFloat_neg_denorm_max) { Assert::AreEqual(FloatConverter::uint_to_float(indmax), fndmax); }
      TEST_METHOD(asm_HexToFloat_neg_denorm_min) { Assert::AreEqual(FloatConverter::uint_to_float(indmin), fndmin); }
      TEST_METHOD(asm_HexToFloat_neg_norm_max) { Assert::AreEqual(FloatConverter::uint_to_float(innmax), fnnmax); }
      TEST_METHOD(asm_HexToFloat_neg_norm_min) { Assert::AreEqual(FloatConverter::uint_to_float(innmin), fnnmin); }
      TEST_METHOD(asm_HexToFloat_negative_inf) { Assert::AreEqual(FloatConverter::uint_to_float(ininfi), fninfi); }
      TEST_METHOD(asm_HexToFloat_neg_NaN_max) { Assert::IsTrue(isnan(FloatConverter::uint_to_float(innanmax))); }
      TEST_METHOD(asm_HexToFloat_neg_NaN_min) { Assert::IsTrue(isnan(FloatConverter::uint_to_float(innanmin))); }


      // test double
      TEST_METHOD(asm_HexToDouble_pos_NaN_max) { Assert::IsTrue(isnan(FloatConverter::uint_to_double(lpnanmax))); }
      TEST_METHOD(asm_HexToDouble_pos_NaN_min) { Assert::IsTrue(isnan(FloatConverter::uint_to_double(lpnanmin))); }
      TEST_METHOD(asm_HexToDouble_positive_inf) { Assert::AreEqual(FloatConverter::uint_to_double(lpinfi), dpinfi); }
      TEST_METHOD(asm_HexToDouble_pos_norm_max) { Assert::AreEqual(FloatConverter::uint_to_double(lpnmax), dpnmax); }
      TEST_METHOD(asm_HexToDouble_pos_norm_min) { Assert::AreEqual(FloatConverter::uint_to_double(lpnmin), dpnmin); }
      TEST_METHOD(asm_HexToDouble_pos_denorm_max) { Assert::AreEqual(FloatConverter::uint_to_double(lpdmax), dpdmax); }
      TEST_METHOD(asm_HexToDouble_pos_denorm_min) { Assert::AreEqual(FloatConverter::uint_to_double(lpdmin), dpdmin); }
      TEST_METHOD(asm_HexToDouble_positive_zero) { Assert::AreEqual(FloatConverter::uint_to_double(lpzero), dpzero); }
      TEST_METHOD(asm_HexToDouble_negative_zero) { Assert::AreEqual(FloatConverter::uint_to_double(lnzero), dnzero); }
      TEST_METHOD(asm_HexToDouble_neg_denorm_max) { Assert::AreEqual(FloatConverter::uint_to_double(lndmax), dndmax); }
      TEST_METHOD(asm_HexToDouble_neg_denorm_min) { Assert::AreEqual(FloatConverter::uint_to_double(lndmin), dndmin); }
      TEST_METHOD(asm_HexToDouble_neg_norm_max) { Assert::AreEqual(FloatConverter::uint_to_double(lnnmax), dnnmax); }
      TEST_METHOD(asm_HexToDouble_neg_norm_min) { Assert::AreEqual(FloatConverter::uint_to_double(lnnmin), dnnmin); }
      TEST_METHOD(asm_HexToDouble_negative_inf) { Assert::AreEqual(FloatConverter::uint_to_double(lninfi), dninfi); }
      TEST_METHOD(asm_HexToDouble_neg_NaN_max) { Assert::IsTrue(isnan(FloatConverter::uint_to_double(lnnanmax))); }
      TEST_METHOD(asm_HexToDouble_neg_NaN_min) { Assert::IsTrue(isnan(FloatConverter::uint_to_double(lnnanmin))); }

   };
}
