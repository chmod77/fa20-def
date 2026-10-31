
/* WARNING: Removing unreachable block (ram,0x000baa28) */

void FUN_000ba9c0(ushort *param_1,int param_2,ushort *param_3,int param_4,short *param_5)

{
  ushort uVar1;
  ushort uVar2;
  
  *param_5 = (*param_1 >> 1) + (*param_3 >> 1);
  uVar1 = *(ushort *)(param_2 + 2) >> 1;
  uVar2 = uVar1 + (*(ushort *)(param_4 + 2) >> 1);
  if (uVar2 < uVar1) {
    param_5[1] = -1;
  }
  else {
    param_5[1] = uVar2;
  }
  return;
}

