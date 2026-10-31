
void FUN_0004e6d4(void)

{
  undefined2 *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  
  (*(code *)PTR_FUN_0004e928)(PTR_PTR_0004e924,(int)*DAT_0004e92c);
  uVar3 = (*(code *)PTR_FUN_0004e930)();
  *DAT_0004e934 = uVar3;
  *DAT_0004e938 = uVar3;
  *DAT_0004e93c = uVar3;
  *DAT_0004e940 = uVar3;
  *DAT_0004e944 = uVar3;
  *DAT_0004e948 = uVar3;
  puVar1 = DAT_0004e94c;
  *DAT_0004e950 = *DAT_0004e94c;
  if ((*DAT_0004e954 & 0x20) != 0) {
    if ((*DAT_0004e958 != '\x01') && (*DAT_0004e958 != '\x03')) {
      *DAT_0004e95c = *DAT_0004e92c;
    }
    *DAT_0004e960 = *puVar1;
    *DAT_0004e964 = *DAT_0004e92c;
    *DAT_0004e96c = *(undefined2 *)PTR_DAT_0004e968;
  }
  pbVar2 = DAT_0004e974;
  bVar4 = *DAT_0004e974 | 0x10;
  if (((int)*DAT_0004e970 & 0x80U) == 0) {
    bVar4 = *DAT_0004e974 & 0xef;
  }
  *DAT_0004e974 = bVar4;
  bVar4 = *DAT_0004e978 | 0x80;
  if ((*pbVar2 & 0x10) == 0) {
    bVar4 = *DAT_0004e978 & 0x7f;
  }
  *DAT_0004e978 = bVar4;
  return;
}

