
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144ef2(void)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  
  bVar2 = (_DAT_fffff75e & 0x10) == 0;
  if (bVar2) {
    DAT_ffff1e00 = DAT_ffff1e00 & 0xf7;
  }
  else {
    DAT_ffff1e00 = DAT_ffff1e00 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e00 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e00 & 2;
  }
  bVar3 = DAT_ffff1e00 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e00 & 0xfd;
  }
  DAT_ffff1e00 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e00 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 1) == 0;
  if (bVar2) {
    DAT_ffff1e02 = DAT_ffff1e02 & 0xf7;
  }
  else {
    DAT_ffff1e02 = DAT_ffff1e02 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e02 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e02 & 2;
  }
  bVar3 = DAT_ffff1e02 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e02 & 0xfd;
  }
  DAT_ffff1e02 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e02 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x400) == 0;
  if (bVar2) {
    DAT_ffff1e04 = DAT_ffff1e04 & 0xf7;
  }
  else {
    DAT_ffff1e04 = DAT_ffff1e04 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e04 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e04 & 2;
  }
  bVar3 = DAT_ffff1e04 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e04 & 0xfd;
  }
  DAT_ffff1e04 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e04 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x200) != 0;
  if (bVar2) {
    DAT_ffff1e06 = DAT_ffff1e06 & 0xf7;
  }
  else {
    DAT_ffff1e06 = DAT_ffff1e06 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e06 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e06 & 2;
  }
  bVar3 = DAT_ffff1e06 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e06 & 0xfd;
  }
  DAT_ffff1e06 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e06 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 4) != 0;
  if (bVar2) {
    DAT_ffff1e08 = DAT_ffff1e08 & 0xf7;
  }
  else {
    DAT_ffff1e08 = DAT_ffff1e08 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e08 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e08 & 2;
  }
  bVar3 = DAT_ffff1e08 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e08 & 0xfd;
  }
  DAT_ffff1e08 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e08 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x100) == 0;
  if (bVar2) {
    DAT_ffff1dfc = DAT_ffff1dfc & 0xf7;
  }
  else {
    DAT_ffff1dfc = DAT_ffff1dfc | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1dfc & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1dfc & 2;
  }
  bVar3 = DAT_ffff1dfc | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1dfc & 0xfd;
  }
  DAT_ffff1dfc = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1dfc = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x8000) != 0;
  if (bVar2) {
    DAT_ffff1e0a = DAT_ffff1e0a & 0xf7;
  }
  else {
    DAT_ffff1e0a = DAT_ffff1e0a | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e0a & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e0a & 2;
  }
  bVar3 = DAT_ffff1e0a | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e0a & 0xfd;
  }
  DAT_ffff1e0a = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e0a = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 2) != 0;
  if (bVar2) {
    DAT_ffff1e0c = DAT_ffff1e0c & 0xf7;
  }
  else {
    DAT_ffff1e0c = DAT_ffff1e0c | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e0c & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e0c & 2;
  }
  bVar3 = DAT_ffff1e0c | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e0c & 0xfd;
  }
  DAT_ffff1e0c = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e0c = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x40) != 0;
  if (bVar2) {
    DAT_ffff1e0e = DAT_ffff1e0e & 0xf7;
  }
  else {
    DAT_ffff1e0e = DAT_ffff1e0e | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e0e & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e0e & 2;
  }
  bVar3 = DAT_ffff1e0e | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e0e & 0xfd;
  }
  DAT_ffff1e0e = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e0e = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 1) == 0;
  if (bVar2) {
    DAT_ffff1e10 = DAT_ffff1e10 & 0xf7;
  }
  else {
    DAT_ffff1e10 = DAT_ffff1e10 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e10 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e10 & 2;
  }
  bVar3 = DAT_ffff1e10 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e10 & 0xfd;
  }
  DAT_ffff1e10 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e10 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x10) == 0;
  if (bVar2) {
    DAT_ffff1e12 = DAT_ffff1e12 & 0xf7;
  }
  else {
    DAT_ffff1e12 = DAT_ffff1e12 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e12 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e12 & 2;
  }
  bVar3 = DAT_ffff1e12 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e12 & 0xfd;
  }
  DAT_ffff1e12 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e12 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 8) == 0;
  if (bVar2) {
    DAT_ffff1e14 = DAT_ffff1e14 & 0xf7;
  }
  else {
    DAT_ffff1e14 = DAT_ffff1e14 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e14 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e14 & 2;
  }
  bVar3 = DAT_ffff1e14 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e14 & 0xfd;
  }
  DAT_ffff1e14 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e14 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x400) != 0;
  if (bVar2) {
    DAT_ffff1e24 = DAT_ffff1e24 & 0xf7;
  }
  else {
    DAT_ffff1e24 = DAT_ffff1e24 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e24 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e24 & 2;
  }
  bVar3 = DAT_ffff1e24 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e24 & 0xfd;
  }
  DAT_ffff1e24 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e24 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x400) != 0;
  if (bVar2) {
    DAT_ffff1e18 = DAT_ffff1e18 & 0xf7;
  }
  else {
    DAT_ffff1e18 = DAT_ffff1e18 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e18 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e18 & 2;
  }
  bVar3 = DAT_ffff1e18 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e18 & 0xfd;
  }
  DAT_ffff1e18 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e18 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 2) == 0;
  if (bVar2) {
    DAT_ffff1e1a = DAT_ffff1e1a & 0xf7;
  }
  else {
    DAT_ffff1e1a = DAT_ffff1e1a | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e1a & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e1a & 2;
  }
  bVar3 = DAT_ffff1e1a | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e1a & 0xfd;
  }
  DAT_ffff1e1a = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e1a = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x100) != 0;
  if (bVar2) {
    DAT_ffff1e1c = DAT_ffff1e1c & 0xf7;
  }
  else {
    DAT_ffff1e1c = DAT_ffff1e1c | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e1c & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e1c & 2;
  }
  bVar3 = DAT_ffff1e1c | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e1c & 0xfd;
  }
  DAT_ffff1e1c = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e1c = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff74e & 0x40) != 0;
  if (bVar2) {
    DAT_ffff1e1e = DAT_ffff1e1e & 0xf7;
  }
  else {
    DAT_ffff1e1e = DAT_ffff1e1e | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e1e & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e1e & 2;
  }
  bVar3 = DAT_ffff1e1e | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e1e & 0xfd;
  }
  DAT_ffff1e1e = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e1e = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x20) != 0;
  if (bVar2) {
    DAT_ffff1e20 = DAT_ffff1e20 & 0xf7;
  }
  else {
    DAT_ffff1e20 = DAT_ffff1e20 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e20 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e20 & 2;
  }
  bVar3 = DAT_ffff1e20 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e20 & 0xfd;
  }
  DAT_ffff1e20 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e20 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff72c & 0x800) != 0;
  if (bVar2) {
    DAT_ffff1e22 = DAT_ffff1e22 & 0xf7;
  }
  else {
    DAT_ffff1e22 = DAT_ffff1e22 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e22 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e22 & 2;
  }
  bVar3 = DAT_ffff1e22 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e22 & 0xfd;
  }
  DAT_ffff1e22 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e22 = bVar3 & 0xfb;
  }
  bVar2 = (_DAT_fffff754 & 0x800) == 0;
  if (bVar2) {
    DAT_ffff1e26 = DAT_ffff1e26 & 0xf7;
  }
  else {
    DAT_ffff1e26 = DAT_ffff1e26 | 8;
  }
  bVar2 = !bVar2;
  if (-(uint)!bVar2 == -(uint)((DAT_ffff1e26 & 4) == 0)) {
    bVar1 = bVar2 << 3;
  }
  else {
    bVar1 = DAT_ffff1e26 & 2;
  }
  bVar3 = DAT_ffff1e26 | 2;
  if (bVar1 == 0) {
    bVar3 = DAT_ffff1e26 & 0xfd;
  }
  DAT_ffff1e26 = bVar3 | 4;
  if (!bVar2) {
    DAT_ffff1e26 = bVar3 & 0xfb;
  }
  return;
}

