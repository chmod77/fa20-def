
/* WARNING: Removing unreachable block (ram,0x000a59d8) */
/* WARNING: Removing unreachable block (ram,0x000a59ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5974(char param_1,uint param_2,uint param_3,undefined2 param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  param_3 = param_3 & 0xffff;
  bVar2 = param_1 == '\0';
  uVar3 = FUN_0016bc68(&DAT_000148f0,param_4);
  puVar9 = (undefined *)(param_3 - 0x500);
  puVar11 = &DAT_0000ffff;
  if (((int)puVar9 < (int)&DAT_00010000) && (puVar11 = puVar9, (int)puVar9 < 0)) {
    puVar11 = (undefined *)0x0;
  }
  puVar10 = (undefined *)(param_3 - 0x166);
  puVar9 = &DAT_0000ffff;
  if (((int)puVar10 < (int)&DAT_00010000) && (puVar9 = puVar10, (int)puVar10 < 0)) {
    puVar9 = (undefined *)0x0;
  }
  puVar10 = &DAT_0000ffff;
  if ((undefined *)(param_3 + 0x133) < &DAT_00010000) {
    puVar10 = (undefined *)(param_3 + 0x133);
  }
  puVar4 = &DAT_0000ffff;
  if ((undefined *)(param_3 + 0x80) < &DAT_00010000) {
    puVar4 = (undefined *)(param_3 + 0x80);
  }
  if ((param_1 == '\0') || ((param_2 & 0xffff) <= ((uint)puVar10 & 0xffff))) {
    bVar1 = false;
  }
  else {
    bVar1 = uVar3 <= _DAT_fffec388;
  }
  if ((param_1 == '\0') || ((param_2 & 0xffff) <= ((uint)puVar10 & 0xffff))) {
    _DAT_fffec388 = 0;
  }
  else {
    _DAT_fffec388 = _DAT_fffec388 + 1;
    if (_DAT_fffec388 == 0) {
      _DAT_fffec388 = -1;
    }
  }
  if (((DAT_fffec38c != '\x01') && (DAT_fffec38c != '\x03')) || (cVar5 = '\x01', !bVar1)) {
    cVar5 = DAT_fffec38d;
  }
  if (bVar2) {
    cVar5 = '\0';
  }
  if (((DAT_fffec38c != '\x02') && (DAT_fffec38c != '\x05')) ||
     (cVar6 = '\x01', (param_2 & 0xffff) <= ((uint)puVar4 & 0xffff))) {
    cVar6 = DAT_fffec38a;
  }
  if (bVar2) {
    cVar6 = '\0';
  }
  if (((DAT_fffec38c != '\0') && (DAT_fffec38c != '\x02')) ||
     (cVar7 = '\x01', ((uint)puVar11 & 0xffff) <= (param_2 & 0xffff))) {
    cVar7 = DAT_fffec38b;
  }
  if (bVar2) {
    cVar7 = '\0';
  }
  if (((DAT_fffec38c != '\0') && (DAT_fffec38c != '\x01')) ||
     (cVar8 = '\x01', ((uint)puVar9 & 0xffff) <= (param_2 & 0xffff))) {
    cVar8 = DAT_fffec38e;
  }
  if (bVar2) {
    DAT_fffec38c = 0;
    DAT_fffec38e = '\0';
  }
  else {
    DAT_fffec38e = cVar8;
    if (cVar5 == '\0') {
      if (cVar6 == '\0') {
        if (cVar7 == '\0') {
          if (cVar8 == '\0') {
            DAT_fffec38c = 1;
          }
          else {
            DAT_fffec38c = 2;
          }
        }
        else {
          DAT_fffec38c = 5;
        }
      }
      else {
        DAT_fffec38c = 3;
      }
    }
    else {
      DAT_fffec38c = 4;
    }
  }
  DAT_fffec38a = cVar6;
  DAT_fffec38b = cVar7;
  DAT_fffec38d = cVar5;
  *param_5 = DAT_fffec38c;
  return;
}

