
/* WARNING: Removing unreachable block (ram,0x0003e668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003e524(void)

{
  char cVar1;
  uint uVar2;
  
  if (DAT_fffefa43 == '\0') {
    DAT_fffefa45 = 1;
    DAT_fffefa44 = 0;
    DAT_fffef3de = 0;
    FUN_0010dcd0();
    FUN_0010e744();
    FUN_0010e33c();
    FUN_0010ebb4();
    FUN_0012daf0();
    DAT_fffefa46 = 0x10;
    FUN_001128d0();
    FUN_0010d99c();
    DAT_fffefa46 = 0;
    FUN_00101018();
    DAT_fffefa45 = 0;
    FUN_0006efe8();
    FUN_0006e840();
    if (((int)DAT_fffef558 & 0x80U) != 0) {
      _DAT_ffff350a = _DAT_ffff3932;
      _DAT_ffff350c = _DAT_ffff3934;
      _DAT_ffff350e = (undefined2)((uint)_DAT_ffff3b20 >> 0x10);
      _DAT_ffff3510 = (undefined2)_DAT_ffff3b20;
      _DAT_ffff3512 = (undefined2)((uint)_DAT_ffff3b1c >> 0x10);
      _DAT_ffff3514 = (undefined2)_DAT_ffff3b1c;
      _DAT_ffff3516 = (undefined2)((uint)_DAT_ffff3b28 >> 0x10);
      _DAT_ffff3518 = (undefined2)_DAT_ffff3b28;
      _DAT_ffff351a = (undefined2)((uint)_DAT_ffff3b24 >> 0x10);
      _DAT_ffff351c = (undefined2)_DAT_ffff3b24;
      _DAT_ffff351e = (ushort)DAT_ffff36c4 * 0x100 + (ushort)DAT_ffff36cb;
      _DAT_ffff3540 = _DAT_ffff3918;
      FUN_001403b4(5,0x13);
      FUN_001403b4(0x20,1);
    }
    FUN_0006044c();
    FUN_000607ba();
    if ((((2 < DAT_ffff3707) && (2 < DAT_ffff3702)) && (2 < DAT_ffff3701)) && (0x27 < DAT_ffff370a))
    {
      _DAT_ffff316c = 0;
      DAT_ffff316e = 0;
      for (uVar2 = 0; (uVar2 & 0xffff) < 0x348; uVar2 = uVar2 + 1) {
        uVar2 = uVar2 & 0xffff;
        *(byte *)(uVar2 - 0xce90) = *(byte *)(uVar2 - 0xce90) & 0xf7;
      }
      FUN_00060f24();
    }
    DAT_fffefa43 = -1;
  }
  _DAT_ffff2fd0 = 0;
  DAT_fffef3fc = DAT_fffef3fc & 0x1f;
  DAT_fffef498 = DAT_fffef498 & 0xf0;
  DAT_ffff34b8 = DAT_ffff34b8 & 0x5f;
  if (((int)DAT_fffef558 & 0x80U) != 0) {
    cVar1 = FUN_00140424(0,0x10e);
    if (cVar1 == '\0') {
      DAT_ffff2fe1 = DAT_ffff2fe1 | 1;
      FUN_00151288(0);
      return;
    }
    return;
  }
  FUN_00001550(0xf0);
  _DAT_ffff3b68 = FUN_0004a5c2(&DAT_ffff2f80);
  FUN_0000073c();
  return;
}

