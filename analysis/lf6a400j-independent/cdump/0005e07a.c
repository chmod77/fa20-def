
void FUN_0005e07a(byte *param_1,byte *param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char *pcVar4;
  char local_1c [4];
  undefined1 uStack_18;
  char local_14 [4];
  char cStack_10;
  
  pcVar1 = local_1c;
  local_1c[0] = (char)((int)(uint)*param_1 >> 2);
  local_1c[1] = (*param_1 & 3) << 4 | (byte)((int)(uint)param_1[1] >> 4);
  local_1c[2] = (param_1[1] & 0xf) << 2 | (byte)((int)(uint)param_1[2] >> 6);
  local_1c[3] = param_1[2] & 0x3f;
  uStack_18 = (char)((int)(uint)param_1[3] >> 2);
  pcVar4 = local_14;
  for (bVar3 = 0; bVar3 < 5; bVar3 = bVar3 + 1) {
    uVar2 = (uint)*pcVar1;
    pcVar1 = pcVar1 + 1;
    *pcVar4 = (&DAT_0002c063)[uVar2 & 0x20 | (int)(uVar2 & 0x1e) >> 1 | (uVar2 & 1) << 4];
    pcVar4 = pcVar4 + 1;
  }
  *param_2 = local_14[0] << 4 | local_14[1];
  param_2[1] = local_14[3] | local_14[2] << 4;
  param_2[2] = cStack_10 << 4;
  return;
}

