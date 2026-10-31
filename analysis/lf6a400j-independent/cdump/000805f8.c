
/* WARNING: Removing unreachable block (ram,0x000808ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000805f8(char param_1,byte param_2,uint param_3,ushort param_4,byte param_5,uint param_6,
                 char param_7,char param_8,undefined4 param_9,short param_10,char param_11,
                 byte param_12,ushort param_13,undefined4 param_14,char param_15)

{
  uint uVar1;
  byte bVar3;
  uint uVar2;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  byte *in_stack_00000038;
  undefined1 *in_stack_0000003c;
  byte *in_stack_00000040;
  byte *in_stack_00000044;
  undefined1 *in_stack_00000048;
  undefined1 *in_stack_0000004c;
  undefined1 *in_stack_00000050;
  byte *in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined1 *in_stack_0000005c;
  byte *in_stack_00000060;
  undefined1 *in_stack_00000064;
  
  uVar1 = LK_133BCC((uint)&T_02C348,param_3 & 0xffff);
  *in_stack_00000040 = (byte)uVar1;
  bVar3 = 0;
  if (param_4 < 0x10b) {
    uVar2 = LK_133BCC((uint)&T_02C33C,param_3 & 0xffff);
    bVar3 = (byte)uVar2;
  }
  *in_stack_00000044 = bVar3;
  bVar4 = 0;
  if (param_15 != '\0') {
    bVar4 = 0x18;
  }
  *in_stack_00000060 = bVar4;
  *in_stack_00000064 = 0;
  if (param_7 == '\0') {
    uVar5 = 0;
  }
  else if (param_8 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar2 = LK_133B38((uint)&T_02C354,param_6 & 0xff);
    uVar5 = (ushort)uVar2;
  }
  *in_stack_0000004c = (char)uVar5;
  *in_stack_0000005c = 0;
  uVar8 = 0xffff;
  if ((DAT_fffebab3 != '\0') && (uVar8 = _DAT_fffebab0 + 1, uVar8 == 0)) {
    uVar8 = 0xffff;
  }
  if (((0xff < param_10) && (param_12 < DAT_fffebab7)) && (0xc7ff < param_13)) {
    uVar8 = 0;
  }
  if ((param_10 < -0x100) && ((param_11 == '\0' || (0x8b < uVar8)))) {
    bVar7 = 0x28;
  }
  else {
    bVar7 = 0;
  }
  *in_stack_00000054 = bVar7;
  *(bool *)in_stack_00000058 = 0x8b < uVar8;
  sVar9 = -1;
  if ((DAT_fffebab6 != '\0') && (sVar9 = _DAT_fffebaac + 1, sVar9 == 0)) {
    sVar9 = -1;
  }
  if (param_5 < DAT_fffebab4) {
    sVar9 = 0;
  }
  *in_stack_00000050 = 0;
  cVar6 = '\x01';
  if (DAT_fffebab2 <= param_5) {
    cVar6 = DAT_fffebab5;
  }
  if (param_5 != 0) {
    cVar6 = '\0';
  }
  if (cVar6 == '\0') {
    _DAT_fffebaae = 0;
  }
  else {
    _DAT_fffebaae = _DAT_fffebaae + 1;
    if (_DAT_fffebaae == 0) {
      _DAT_fffebaae = -1;
    }
  }
  DAT_fffebab5 = cVar6;
  *in_stack_00000048 = 0;
  uVar1 = (uint)(short)((ushort)(byte)uVar1 + (ushort)bVar3 + (uVar5 & 0xff) + (ushort)bVar7 +
                       (ushort)bVar4);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *in_stack_0000003c = (char)uVar1;
  bVar3 = (byte)(uVar1 + (int)param_1);
  uVar2 = uVar1 + (int)param_1 & 0xff;
  if (uVar2 < (uVar1 & 0xff)) {
    uVar2 = 0xff;
    bVar3 = 0xff;
  }
  if (param_2 < uVar2) {
    *in_stack_00000038 = bVar3;
  }
  else {
    *in_stack_00000038 = param_2;
  }
  _DAT_fffebab0 = uVar8;
  DAT_fffebab3 = 1;
  DAT_fffebab7 = param_12;
  _DAT_fffebaac = sVar9;
  DAT_fffebab6 = 1;
  DAT_fffebab4 = param_5;
  DAT_fffebab2 = param_5;
  return;
}

