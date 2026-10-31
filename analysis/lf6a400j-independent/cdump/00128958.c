
/* WARNING: Removing unreachable block (ram,0x00128a5e) */

void FUN_00128958(char param_1,char param_2,char param_3,char param_4,ushort param_5,ushort param_6,
                 ushort param_7,ushort param_8,byte param_9,undefined4 param_10,char param_11,
                 char param_12,ushort param_13,ushort param_14,byte param_15,ushort param_16,
                 ushort param_17,ushort param_18,undefined1 *param_19)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  if (param_6 <= param_7) {
    uVar3 = param_7 - param_6;
  }
  uVar1 = 1;
  if (param_9 < 0x48) {
    uVar1 = DAT_fffee378;
  }
  if (param_11 == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0;
  if (((((((param_1 != '\0') && (param_2 == '\0')) && (param_3 != '\0')) &&
        ((param_4 != '\0' && (0x2ed < param_5)))) &&
       ((0x77 < param_18 && ((0xd54 < param_6 && (0x14ff < param_8)))))) && (param_8 < 0xc800)) &&
     (((((0xd53 < uVar3 && (0x1d < param_9)) && (param_12 != '\0')) &&
       (((0x1852 < param_13 && (param_13 < 0x2800)) &&
        ((0x7333 < param_14 && ((param_15 < 0x80 && (param_16 < 0x8000)))))))) &&
      (0x1800 < param_17)))) {
    uVar2 = 1;
  }
  DAT_fffee378 = uVar1;
  *param_19 = uVar2;
  return;
}

