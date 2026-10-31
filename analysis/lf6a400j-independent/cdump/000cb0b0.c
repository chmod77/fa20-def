
void FUN_000cb0b0(short param_1,int param_2,char param_3,undefined1 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar1 = (byte)(DAT_fffecbc9 + 1) < DAT_fffecbc9;
  DAT_fffecbc9 = DAT_fffecbc9 + 1;
  if (bVar1) {
    DAT_fffecbc9 = 0xff;
  }
  bVar1 = 4 < DAT_fffecbc9;
  if (bVar1) {
    DAT_fffecbc9 = 0;
  }
  if (((DAT_fffecbcd == '\0') && (bVar1)) &&
     (bVar2 = DAT_fffecbce == 0xff, DAT_fffecbce = DAT_fffecbce + 1, bVar2)) {
    DAT_fffecbce = 0xff;
  }
  if (param_3 == '\x01') {
    DAT_fffecbce = 0;
  }
  if (((DAT_fffecbcc == '\0') && (bVar1)) &&
     (bVar2 = DAT_fffecbca == 0xff, DAT_fffecbca = DAT_fffecbca + 1, bVar2)) {
    DAT_fffecbca = 0xff;
  }
  if (param_2 != 0xffffff) {
    DAT_fffecbca = 0;
  }
  if (((DAT_fffecbcb == '\0') && (bVar1)) &&
     (bVar1 = DAT_fffecbc8 == 0xff, DAT_fffecbc8 = DAT_fffecbc8 + 1, bVar1)) {
    DAT_fffecbc8 = 0xff;
  }
  if (param_1 != -1) {
    DAT_fffecbc8 = 0;
  }
  uVar3 = 1;
  if (((DAT_fffecbce < 0x20) && (DAT_fffecbca < 0x20)) && (DAT_fffecbc8 < 0x20)) {
    uVar3 = 0;
  }
  *param_4 = uVar3;
  DAT_fffecbcd = param_3 == '\x01';
  DAT_fffecbcc = param_2 != 0xffffff;
  DAT_fffecbcb = param_1 != -1;
  return;
}

