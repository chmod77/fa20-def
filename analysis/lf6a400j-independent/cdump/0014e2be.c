
void FUN_0014e2be(undefined4 *param_1)

{
  short sVar1;
  char cVar3;
  ushort uVar2;
  
  if (((((*(char *)param_1[1] == '\0') && ((*(byte *)*param_1 & 4) != 0)) &&
       ((*(byte *)param_1[0x1d] & 4) == 0)) &&
      ((((*(byte *)*param_1 & 0x20) == 0 || (-1 < *(short *)param_1[0x1b])) ||
       (0x10 < *(ushort *)param_1[5])))) &&
     ((((*(byte *)param_1[0x1d] & 0x20) != 0 && (*(short *)param_1[0x1b] != 0)) ||
      (((-1 < *(short *)param_1[0x1b] ||
        (sVar1 = *(short *)param_1[0x1b],
        cVar3 = FUN_0016bd50(-(int)*(char *)param_1[0x13],0xfffffffe), (int)cVar3 < (int)sVar1)) &&
       ((*(short *)param_1[0x1b] < 1 ||
        (uVar2 = FUN_0016b608((int)*(char *)param_1[0x12],2),
        *(short *)param_1[0x1b] < (short)(uVar2 & 0xff))))))))) {
    *(undefined1 *)param_1[2] = 1;
  }
  else {
    *(undefined1 *)param_1[2] = 2;
  }
  return;
}

