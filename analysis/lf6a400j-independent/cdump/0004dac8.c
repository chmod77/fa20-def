
undefined4
FUN_0004dac8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint auStack_24 [2];
  
  FUN_0004dbd8(param_2,param_5,&iStack_40,&local_58);
  FUN_0004dbd8(param_1,param_5,&iStack_3c,&uStack_54);
  FUN_0004dbd8(param_3,param_6,&iStack_38,&uStack_50);
  FUN_0004dbd8(param_2,param_6,&iStack_34,&uStack_4c);
  FUN_0004dbd8(param_4,param_7,&iStack_30,&uStack_48);
  FUN_0004dbd8(param_3,param_7,&iStack_2c,&uStack_44);
  uVar1 = FUN_0004dbec(local_58,uStack_50,uStack_48,&uStack_28);
  uVar3 = iStack_40 + iStack_38 + iStack_30 + (uVar1 & 0xff);
  uVar1 = FUN_0004dbec(uStack_54,uStack_4c,uStack_44,auStack_24);
  uVar1 = iStack_3c + iStack_34 + iStack_2c + (uVar1 & 0xff);
  if (uVar1 <= uVar3) {
    iVar4 = uVar3 - uVar1;
    if (auStack_24[0] <= uStack_28) {
      uVar2 = FUN_0016b26c(iVar4,uStack_28 - auStack_24[0],0,0x4000);
      return uVar2;
    }
    if (iVar4 != 0) {
      uVar2 = FUN_0016b26c(iVar4 + -1,uStack_28 - auStack_24[0],0,0x4000);
      return uVar2;
    }
  }
  return 0;
}

