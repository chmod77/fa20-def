
void FUN_0009ba58(char param_1,byte param_2,char param_3,byte param_4,byte param_5,uint param_6,
                 uint param_7,uint param_8,char *param_9,undefined1 *param_10,undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *p1;
  byte bVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = (param_8 & 0xff) * 2;
  if (0xff < uVar12) {
    uVar12 = 0xff;
  }
  bVar4 = (byte)uVar12;
  bVar1 = 1 < param_2;
  bVar3 = false;
  if ((bVar1) && (param_2 == 0)) {
    bVar3 = true;
  }
  bVar2 = (param_6 & 0xff) != 0;
  if (bVar2) {
    puVar7 = &T_02D8C8;
    p1 = (undefined *)(param_7 & 0xff);
    uVar12 = LK_133B38((uint)&T_02D8C8,(uint)p1);
    DAT_fffec01a = (undefined1)uVar12;
    iVar11 = (int)(param_6 & 0xff) >> 4;
    if (iVar11 == 1) {
      p1 = (undefined *)0x0;
    }
    else if (iVar11 == 2) {
      p1 = (undefined *)0x0;
    }
    else if (iVar11 == 3) {
      p1 = &UNK_00000014;
    }
    else if (iVar11 == 4) {
      p1 = &UNK_00000014;
    }
    if (iVar11 == 1) {
      puVar7 = (undefined *)0x0;
    }
    else if (iVar11 == 2) {
      puVar7 = (undefined *)0x0;
    }
    else if (iVar11 == 3) {
      puVar7 = (undefined *)0x0;
    }
    else if (iVar11 == 4) {
      puVar7 = (undefined *)0x0;
    }
    if ((bVar1) && (puVar7 = (undefined *)0x0, bVar3)) {
      puVar7 = p1;
    }
    DAT_fffec018 = (char)(puVar7 + uVar12);
    DAT_fffec019 = SUB41(puVar7,0);
    if (((uint)(puVar7 + uVar12) & 0xff) < ((uint)puVar7 & 0xff)) {
      DAT_fffec018 = -1;
    }
  }
  *param_10 = DAT_fffec019;
  *param_11 = DAT_fffec01a;
  if (bVar2) {
    if (DAT_fffec01d == '\0') {
      DAT_fffec01c = 0;
      DAT_fffec01d = '\x01';
    }
    DAT_fffec01b = DAT_fffec01c;
    DAT_fffec01c = DAT_fffec01c + 1;
    if (DAT_fffec01c == 0) {
      DAT_fffec01c = 0xff;
    }
  }
  else {
    DAT_fffec01d = '\0';
  }
  bVar8 = 0;
  if (bVar2) {
    bVar8 = DAT_fffec01b;
  }
  bVar5 = 0;
  if (bVar2) {
    bVar5 = DAT_fffec020;
  }
  if (DAT_fffec021 < bVar2) {
    if (1 < param_2) {
      if (0x27 < param_4) {
        if (0x4f < param_4) {
          bVar5 = 0;
        }
        else {
          bVar5 = 0;
        }
      }
      else {
        bVar5 = 0;
      }
    }
    else if (0x27 < param_4) {
      if (0x4f < param_4) {
        bVar5 = 0;
      }
      else {
        bVar5 = 0;
      }
    }
    else {
      bVar5 = 0;
    }
  }
  bVar6 = 0;
  if (bVar2) {
    bVar6 = DAT_fffec01f;
  }
  if (DAT_fffec021 < bVar2) {
    if (1 < param_2) {
      if (0x27 < param_4) {
        if (0x4f < param_4) {
          bVar6 = 6;
        }
        else {
          bVar6 = 6;
        }
      }
      else {
        bVar6 = 6;
      }
    }
    else if (0x27 < param_4) {
      if (0x4f < param_4) {
        bVar6 = 6;
      }
      else {
        bVar6 = 6;
      }
    }
    else {
      bVar6 = 6;
    }
  }
  if (((((bVar1) && (!bVar3)) || (!bVar2)) || ((param_3 != '\0' || (bVar8 < bVar5)))) ||
     ((bVar6 <= bVar8 || ((param_4 < 0x28 || (cVar9 = DAT_fffec018, param_5 < 0xfe)))))) {
    cVar9 = '\0';
  }
  if ((bVar4 < DAT_fffec01e) && (bVar4 <= DAT_fffec01e)) {
    cVar10 = DAT_fffec01e - bVar4;
  }
  else {
    cVar10 = '\0';
  }
  if (param_1 == '\x03') {
    if (cVar9 == '\0') {
      cVar9 = cVar10;
    }
  }
  else {
    cVar9 = '\0';
  }
  *param_9 = cVar9;
  DAT_fffec021 = bVar2;
  DAT_fffec020 = bVar5;
  DAT_fffec01f = bVar6;
  DAT_fffec01e = cVar9;
  return;
}

