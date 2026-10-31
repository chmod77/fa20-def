
/* WARNING: Removing unreachable block (ram,0x000e24ea) */
/* WARNING: Removing unreachable block (ram,0x000e24f6) */
/* WARNING: Removing unreachable block (ram,0x000e24fa) */
/* WARNING: Removing unreachable block (ram,0x000e24fe) */
/* WARNING: Removing unreachable block (ram,0x000e2506) */

void FUN_000e23dc(char param_1,char param_2,byte param_3,ushort param_4,uint param_5,char param_6,
                 short param_7,char param_8,char param_9,char param_10,char param_11,uint param_12,
                 uint param_13,undefined4 param_14,char param_15)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *in_stack_00000038;
  
  uVar1 = LK_133F40((uint)&T_02F0D4,param_5 & 0xffff);
  uVar2 = LK_1346FC((uint)&T_02F0E0,param_13 & 0xffff);
  DAT_fffed24c = 1;
  uVar3 = 0;
  if (((((param_15 != -0x5b) && (param_1 != '\0')) && (param_2 == '\0')) &&
      ((((0x7c < param_3 && ((ushort)uVar1 <= param_4)) &&
        ((param_6 != '\0' && ((param_7 != -1 && (param_8 == '\0')))))) && (param_9 != '\0')))) &&
     (((param_10 == '\0' && (param_11 == '\0')) && (uVar2 <= param_12)))) {
    uVar3 = 1;
  }
  *in_stack_00000038 = uVar3;
  return;
}

