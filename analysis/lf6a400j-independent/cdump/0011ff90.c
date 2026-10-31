
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011ff90(char param_1,char param_2,char param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,short *param_8,undefined2 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *p1;
  undefined *puVar6;
  int b;
  undefined *puVar7;
  undefined8 uVar8;
  
  p1 = (undefined *)0x0;
  if ((param_7 & 0xffff) <= (param_4 & 0xffff)) {
    p1 = (undefined *)(param_4 - param_7);
  }
  bVar1 = false;
  if (((param_2 != '\0') && (param_3 == '\0')) && (((uint)p1 & 0xffff) != 0)) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((param_2 != '\0') && (param_3 == '\x01')) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((param_2 != '\0') && (((param_3 == '\x02' || (param_3 == '\x03')) || (param_3 == '\x04')))) {
    bVar3 = true;
  }
  if (((uint)p1 & 0xffff) == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    p1 = (undefined *)((uint)p1 & 0xffff);
    b = (int)p1 * 10;
    puVar6 = (undefined *)0x0;
    uVar8 = FUN_0016caac();
    if ((int)uVar8 == 0) {
      puVar6 = (undefined *)__sdiv32_r1_by_r0((int)((ulonglong)uVar8 >> 0x20),b);
    }
    if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
  }
  if (bVar1) {
    uVar4 = LK_133E10((uint)&T_02FE64,param_5 & 0xff);
    p1 = (undefined *)((uint)puVar6 & 0xffff);
    puVar5 = (undefined *)(uVar4 & 0xffff);
    if ((undefined *)(uVar4 & 0xffff) < p1) {
      puVar5 = puVar6;
    }
  }
  else {
    puVar5 = (undefined *)(int)_DAT_fffee162;
  }
  *param_9 = (short)puVar5;
  if ((bVar1) && (p1 = puVar5 + (short)_DAT_fffee160, ((uint)p1 & 0xffff) < ((uint)puVar5 & 0xffff))
     ) {
    p1 = (undefined *)0xffffffff;
  }
  if (bVar2) {
    p1 = (undefined *)(param_5 & 0xff);
    uVar4 = LK_133E10((uint)&T_02FE94,(uint)p1);
    puVar6 = (undefined *)((int)(short)_DAT_fffee160 + uVar4);
    puVar7 = (undefined *)((uint)puVar6 & 0xffff);
    if (puVar7 < (undefined *)(uint)_DAT_fffee160) {
      puVar6 = (undefined *)0xffffffff;
      puVar7 = &DAT_0000ffff;
    }
    uVar4 = LK_133E10((uint)&T_02FEA0,(uint)p1);
    if ((undefined *)(uVar4 & 0xffff) < puVar7) {
      puVar6 = (undefined *)(uVar4 & 0xffff);
    }
  }
  else {
    puVar6 = p1;
    if (!bVar1) {
      puVar6 = (undefined *)(int)param_6._2_2_;
    }
  }
  if (bVar3) {
    uVar4 = LK_133E10((uint)&T_02FE88,param_5 & 0xff);
    p1 = (undefined *)((int)(short)_DAT_fffee160 + uVar4);
    if (((uint)p1 & 0xffff) < (uint)_DAT_fffee160) {
      p1 = (undefined *)0xffffffff;
    }
  }
  if (param_1 == '\0') {
    if (!bVar3) {
      p1 = puVar6;
    }
  }
  else {
    uVar4 = LK_133E10((uint)&T_02FE70,param_5 & 0xff);
    if ((uint)_DAT_fffee160 < (uVar4 & 0xffff)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)((int)(short)_DAT_fffee160 - (uVar4 & 0xffff));
    }
    uVar4 = LK_133E10((uint)&T_02FE7C,param_5 & 0xff);
    p1 = (undefined *)(uVar4 & 0xffff);
    if ((undefined *)(uVar4 & 0xffff) <= (undefined *)((uint)puVar6 & 0xffff)) {
      p1 = puVar6;
    }
    if (0x6665 < ((uint)p1 & 0xffff)) {
      p1 = (undefined *)0x6666;
    }
  }
  if (((((param_1 == '\0') && (!bVar3)) && (!bVar2)) && (!bVar1)) ||
     (_DAT_fffee160 = (short)p1, (param_6 & 0xffff) <= ((uint)p1 & 0xffff))) {
    _DAT_fffee160 = param_6._2_2_;
  }
  *param_8 = _DAT_fffee160;
  _DAT_fffee162 = (short)puVar5;
  return;
}

