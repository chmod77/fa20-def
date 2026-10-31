
/* WARNING: Removing unreachable block (ram,0x000acd42) */

void FUN_000acc88(char param_1,ushort param_2,ushort param_3,char param_4,char param_5,
                 ushort param_6,char param_7,char param_8,char param_9,char param_10,char param_11,
                 char param_12,char param_13,char param_14,ushort param_15,char param_16,
                 char param_17,char param_18,undefined1 *param_19,char *param_20)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  
  if (param_1 != '\0') {
    uVar8 = param_3 + 0x200;
    if (uVar8 < param_3) {
      uVar8 = 0xffff;
    }
    uVar3 = param_3 + 0x100;
    if (uVar3 < param_3) {
      uVar3 = 0xffff;
    }
    if ((param_2 < param_3) || (cVar4 = '\x01', param_4 != '\0')) {
      cVar4 = DAT_fffec514;
    }
    if (param_5 != '\0') {
      cVar4 = '\0';
    }
    if ((cVar4 != '\0') || (DAT_fffec50d = '\x01', param_6 < 0xce)) {
      DAT_fffec50d = DAT_fffec50e;
    }
    if (param_5 != '\0') {
      DAT_fffec50d = '\0';
    }
    cVar5 = '\x01';
    if (param_2 < uVar8) {
      cVar5 = DAT_fffec511;
    }
    if (param_5 != '\0') {
      cVar5 = '\0';
    }
    if ((cVar5 == '\0') || (cVar7 = '\x01', uVar3 <= param_2)) {
      cVar7 = DAT_fffec510;
    }
    if (param_5 != '\0') {
      cVar7 = '\0';
    }
    if ((param_12 != '\0') || (cVar1 = '\x01', param_4 != '\0')) {
      cVar1 = DAT_fffec50f;
    }
    if (param_4 != '\0') {
      cVar1 = '\0';
    }
    cVar2 = '\x01';
    if (param_2 < param_3) {
      cVar2 = DAT_fffec512;
    }
    if (param_5 != '\0') {
      cVar2 = '\0';
    }
    if ((cVar2 == '\0') || (cVar6 = '\x01', param_2 >= param_3)) {
      cVar6 = DAT_fffec513;
    }
    if (param_5 != '\0') {
      cVar6 = '\0';
    }
    DAT_fffec50e = DAT_fffec50d;
    DAT_fffec50f = cVar1;
    DAT_fffec510 = cVar7;
    DAT_fffec511 = cVar5;
    DAT_fffec512 = cVar2;
    DAT_fffec513 = cVar6;
    DAT_fffec514 = cVar4;
    if ((((param_7 == '\0') && (param_8 == '\0')) && (param_9 != '\0')) && (param_10 != '\0')) {
      DAT_fffec50c = 0;
    }
    else {
      DAT_fffec50c = 0;
      if (((((param_14 != '\0') && (param_13 == '\0')) && (param_4 == '\0')) &&
          (((DAT_fffec50d != '\0' || (cVar7 != '\0')) ||
           ((cVar1 != '\0' || ((param_15 < 0x401 || (cVar6 != '\0')))))))) &&
         ((param_11 != '\0' && (((param_16 == '\0' && (param_17 == '\0')) && (param_18 == '\0'))))))
      {
        DAT_fffec50c = 1;
      }
    }
  }
  *param_19 = DAT_fffec50c;
  *param_20 = DAT_fffec50d;
  return;
}

