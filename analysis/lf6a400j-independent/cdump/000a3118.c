
/* WARNING: Removing unreachable block (ram,0x000a32e0) */
/* WARNING: Removing unreachable block (ram,0x000a325a) */
/* WARNING: Removing unreachable block (ram,0x000a3202) */
/* WARNING: Removing unreachable block (ram,0x000a31a6) */
/* WARNING: Removing unreachable block (ram,0x000a314e) */
/* WARNING: Removing unreachable block (ram,0x000a317a) */
/* WARNING: Removing unreachable block (ram,0x000a31d2) */
/* WARNING: Removing unreachable block (ram,0x000a322e) */
/* WARNING: Removing unreachable block (ram,0x000a32b4) */
/* WARNING: Removing unreachable block (ram,0x000a330c) */

void FUN_000a3118(ushort param_1,ushort param_2,undefined1 *param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  char cVar13;
  
  if (DAT_fffec2be == '\0') {
    uVar6 = 0x2a00;
  }
  else {
    uVar6 = 0x2b00;
  }
  if (DAT_fffec2b8 == '\0') {
    uVar7 = 0xaa00;
  }
  else {
    uVar7 = 0xac80;
  }
  if (DAT_fffec2bb == '\0') {
    uVar8 = 0x3c00;
  }
  else {
    uVar8 = 0x3d00;
  }
  if (DAT_fffec2bf == '\0') {
    uVar9 = 0x4400;
  }
  else {
    uVar9 = 0x4500;
  }
  if (DAT_fffec2b9 == '\0') {
    uVar10 = 0x4c00;
  }
  else {
    uVar10 = 0x4d00;
  }
  if (DAT_fffec2bc == '\0') {
    uVar11 = 0x5600;
  }
  else {
    uVar11 = 0x5700;
  }
  if (DAT_fffec2c0 == '\0') {
    uVar12 = 0xa000;
  }
  else {
    uVar12 = 0xa100;
  }
  cVar13 = '\0';
  if (((((param_1 > uVar6) && (cVar13 = '\x05', param_1 > uVar8)) &&
       (cVar13 = '\n', param_1 > uVar9)) &&
      ((cVar13 = '\x0f', param_1 > uVar10 && (cVar13 = '\x14', param_1 > uVar11)))) &&
     (cVar13 = '\x1e', param_1 <= uVar12)) {
    cVar13 = '\x19';
  }
  if (DAT_fffec2ba == '\0') {
    uVar3 = 0x6e00;
  }
  else {
    uVar3 = 0x7080;
  }
  if (DAT_fffec2bd == '\0') {
    uVar4 = 0x8200;
  }
  else {
    uVar4 = 0x8480;
  }
  if (DAT_fffec2c1 == '\0') {
    uVar5 = 0x9600;
  }
  else {
    uVar5 = 0x9880;
  }
  if (param_2 <= uVar3) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
    if (((param_2 > uVar4) && (cVar2 = '\x02', param_2 > uVar5)) &&
       (cVar2 = '\x04', param_2 <= uVar7)) {
      cVar2 = '\x03';
    }
  }
  *param_4 = cVar13 + cVar2;
  uVar1 = LK_133B38((uint)&T_02DAD8,(uint)(cVar13 + cVar2));
  *param_3 = (char)uVar1;
  DAT_fffec2be = param_1 <= uVar6;
  DAT_fffec2b8 = param_2 <= uVar7;
  DAT_fffec2bb = param_1 <= uVar8;
  DAT_fffec2bf = param_1 <= uVar9;
  DAT_fffec2b9 = param_1 <= uVar10;
  DAT_fffec2bc = param_1 <= uVar11;
  DAT_fffec2c0 = param_1 <= uVar12;
  DAT_fffec2ba = param_2 <= uVar3;
  DAT_fffec2bd = param_2 <= uVar4;
  DAT_fffec2c1 = param_2 <= uVar5;
  return;
}

