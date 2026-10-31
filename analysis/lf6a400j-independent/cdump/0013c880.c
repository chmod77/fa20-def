
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013c880(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  char cVar7;
  uint in_sr;
  uint uVar8;
  
  iVar2 = FUN_0013d1a0(0xd);
  uVar8 = in_sr & 0xfffffffe | (uint)(iVar2 == 0);
  if (((byte)uVar8 & 1) == 1) {
    iVar2 = FUN_0013d1be();
    uVar8 = uVar8 & 0xfffffffe | (uint)(iVar2 == 0);
    if (((byte)uVar8 & 1) == 1) {
      iVar2 = FUN_0013d1ee(param_1);
      uVar8 = uVar8 & 0xfffffffe | (uint)(iVar2 == 0);
      if (((byte)uVar8 & 1) == 1) {
        iVar2 = FUN_0013d522(param_1,0xd);
        if (iVar2 != 0) {
          iVar3 = FUN_0013d216(param_1);
          iVar2 = 0;
          if (iVar3 != 0) {
            iVar2 = 9;
            FUN_0013d118(9,0xd,_DAT_ffff2634,uVar8);
          }
          iVar3 = _DAT_ffff2640;
          cVar7 = (char)param_1;
          if (cVar7 == '\0') {
            _DAT_ffff2634 = 0x1000;
            return iVar2;
          }
          FUN_0013d5ac(param_1,0xd);
          uVar1 = *(undefined1 *)(iVar3 + 2);
          *(char *)(iVar3 + 2) = cVar7;
          *(undefined1 *)(cVar7 * 2 + -0xc2cc) = uVar1;
          *(undefined1 *)(cVar7 * 2 + -0xc2cb) = *(undefined1 *)(iVar3 + 1);
          cVar7 = *(char *)(cVar7 + _DAT_ffff267c);
          uVar8 = (uint)cVar7;
          if ((int)uVar8 <= (int)*(char *)(iVar3 + 1)) {
            return iVar2;
          }
          *(char *)(iVar3 + 1) = cVar7;
          psVar5 = (short *)(cVar7 * 8 + _DAT_ffff264c);
          psVar4 = *(short **)(psVar5 + 2);
          if (*psVar4 == -1) {
            psVar4[1] = *psVar5;
            *psVar4 = *psVar5;
            sVar6 = *psVar4;
            (&DAT_ffff265c)[(int)uVar8 >> 3] =
                 (&DAT_ffff265c)[(int)uVar8 >> 3] | (&DAT_0013d898)[uVar8 & 7];
          }
          else {
            if (*psVar4 == *psVar5) {
              *psVar4 = psVar5[1];
            }
            else {
              *psVar4 = *psVar4 + -1;
            }
            sVar6 = *psVar4;
          }
          *(undefined2 *)(sVar6 * 2 + -0xa090) = _DAT_ffff2630;
          if ((int)uVar8 < (int)DAT_ffff262c) {
            return iVar2;
          }
          DAT_ffff262c = cVar7;
          _DAT_ffff2632 = _DAT_ffff2630;
          return iVar2;
        }
        iVar2 = 1;
      }
    }
  }
  FUN_0013d054(iVar2,0xd,_DAT_ffff2634);
  return iVar2;
}

