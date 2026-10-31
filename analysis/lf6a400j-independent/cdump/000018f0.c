
void FUN_000018f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  for (; *param_1 != '\0'; param_1 = param_1 + 0x10) {
    cVar1 = *param_1;
    if ((cVar1 == '\x11') || (cVar1 == '\x01')) {
      **(byte **)(param_1 + 4) =
           **(byte **)(param_1 + 4) & ~(byte)*(undefined4 *)(param_1 + 8) |
           (byte)*(undefined4 *)(param_1 + 0xc);
    }
    else if ((cVar1 == '\x12') || (cVar1 == '\x02')) {
      **(ushort **)(param_1 + 4) =
           **(ushort **)(param_1 + 4) & ~(ushort)*(undefined4 *)(param_1 + 8) |
           (ushort)*(undefined4 *)(param_1 + 0xc);
    }
    else if (cVar1 == '\x04') {
      **(uint **)(param_1 + 4) =
           **(uint **)(param_1 + 4) & ~*(uint *)(param_1 + 8) | *(uint *)(param_1 + 0xc);
    }
    else if (cVar1 == '\"') {
      do {
      } while ((*(uint *)(param_1 + 0xc) & 0xffff) !=
               ((int)**(short **)(param_1 + 4) & *(uint *)(param_1 + 8) & 0xffff));
    }
    else if (cVar1 == -0x80) {
      for (uVar2 = 0; (uVar2 & 0xffff) < *(uint *)(param_1 + 4); uVar2 = uVar2 + 1) {
      }
    }
    else if (cVar1 == -1) {
      (**(code **)(param_1 + 4))();
    }
    else if (cVar1 == -0x5b) {
      **(undefined2 **)(param_1 + 4) = (short)*(undefined4 *)(param_1 + 8);
      **(undefined2 **)(param_1 + 4) = (short)*(undefined4 *)(param_1 + 0xc);
    }
  }
  return;
}

