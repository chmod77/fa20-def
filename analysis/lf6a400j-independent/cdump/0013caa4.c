
/* WARNING: Removing unreachable block (ram,0x0013cb62) */
/* WARNING: Removing unreachable block (ram,0x0013cb98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013caa4(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_sr;
  uint uVar6;
  
  iVar3 = FUN_0013d1a0(0xe);
  uVar6 = in_sr & 0xfffffffe | (uint)(iVar3 == 0);
  if (((byte)uVar6 & 1) == 1) {
    iVar3 = FUN_0013d1be();
    uVar6 = uVar6 & 0xfffffffe | (uint)(iVar3 == 0);
    if (((byte)uVar6 & 1) == 1) {
      iVar3 = FUN_0013d1ee(param_1);
      uVar6 = uVar6 & 0xfffffffe | (uint)(iVar3 == 0);
      if (((byte)uVar6 & 1) == 1) {
        iVar4 = FUN_0013d522(param_1,0xe);
        iVar2 = _DAT_ffff2640;
        if (iVar4 != 0) {
          if ((char)param_1 == '\0') {
            if ((_DAT_ffff2630 == _DAT_ffff2632) || (*(char *)(_DAT_ffff2644 + 1) != '\0')) {
              _DAT_ffff2634 = 0;
              return iVar3;
            }
            _DAT_ffff2634 = 0x100;
            iVar4 = _DAT_ffff2644;
          }
          else {
            FUN_0013d5ac(param_1,0xe);
            iVar5 = *(char *)(iVar2 + 2) * 2;
            *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(iVar5 + -0xc2cc);
            iVar4 = _DAT_ffff2644;
            if (*(char *)(iVar5 + -0xc2cb) == *(char *)(iVar2 + 1)) {
              return iVar3;
            }
            cVar1 = *(char *)(iVar2 + 1);
            *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar5 + -0xc2cb);
            _DAT_ffff2634 = _DAT_ffff2634 + 0x100;
            FUN_0013d468(&DAT_ffff262c,(int)cVar1);
            if (((*(char *)(iVar4 + 1) != '\0') || (_DAT_ffff2630 == _DAT_ffff2632)) ||
               ((_DAT_ffff2634 & 0x1000) != 0)) {
              _DAT_ffff2634 = _DAT_ffff2634 - 0x100;
              return iVar3;
            }
          }
          FUN_0013d754(&DAT_ffff262c,uVar6,iVar4);
          return iVar3;
        }
        iVar3 = 5;
      }
    }
  }
  FUN_0013d054(iVar3,0xe,_DAT_ffff2634);
  return iVar3;
}

