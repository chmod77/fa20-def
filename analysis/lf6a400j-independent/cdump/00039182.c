
void FUN_00039182(void)

{
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) == 0) {
      if ((DAT_fffef310 & 4) != 0) {
        FUN_0014188c(9,DAT_ffff26ee & 1);
        FUN_0014188c(10,DAT_ffff26fa & 1);
        FUN_0014188c(0xb,DAT_ffff2706 & 1);
        FUN_0014188c(0xc,DAT_ffff2712 & 1);
        FUN_0014188c(0xd,DAT_ffff271e & 1);
      }
    }
    else {
      FUN_0014188c(0x10,DAT_ffff2742 & 1);
      FUN_0014188c(0x11,DAT_ffff274e & 1);
      FUN_0014188c(0x12,DAT_ffff275a & 1);
      FUN_0014188c(0x13,DAT_ffff2766 & 1);
      FUN_0014188c(0x14,DAT_ffff2772 & 1);
      FUN_0014188c(0x15,DAT_ffff277e & 1);
    }
  }
  else {
    FUN_0014188c(0xf,DAT_ffff2736 & 1);
    FUN_0014188c(0x10,DAT_ffff2742 & 1);
    FUN_0014188c(0x11,DAT_ffff274e & 1);
    FUN_0014188c(0x12,DAT_ffff275a & 1);
    FUN_0014188c(0x13,DAT_ffff2766 & 1);
  }
  FUN_0014188c(0x19,DAT_ffff27ae & 1);
  FUN_0014188c(0x1a,DAT_ffff27ba & 1);
  FUN_0014188c(0x1b,DAT_ffff27c6 & 1);
  FUN_0014188c(0x1c,DAT_ffff27d2 & 1);
  FUN_0014188c(0x1d,DAT_ffff27de & 1);
  return;
}

