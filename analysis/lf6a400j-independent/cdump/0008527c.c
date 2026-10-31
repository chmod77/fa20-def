
/* WARNING: Removing unreachable block (ram,0x00085320) */
/* WARNING: Removing unreachable block (ram,0x0008530a) */

void FUN_0008527c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,
                 undefined2 *param_5,undefined2 *param_6)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  uint uVar5;
  
  param_4 = param_4 & 0xffff;
  if (param_4 == 0) {
    puVar3 = (undefined *)0xffffffff;
  }
  else {
    puVar2 = (undefined *)__sdiv32_r1_by_r0(0x32a66666,param_4);
    puVar3 = (undefined *)((uint)puVar2 & 0xffff);
    if (&DAT_0000ffff < puVar2) {
      puVar3 = &DAT_0000ffff;
    }
  }
  uVar5 = ((uint)puVar3 & 0xffff) * (((int)param_4 >> 1) + 0x7fff);
  if (uVar5 < 0x7fff8001) {
    uVar4 = (undefined2)(uVar5 >> 0xf);
  }
  else {
    uVar4 = 0xffff;
  }
  *param_5 = uVar4;
  *param_6 = 0x7fff;
  if ((param_3 & 0xff) == 3) {
    cVar1 = -1;
    if (DAT_fffebb6d != -1) {
      cVar1 = DAT_fffebb6d + '\x01';
    }
  }
  else {
    DAT_fffebb6d = '\0';
    cVar1 = DAT_fffebb6d;
  }
  DAT_fffebb6d = cVar1;
  DAT_fffebb6c = 1;
  return;
}

