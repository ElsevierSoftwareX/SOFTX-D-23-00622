﻿/*
    SPDX-FileCopyrightText: 2019-2023 Jakub Stankowski <jakub.stankowski@put.poznan.pl>
    SPDX-License-Identifier: BSD-3-Clause
*/

#pragma once

#include "xCommonDefPMBB-CORE.h"

namespace PMBB_NAMESPACE {

//===============================================================================================================================================================================================================

class xPixelOpsSTD
{
public:
  //Image
  static void  Cvt          (uint16* restrict Dst, const uint8*  Src, int32 DstStride, int32 SrcStride, int32 Width   , int32 Height   );
  static void  Cvt          (uint8*  restrict Dst, const uint16* Src, int32 DstStride, int32 SrcStride, int32 Width   , int32 Height   );
  static void  Upsample     (uint16* restrict Dst, const uint16* Src, int32 DstStride, int32 SrcStride, int32 DstWidth, int32 DstHeight);
  static void  Downsample   (uint16* restrict Dst, const uint16* Src, int32 DstStride, int32 SrcStride, int32 DstWidth, int32 DstHeight);
  static void  CvtUpsample  (uint16* restrict Dst, const uint8*  Src, int32 DstStride, int32 SrcStride, int32 DstWidth, int32 DstHeight);
  static void  CvtDownsample(uint8*  restrict Dst, const uint16* Src, int32 DstStride, int32 SrcStride, int32 DstWidth, int32 DstHeight);
  static bool  CheckValues  (const uint16* Src, int32 Stride, int32 Width, int32 Height, int32 BitDepth);
  static bool  FindBroken   (const uint16* Src, int32 Stride, int32 Width, int32 Height, int32 BitDepth);
  static void  ConcealBroken(uint16* restrict Ptr, int32 Stride, int32 Width, int32 Height, int32 BitDepth);
  static void  ExtendMargin (uint16* Addr, int32 Stride, int32 Width, int32 Height, int32 Margin);
  static void  AOS4fromSOA3 (uint16* restrict DstABCD, const uint16* SrcA, const uint16* SrcB, const uint16* SrcC, uint16 ValueD, int32 DstStride, int32 SrcStride, int32 Width, int32 Height);
  static void  SOA3fromAOS4 (uint16* restrict DstA, uint16* restrict DstB, uint16* restrict DstC, const uint16* SrcABCD, int32 DstStride, int32 SrcStride, int32 Width, int32 Height);
  static int32 CountNonZero (const uint16* Src, int32 SrcStride, int32 Width, int32 Height);
};

//===============================================================================================================================================================================================================

} //end of namespace PMBB
