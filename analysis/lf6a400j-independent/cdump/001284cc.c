
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001284cc(ushort param_1,undefined4 param_2,char param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0xffffffff;
  if (_DAT_fffee354 != 0) {
    puVar2 = (undefined *)__udiv32_r1_by_r0(_DAT_fffee350,(uint)_DAT_fffee354);
    if (&DAT_0000ffff < puVar2) {
      puVar2 = &DAT_0000ffff;
    }
  }
  uVar1 = (short)puVar2;
  if (param_1 < 0xfa) {
    uVar1 = _DAT_fffee356;
  }
  if (param_3 != '\0') {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  _DAT_fffee354 = param_1;
  _DAT_fffee350 = param_2;
  _DAT_fffee356 = uVar1;
  return;
}

