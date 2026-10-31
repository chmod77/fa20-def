
/* WARNING: Removing unreachable block (ram,0x000b60e6) */
/* WARNING: Removing unreachable block (ram,0x000b6112) */

void FUN_000b6078(uint param_1,char param_2,undefined4 param_3,uint param_4,char param_5,
                 char param_6,char param_7,char param_8,ushort param_9,ushort param_10,byte param_11
                 ,undefined1 *param_12)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort uVar5;
  
  uVar1 = LK_133F40((uint)&T_02E400,param_1);
  uVar5 = 0;
  if (param_10 <= param_9) {
    uVar5 = param_9 - param_10;
  }
  if (DAT_fffec75c == '\0') {
    uVar3 = 0x5000;
  }
  else {
    uVar3 = 0x5155;
  }
  DAT_fffec75c = uVar5 <= uVar3;
  if (DAT_fffec75d == '\0') {
    bVar2 = 0x28;
  }
  else {
    bVar2 = 0x2c;
  }
  DAT_fffec75d = param_11 <= bVar2;
  uVar4 = 0;
  if (((((param_2 == '\0') && ((uVar1 & 0xffff) <= (param_4 & 0xffff))) &&
       (((bool)DAT_fffec75c || ((bool)DAT_fffec75d)))) &&
      ((((param_5 == '\0' && (param_6 == '\0')) && (param_7 != '\x02')) &&
       ((param_7 != '\x03' && (param_7 != '\x06')))))) && ((param_7 != '\t' && (param_8 != '\0'))))
  {
    uVar4 = 1;
  }
  *param_12 = uVar4;
  return;
}

