
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7408(char param_1,uint param_2,uint param_3,ushort param_4,char param_5,ushort *param_6
                 ,ushort *param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar2 = LK_133F40((uint)&T_02DC6C,param_3);
  uVar6 = (ushort)uVar2;
  if (DAT_fffec424 == '\0') {
    DAT_fffec425 = '\0';
    DAT_fffec424 = '\x01';
  }
  uVar1 = param_4;
  if (DAT_fffec425 != '\0') {
    FUN_0016b4d8(&DAT_ffff19c2,param_4,0xccd);
    uVar1 = _DAT_ffff19c2;
  }
  _DAT_ffff19c2 = uVar1;
  DAT_fffec425 = 1;
  uVar1 = 0x3200;
  if (param_5 != '\0') {
    uVar1 = _DAT_ffff19c2;
  }
  *param_7 = uVar1;
  if (((param_1 == '\0') || (uVar3 = LK_133BCC((uint)&T_02DC60,param_2), (uVar3 & 0xff) < 10)) ||
     (cVar4 = '\x01', param_3 < 10)) {
    cVar4 = DAT_fffec423;
  }
  if (param_3 < 10) {
    cVar4 = '\0';
  }
  if (DAT_fffec422 == '\0') {
    uVar5 = 0x3200;
  }
  else {
    uVar5 = 0x2f80;
  }
  if (((cVar4 == '\0') && (uVar5 > uVar1)) && ((uint)_DAT_fffec420 <= (uVar2 & 0xffff))) {
    uVar6 = _DAT_fffec420;
  }
  *param_6 = uVar6;
  DAT_fffec423 = cVar4;
  _DAT_fffec420 = uVar6;
  DAT_fffec422 = uVar5 <= uVar1;
  return;
}

