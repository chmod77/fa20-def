
/* WARNING: Removing unreachable block (ram,0x00082df8) */
/* WARNING: Removing unreachable block (ram,0x00082d40) */
/* WARNING: Removing unreachable block (ram,0x00082e78) */

void FUN_00082c50(undefined1 param_1,char param_2,ushort param_3,byte param_4,byte param_5,
                 uint param_6,byte param_7,char param_8,char param_9,char param_10,char param_11,
                 uint param_12,ushort param_13,ushort param_14,char param_15,char param_16,
                 char param_17,char param_18,undefined1 *param_19)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  undefined *puVar7;
  char cVar8;
  
  bVar2 = true;
  puVar7 = (undefined *)(param_12 & 0xffff);
  if ((param_15 == '\0') && ((param_16 == '\0' || (param_17 == '\0')))) {
    bVar2 = false;
  }
  bVar3 = false;
  if ((0xfc < param_4) && (0xfe < param_7)) {
    bVar3 = true;
  }
  bVar1 = false;
  if ((0xfffe < param_13) && (0xfffe < param_14)) {
    bVar1 = true;
  }
  if (((!bVar1) || (!bVar2)) || (cVar6 = '\x01', param_18 == '\0')) {
    cVar6 = DAT_fffebb2d;
  }
  if (((!bVar1) || (!bVar2)) && ((param_18 != '\0' && (puVar7 < (undefined *)0x10000)))) {
    cVar6 = '\0';
  }
  DAT_fffebb2e = &LAB_00002800 + (param_6 & 0xff) * 0x100 <=
                 (undefined1 *)((param_12 & 0xffff) + 0xd4d);
  if (DAT_fffebb28 == '\0') {
    uVar4 = 0x7a00;
  }
  else {
    uVar4 = 0x7800;
  }
  cVar8 = '\x01';
  if ((uVar4 >= param_3) && (cVar8 = DAT_fffebb30, puVar7 <= &UNK_00009ab2)) {
    cVar8 = '\0';
  }
  cVar5 = '\x01';
  if (!bVar3) {
    cVar5 = DAT_fffebb2a;
  }
  if ((!bVar3) && (puVar7 < &UNK_00009ab0)) {
    cVar5 = '\0';
  }
  DAT_fffebb2d = cVar6;
  DAT_fffebb30 = cVar8;
  if (param_2 == '\x03') {
    if (param_10 == '\0') {
      if (cVar6 == '\0') {
        if ((cVar8 != '\0') || (DAT_fffebb2e)) {
          *param_19 = 0xb;
        }
        else if (cVar5 == '\0') {
          if (param_9 == '\0') {
            if (param_5 < 2) {
              if (param_8 == '\0') {
                if (param_11 == '\0') {
                  *param_19 = param_1;
                }
                else {
                  *param_19 = 0x18;
                }
              }
              else {
                *param_19 = 0x14;
              }
            }
            else {
              *param_19 = 0x17;
            }
          }
          else {
            *param_19 = 0x16;
          }
        }
        else {
          *param_19 = 0xc;
        }
      }
      else {
        *param_19 = 0x1b;
      }
    }
    else {
      *param_19 = 0x19;
    }
  }
  else {
    *param_19 = 1;
  }
  DAT_fffebb2c = puVar7 < (undefined *)0x10000;
  DAT_fffebb29 = 0xfffe < param_13;
  DAT_fffebb2b = 0xfffe < param_14;
  DAT_fffebb28 = uVar4 < param_3;
  DAT_fffebb2a = cVar5;
  DAT_fffebb2f = puVar7 < &UNK_00009ab0;
  return;
}

