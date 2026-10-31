
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122c94(uint param_1,uint param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined2 local_2c [4];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *local_18;
  
  local_18 = &DAT_fffee248;
  local_2c[0] = _DAT_fffee25c;
  local_2c[1] = _DAT_fffee25e;
  local_2c[2] = _DAT_fffee260;
  local_2c[3] = _DAT_fffee262;
  uStack_24 = _DAT_fffee264;
  uStack_22 = _DAT_fffee266;
  uStack_20 = _DAT_fffee268;
  uStack_1e = _DAT_fffee26a;
  uStack_1c = _DAT_fffee26c;
  uStack_1a = _DAT_fffee26e;
  iVar1 = 9;
  bVar3 = 0;
  iVar2 = 0;
  do {
    *(undefined2 *)(&DAT_fffee248 + iVar2) = *(undefined2 *)((int)local_2c + iVar2);
    bVar3 = bVar3 + 1;
    iVar2 = iVar2 + 2;
  } while (bVar3 < 10);
  iVar4 = 0x12;
  iVar2 = 0x10;
  for (; iVar1 = (int)(char)iVar1, -1 < iVar1; iVar1 = iVar1 + -1) {
    if (iVar1 == 0) {
      *(short *)(&DAT_fffee248 + iVar4) =
           ((short)((param_2 & 0xffff) * (param_1 & 0xffff) >> 0xf) -
           (short)((param_1 & 0xffff) * 32000 >> 0x10)) + 16000;
    }
    else {
      *(undefined2 *)(&DAT_fffee248 + iVar4) = *(undefined2 *)(&DAT_fffee248 + iVar2);
    }
    iVar4 = iVar4 + -2;
    iVar2 = iVar2 + -2;
  }
  *param_3 = _DAT_fffee248;
  param_3[1] = _DAT_fffee24a;
  param_3[2] = _DAT_fffee24c;
  param_3[3] = _DAT_fffee24e;
  param_3[4] = _DAT_fffee250;
  param_3[5] = _DAT_fffee252;
  param_3[6] = _DAT_fffee254;
  param_3[7] = _DAT_fffee256;
  param_3[8] = _DAT_fffee258;
  param_3[9] = _DAT_fffee25a;
  _DAT_fffee25c = _DAT_fffee248;
  _DAT_fffee25e = _DAT_fffee24a;
  _DAT_fffee260 = _DAT_fffee24c;
  _DAT_fffee262 = _DAT_fffee24e;
  _DAT_fffee264 = _DAT_fffee250;
  _DAT_fffee266 = _DAT_fffee252;
  _DAT_fffee268 = _DAT_fffee254;
  _DAT_fffee26a = _DAT_fffee256;
  _DAT_fffee26c = _DAT_fffee258;
  _DAT_fffee26e = _DAT_fffee25a;
  return;
}

