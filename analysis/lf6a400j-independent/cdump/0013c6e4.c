
/* WARNING: Removing unreachable block (ram,0x0013c75e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013c6e4(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint in_sr;
  
  iVar2 = FUN_0013d1a0(1);
  in_sr = in_sr & 0xfffffffe;
  if (iVar2 == 0) {
    iVar2 = FUN_0013d23a(param_1);
    if ((iVar2 == 0) != 0) {
      cVar1 = *(char *)((&DAT_0016976c)[(short)param_1 * 4] + 3);
      if (cVar1 != '\0') {
        *(char *)((&DAT_0016976c)[(short)param_1 * 4] + 3) = cVar1 + -1;
        iVar3 = FUN_0013d3fa(&DAT_ffff262c,param_1,(int)(char)(&DAT_0016976a)[(short)param_1 * 0x10]
                            );
        if (iVar3 == 0) {
          return iVar2;
        }
        if ((in_sr & 0xf0) != 0 || _DAT_ffff2634 != 0) {
          return iVar2;
        }
        if (*(char *)(_DAT_ffff2644 + 1) != '\0') {
          return iVar2;
        }
        _DAT_ffff2634 = 0x100;
        FUN_0013d754(&DAT_ffff262c,in_sr & 0xfffffffe | (uint)(iVar2 == 0),_DAT_ffff2644);
        return iVar2;
      }
      iVar2 = 4;
    }
  }
  FUN_0013d054(iVar2,1,_DAT_ffff2634);
  return iVar2;
}

