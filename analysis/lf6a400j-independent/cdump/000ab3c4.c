
void FUN_000ab3c4(char param_1,uint param_2,ushort *param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  
  cVar7 = '\x12';
  if (DAT_fffec4a9 != '\b') {
    cVar7 = DAT_fffec4a8;
  }
  if (DAT_fffec4a9 == '\a') {
    cVar7 = '\a';
  }
  if (DAT_fffec4a9 == '\x06') {
    cVar7 = '\x0f';
  }
  if (DAT_fffec4a9 == '\x04') {
    cVar7 = '\x05';
  }
  if (DAT_fffec4a9 == '\x03') {
    cVar7 = '\x03';
  }
  if (DAT_fffec4a9 == '\x02') {
    cVar7 = '\x01';
  }
  cVar8 = DAT_fffec4a8;
  if (DAT_fffec4a9 == '\b') {
    cVar8 = '\x13';
  }
  if (DAT_fffec4a9 == '\a') {
    cVar8 = '\x10';
  }
  if (DAT_fffec4a9 == '\x05') {
    cVar8 = '\r';
  }
  if (DAT_fffec4a9 == '\x04') {
    cVar8 = '\f';
  }
  if (DAT_fffec4a9 == '\x03') {
    cVar8 = '\n';
  }
  if (DAT_fffec4a9 == '\x02') {
    cVar8 = '\b';
  }
  cVar6 = DAT_fffec4a8;
  if (DAT_fffec4a9 == '\b') {
    cVar6 = '\x14';
  }
  if (DAT_fffec4a9 == '\x03') {
    cVar6 = '\x04';
  }
  if (DAT_fffec4a9 == '\x02') {
    cVar6 = '\x02';
  }
  cVar2 = DAT_fffec4a8;
  if (DAT_fffec4a9 == '\a') {
    cVar2 = '\x11';
  }
  if (DAT_fffec4a9 == '\x03') {
    cVar2 = '\v';
  }
  if (DAT_fffec4a9 == '\x02') {
    cVar2 = '\t';
  }
  if (param_1 != '\b') {
    cVar2 = DAT_fffec4a8;
  }
  cVar9 = DAT_fffec4a8;
  if (DAT_fffec4a9 == '\x06') {
    cVar9 = '\x0e';
  }
  if (DAT_fffec4a9 == '\x05') {
    cVar9 = '\x06';
  }
  cVar4 = '\x16';
  if (param_1 != '\x03') {
    cVar4 = DAT_fffec4a8;
  }
  if (DAT_fffec4a9 == '\x01') {
    cVar9 = '\0';
    if ((param_1 != '\x01') && (cVar9 = cVar4, param_1 == '\x02')) {
      cVar9 = '\x15';
    }
  }
  else if ((((param_1 != '\x04') && (cVar9 = cVar7, param_1 != '\x05')) &&
           (cVar9 = cVar8, param_1 != '\x06')) && (cVar9 = cVar2, param_1 == '\a')) {
    cVar9 = cVar6;
  }
  *param_4 = cVar9;
  cVar7 = -2;
  if (cVar9 != -1) {
    cVar7 = cVar9;
  }
  bVar5 = cVar7 + 1;
  if (bVar5 < 0x18) {
    if (bVar5 == 0) {
      bVar5 = 1;
    }
  }
  else {
    bVar5 = 0x17;
  }
  uVar3 = (ushort)bVar5;
  if (bVar5 == 1) {
    uVar3 = 0;
  }
  else if (bVar5 == 2) {
    uVar1 = LK_134C84((uint)&T_02DDF8,param_2);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 3) {
    uVar1 = LK_134C84((uint)&T_02DE04,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 4) {
    uVar1 = LK_134C84((uint)&T_02DE88,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 5) {
    uVar1 = LK_134C84((uint)&T_02DEAC,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 6) {
    uVar1 = LK_134C84((uint)&T_02DEB8,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 7) {
    uVar1 = LK_134C84((uint)&T_02DEC4,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 8) {
    uVar1 = LK_134C84((uint)&T_02DED0,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 9) {
    uVar1 = LK_134C84((uint)&T_02DEDC,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 10) {
    uVar1 = LK_134C84((uint)&T_02DEE8,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0xb) {
    uVar1 = LK_134C84((uint)&T_02DEF4,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0xc) {
    uVar1 = LK_134C84((uint)&T_02DE10,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0xd) {
    uVar1 = LK_134C84((uint)&T_02DE1C,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0xe) {
    uVar1 = LK_134C84((uint)&T_02DE28,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0xf) {
    uVar1 = LK_134C84((uint)&T_02DE34,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x10) {
    uVar1 = LK_134C84((uint)&T_02DE40,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x11) {
    uVar1 = LK_134C84((uint)&T_02DE4C,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x12) {
    uVar1 = LK_134C84((uint)&T_02DE58,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x13) {
    uVar1 = LK_134C84((uint)&T_02DE64,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x14) {
    uVar1 = LK_134C84((uint)&T_02DE70,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x15) {
    uVar1 = LK_134C84((uint)&T_02DE7C,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x16) {
    uVar1 = LK_134C84((uint)&T_02DE94,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  else if (bVar5 == 0x17) {
    uVar1 = LK_134C84((uint)&T_02DEA0,param_2 & 0xffff);
    uVar3 = (ushort)uVar1;
  }
  *param_3 = uVar3;
  DAT_fffec4a9 = param_1;
  DAT_fffec4a8 = cVar9;
  return;
}

