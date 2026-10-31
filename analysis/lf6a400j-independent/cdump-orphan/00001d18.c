
void FUN_00001d18(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  for (pcVar2 = "\x02"; *pcVar2 != '\0'; pcVar2 = pcVar2 + 0x10) {
    cVar1 = *pcVar2;
    if ((cVar1 == '\x11') || (cVar1 == '\x01')) {
      **(byte **)(pcVar2 + 4) =
           **(byte **)(pcVar2 + 4) & ~(byte)*(undefined4 *)(pcVar2 + 8) |
           (byte)*(undefined4 *)(pcVar2 + 0xc);
    }
    else if ((cVar1 == '\x12') || (cVar1 == '\x02')) {
      **(ushort **)(pcVar2 + 4) =
           **(ushort **)(pcVar2 + 4) & ~(ushort)*(undefined4 *)(pcVar2 + 8) |
           (ushort)*(undefined4 *)(pcVar2 + 0xc);
    }
    else if (cVar1 == '\x04') {
      **(uint **)(pcVar2 + 4) =
           **(uint **)(pcVar2 + 4) & ~*(uint *)(pcVar2 + 8) | *(uint *)(pcVar2 + 0xc);
    }
    else if (cVar1 == '\"') {
      do {
      } while ((*(uint *)(pcVar2 + 0xc) & 0xffff) !=
               ((int)**(short **)(pcVar2 + 4) & *(uint *)(pcVar2 + 8) & 0xffff));
    }
    else if (cVar1 == -0x80) {
      for (uVar3 = 0; (uVar3 & 0xffff) < *(uint *)(pcVar2 + 4); uVar3 = uVar3 + 1) {
      }
    }
    else if (cVar1 == -1) {
      (**(code **)(pcVar2 + 4))();
    }
    else if (cVar1 == -0x5b) {
      **(undefined2 **)(pcVar2 + 4) = (short)*(undefined4 *)(pcVar2 + 8);
      **(undefined2 **)(pcVar2 + 4) = (short)*(undefined4 *)(pcVar2 + 0xc);
    }
  }
  return;
}

