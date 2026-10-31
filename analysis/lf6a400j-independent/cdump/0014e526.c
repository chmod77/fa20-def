
void FUN_0014e526(undefined4 *param_1)

{
  undefined2 uVar2;
  int iVar1;
  
  uVar2 = FUN_00001550(0x70);
  if ((*(byte *)(param_1[0x1d] + 1) & 0x40) == 0) {
    *(undefined **)param_1[0x1f] = &DAT_00162a18 + (uint)*(byte *)param_1[6] * 8;
    iVar1 = ((*(byte *)*param_1 & 8) == 0 ^ 1) * 8;
    FUN_0014d93c(param_1[0x1e],(&DAT_00162a18)[(uint)*(byte *)param_1[6] + iVar1] & 8);
    FUN_0014d93c(param_1[0x1e] + 0x18,(&DAT_00162a18)[(uint)*(byte *)param_1[6] + iVar1] & 2);
    FUN_0014d93c(param_1[0x1e] + 0x30,(&DAT_00162a18)[(uint)*(byte *)param_1[6] + iVar1] & 1);
    FUN_0014d93c(param_1[0x1e] + 0x48,(&DAT_00162a18)[(uint)*(byte *)param_1[6] + iVar1] & 4);
  }
  else {
    FUN_0014d93c(param_1[0x1e],0);
    FUN_0014d93c(param_1[0x1e] + 0x18,0);
    FUN_0014d93c(param_1[0x1e] + 0x30,0);
    FUN_0014d93c(param_1[0x1e] + 0x48,0);
  }
  FUN_00001550(uVar2);
  if (*(char *)param_1[1] == '\0') {
    *(byte *)param_1[0x1d] = *(byte *)param_1[0x1d] | 0x40;
  }
  return;
}

