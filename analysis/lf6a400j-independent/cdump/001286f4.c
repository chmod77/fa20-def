
/* WARNING: Removing unreachable block (ram,0x0012872c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001286f4(char param_1,ushort param_2,int param_3,ushort param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0xffff;
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0(param_3,(uint)param_4);
    if (&DAT_0000ffff < puVar1) {
      puVar1 = &DAT_0000ffff;
    }
    uVar2 = SUB42(puVar1,0);
  }
  if ((param_1 == '\0') || (param_2 < 0x4c)) {
    uVar2 = _DAT_fffee368;
  }
  if (param_1 == '\0') {
    uVar2 = 0xffff;
  }
  *param_5 = uVar2;
  _DAT_fffee368 = uVar2;
  return;
}

