//==--------- atomic_smoke_scalar_off.cpp  - DPC++ ESIMD on-device test-----==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
// This test checks LSC atomic operations.
//===----------------------------------------------------------------------===//
// REQUIRES: gpu-intel-pvc || gpu-intel-dg2
// RUN: %{build} -o %t.out
// RUN: %{run} %t.out
//
// scalar offset variant of the test - uses scalar offsets.

#define USE_SCALAR_OFFSET

#include "atomic_smoke.cpp"
