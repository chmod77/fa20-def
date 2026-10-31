
/* WARNING: Removing unreachable block (ram,0x0009edf2) */
/* WARNING: Removing unreachable block (ram,0x0009ed70) */
/* WARNING: Removing unreachable block (ram,0x0009ed18) */
/* WARNING: Removing unreachable block (ram,0x0009ecc0) */
/* WARNING: Removing unreachable block (ram,0x0009ec64) */
/* WARNING: Removing unreachable block (ram,0x0009ecec) */
/* WARNING: Removing unreachable block (ram,0x0009ed44) */
/* WARNING: Removing unreachable block (ram,0x0009edc2) */
/* WARNING: Removing unreachable block (ram,0x0009ee26) */

void FUN_0009ec30(ushort param_1,ushort param_2,char *param_3)

{
  ushort uVar1;
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
  char cVar12;
  
  if (DAT_fffec0e6 == '\0') {
    uVar3 = 0x3000;
  }
  else {
    uVar3 = 0x3100;
  }
  if (DAT_fffec0e0 == '\0') {
    uVar1 = 0xff00;
  }
  else {
    uVar1 = 0xffff;
  }
  if (DAT_fffec0e3 == '\0') {
    uVar4 = 0x5800;
  }
  else {
    uVar4 = 0x5900;
  }
  if (DAT_fffec0e7 == '\0') {
    uVar5 = 0x9000;
  }
  else {
    uVar5 = 0x9100;
  }
  if (DAT_fffec0e1 == '\0') {
    uVar6 = 0xc800;
  }
  else {
    uVar6 = 0xc900;
  }
  if (DAT_fffec0e4 == '\0') {
    uVar7 = 0xdc00;
  }
  else {
    uVar7 = 0xdd00;
  }
  if (DAT_fffec0e8 == '\0') {
    uVar8 = 0xf000;
  }
  else {
    uVar8 = 0xf100;
  }
  cVar2 = '\0';
  if (((((param_1 > uVar3) && (cVar2 = '\x05', param_1 > uVar4)) && (cVar2 = '\n', param_1 > uVar5))
      && ((cVar2 = '\x0f', param_1 > uVar6 && (cVar2 = '\x14', param_1 > uVar7)))) &&
     (cVar2 = '\x1e', param_1 <= uVar8)) {
    cVar2 = '\x19';
  }
  if (DAT_fffec0e2 == '\0') {
    uVar9 = 0x2800;
  }
  else {
    uVar9 = 0x298c;
  }
  if (DAT_fffec0e5 == '\0') {
    uVar10 = 0x5000;
  }
  else {
    uVar10 = 0x518c;
  }
  if (DAT_fffec0e9 == '\0') {
    uVar11 = 0x8c00;
  }
  else {
    uVar11 = 0x8d8c;
  }
  if (param_2 <= uVar9) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
    if (((param_2 > uVar10) && (cVar12 = '\x02', param_2 > uVar11)) &&
       (cVar12 = '\x04', param_2 <= uVar1)) {
      cVar12 = '\x03';
    }
  }
  *param_3 = cVar2 + cVar12;
  DAT_fffec0e6 = param_1 <= uVar3;
  DAT_fffec0e0 = param_2 <= uVar1;
  DAT_fffec0e3 = param_1 <= uVar4;
  DAT_fffec0e7 = param_1 <= uVar5;
  DAT_fffec0e1 = param_1 <= uVar6;
  DAT_fffec0e4 = param_1 <= uVar7;
  DAT_fffec0e8 = param_1 <= uVar8;
  DAT_fffec0e2 = param_2 <= uVar9;
  DAT_fffec0e5 = param_2 <= uVar10;
  DAT_fffec0e9 = param_2 <= uVar11;
  return;
}

