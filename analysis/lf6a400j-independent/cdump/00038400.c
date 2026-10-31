
void FUN_00038400(void)

{
  if ((DAT_fffef310 & 8) == 0) {
    if ((DAT_fffef310 & 0x10) == 0) {
      if ((DAT_fffef310 & 4) != 0) {
        FUN_00141880(0,&DAT_ffff2683);
        FUN_00141880(1,&DAT_ffff268f);
        FUN_00141880(2,&DAT_ffff269b);
        FUN_00141880(3,&DAT_ffff26a7);
        FUN_00141880(4,&DAT_ffff26b3);
        FUN_00141880(5,&DAT_ffff26bf);
        FUN_00141880(6,&DAT_ffff26cb);
        FUN_00141880(7,&DAT_ffff26d7);
        FUN_00141880(8,&DAT_ffff26e3);
        FUN_00141880(9,&DAT_ffff26ef);
        FUN_00141880(10,&DAT_ffff26fb);
        FUN_00141880(0xb,&DAT_ffff2707);
        FUN_00141880(0xc,&DAT_ffff2713);
        FUN_00141880(0xd,&DAT_ffff271f);
      }
    }
    else {
      FUN_00141880(0,&DAT_ffff2683);
      FUN_00141880(1,&DAT_ffff268f);
      FUN_00141880(2,&DAT_ffff269b);
      FUN_00141880(3,&DAT_ffff26a7);
      FUN_00141880(4,&DAT_ffff26b3);
      FUN_00141880(0x1f,0xffff27f7);
      FUN_00141880(5,&DAT_ffff26bf);
      FUN_00141880(6,&DAT_ffff26cb);
      FUN_00141880(7,&DAT_ffff26d7);
      FUN_00141880(8,&DAT_ffff26e3);
      FUN_00141880(9,&DAT_ffff26ef);
      FUN_00141880(10,&DAT_ffff26fb);
      FUN_00141880(0xb,&DAT_ffff2707);
      FUN_00141880(0xc,&DAT_ffff2713);
      FUN_00141880(0xd,&DAT_ffff271f);
      FUN_00141880(0xe,&DAT_ffff272b);
      FUN_00141880(0xf,&DAT_ffff2737);
      FUN_00141880(0x10,&DAT_ffff2743);
      FUN_00141880(0x11,&DAT_ffff274f);
      FUN_00141880(0x12,&DAT_ffff275b);
      FUN_00141880(0x13,&DAT_ffff2767);
      FUN_00141880(0x14,&DAT_ffff2773);
      FUN_00141880(0x15,&DAT_ffff277f);
    }
  }
  else {
    FUN_00141880(0,&DAT_ffff2683);
    FUN_00141880(1,&DAT_ffff268f);
    FUN_00141880(2,&DAT_ffff269b);
    FUN_00141880(3,&DAT_ffff26a7);
    FUN_00141880(4,&DAT_ffff26b3);
    FUN_00141880(5,&DAT_ffff26bf);
    FUN_00141880(6,&DAT_ffff26cb);
    FUN_00141880(7,&DAT_ffff26d7);
    FUN_00141880(8,&DAT_ffff26e3);
    FUN_00141880(9,&DAT_ffff26ef);
    FUN_00141880(10,&DAT_ffff26fb);
    FUN_00141880(0xb,&DAT_ffff2707);
    FUN_00141880(0xc,&DAT_ffff2713);
    FUN_00141880(0xd,&DAT_ffff271f);
    FUN_00141880(0xe,&DAT_ffff272b);
    FUN_00141880(0xf,&DAT_ffff2737);
    FUN_00141880(0x10,&DAT_ffff2743);
    FUN_00141880(0x11,&DAT_ffff274f);
    FUN_00141880(0x12,&DAT_ffff275b);
    FUN_00141880(0x13,&DAT_ffff2767);
  }
  FUN_00141880(0x19,0xffff27af);
  FUN_00141880(0x1a,0xffff27bb);
  FUN_00141880(0x1b,0xffff27c7);
  FUN_00141880(0x1c,0xffff27d3);
  FUN_00141880(0x1d,0xffff27df);
  thunk_FUN_00052c40();
  thunk_FUN_00057452();
  return;
}

