
uint FUN_0014fa96(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  undefined1 uVar7;
  short sVar6;
  
  uVar2 = (uint)DAT_ffff1e16;
  if ((uVar2 & 2) != 0) {
    uVar2 = param_1 & 0xff;
    *(undefined4 *)(uVar2 * 4 + -0xd2cc) = *(undefined4 *)(&DAT_00168eac)[uVar2 * 2];
    *(undefined4 *)(uVar2 * 4 + -0xd2bc) = *(undefined4 *)(&DAT_00168eb0)[uVar2 * 2];
    uVar3 = uVar2 * 2;
    if ((*(short *)(uVar3 - 0xd328) == -1) || (0x167 < *(ushort *)(uVar3 - 0xd328))) {
      if ((*(short *)(uVar3 - 0xd320) != -1) && (*(ushort *)(uVar3 - 0xd320) < 0x168)) {
        *(undefined1 *)(uVar2 - 0xd32c) = 0x20;
        *(byte *)(uVar2 - 0xd330) = *(byte *)(uVar2 - 0xd330) & 0xef;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd320) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd318) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd320);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd318));
        *(short *)(uVar3 - 0xd314) = sVar1 + sVar6 * -0x14;
LAB_0014fdce:
        uVar2 = FUN_0014fdec(uVar2);
        return uVar2;
      }
      *(undefined1 *)(uVar2 - 0xd32c) = 0;
    }
    else {
      if ((*(short *)(uVar3 - 0xd320) == -1) || (0x167 < *(ushort *)(uVar3 - 0xd320))) {
        *(undefined1 *)(uVar2 - 0xd32c) = 0x10;
        *(byte *)(uVar2 - 0xd330) = *(byte *)(uVar2 - 0xd330) & 0xef;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd328) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd318) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd328);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd318));
        *(short *)(uVar3 - 0xd314) = sVar1 + sVar6 * -0x14;
        goto LAB_0014fdce;
      }
      if (*(ushort *)(uVar3 - 0xd320) < *(ushort *)(uVar3 - 0xd328)) {
        *(undefined1 *)(uVar2 - 0xd32c) = 0x21;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd320) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd318) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd320);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd318));
        *(short *)(uVar3 - 0xd314) = sVar1 + sVar6 * -0x14;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd328) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd30c) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd328);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd30c));
        *(short *)(uVar3 - 0xd308) = sVar1 + sVar6 * -0x14;
      }
      else {
        *(undefined1 *)(uVar2 - 0xd32c) = 0x12;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd328) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd318) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd328);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd318));
        *(short *)(uVar3 - 0xd314) = sVar1 + sVar6 * -0x14;
        uVar4 = FUN_0016bd34(*(ushort *)(uVar3 - 0xd320) - 0x14);
        uVar7 = FUN_00143a8e(uVar4);
        *(undefined1 *)(uVar2 - 0xd30c) = uVar7;
        sVar1 = *(short *)(uVar3 - 0xd320);
        sVar6 = FUN_00143ae2((int)*(char *)(uVar2 - 0xd30c));
        *(short *)(uVar3 - 0xd308) = sVar1 + sVar6 * -0x14;
      }
      FUN_0014fdec(uVar2);
      if ((int)((uint)*(byte *)(uVar2 - 0xd30c) - (uint)*(byte *)(uVar2 - 0xd318)) < 2) {
        *(byte *)(uVar2 - 0xd330) = *(byte *)(uVar2 - 0xd330) & 0xef;
        uVar5 = FUN_0016caec((uint)*(ushort *)(uVar3 - 0xd328) - (uint)*(ushort *)(uVar3 - 0xd320));
        *(undefined2 *)(uVar3 - 0xd308) = uVar5;
        uVar2 = uVar3;
      }
      else {
        *(byte *)(uVar2 - 0xd330) = *(byte *)(uVar2 - 0xd330) | 0x10;
        if (*(char *)(uVar2 - 0xd318) == '\0') {
          *(byte *)(uVar2 - 0xd330) = *(byte *)(uVar2 - 0xd330) | 2;
          *(char *)(uVar2 - 0xd2d3) = *(char *)(uVar2 - 0xd30c) + DAT_ffff2d74;
        }
      }
    }
  }
  return uVar2;
}

