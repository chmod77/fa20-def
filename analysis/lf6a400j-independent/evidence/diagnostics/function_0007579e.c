
void FUN_0007579e(void)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcStack_14;
  char *pcStack_10;
  
  pcVar2 = DAT_00075950;
  uVar6 = (uint)(byte)DAT_00075958[6];
  bVar1 = false;
  if (((uVar6 == 0) || ((uint)*DAT_0007595c != uVar6 + 7)) && ((uVar6 != 0 || (*DAT_0007595c != 8)))
     ) {
    *DAT_00075950 = '\x7f';
    pcVar2[1] = '=';
    pcVar2[2] = '\x13';
  }
  else {
    if (((int)uVar6 <= (int)DAT_00075900) && (DAT_00075958[1] == '\x14')) {
      pcStack_14 = (char *)(DAT_00075958[2] * 0x1000000 + (uint)(byte)DAT_00075958[3] * 0x10000 +
                            (uint)(byte)DAT_00075958[4] * 0x100 + (uint)(byte)DAT_00075958[5]);
      pcVar4 = pcStack_14;
      if (uVar6 != 0) {
        pcVar4 = pcStack_14 + (uVar6 - 1);
      }
      if ((((*(char **)PTR_DAT_00075960 <= pcStack_14) && (pcStack_14 < *(char **)PTR_DAT_00075964))
          && (*(char **)PTR_DAT_00075960 <= pcVar4)) && (pcVar4 < *(char **)PTR_DAT_00075964)) {
        if (((*DAT_0007594c == '\x01') || (*DAT_0007594c == '\x03')) || (*DAT_0007594c == '\x05')) {
          pcStack_10 = DAT_00075958 + 7;
          uVar3 = (*(code *)PTR_FUN_00075968)((int)DAT_00075902);
          for (uVar5 = 0; (uVar5 & 0xffff) < uVar6; uVar5 = (uVar5 & 0xffff) + 1) {
            *pcStack_14 = *pcStack_10;
            if ((*pcStack_14 != *pcStack_10) &&
               (*pcStack_14 = *pcStack_10, *pcStack_14 != *pcStack_10)) {
              bVar1 = true;
              break;
            }
            pcStack_10 = pcStack_10 + 1;
            pcStack_14 = pcStack_14 + 1;
          }
          (*(code *)PTR_FUN_00075968)(uVar3);
          pcVar2 = DAT_00075950;
          if (!bVar1) {
            for (uVar6 = 0; (uVar6 & 0xffff) < 7; uVar6 = uVar6 + 1) {
              uVar6 = uVar6 & 0xffff;
              pcVar2[uVar6] = DAT_00075958[uVar6];
            }
            *pcVar2 = *DAT_00075958 + '@';
            *DAT_00075954 = 7;
            return;
          }
          *DAT_00075950 = '\x7f';
          pcVar2[1] = '=';
          pcVar2[2] = 'r';
        }
        else {
          *DAT_00075950 = '\x7f';
          pcVar2[1] = '=';
          pcVar2[2] = '3';
        }
        goto LAB_000758f0;
      }
    }
    *DAT_00075950 = '\x7f';
    pcVar2[1] = '=';
    pcVar2[2] = '1';
  }
LAB_000758f0:
  *DAT_00075954 = 3;
  return;
}

