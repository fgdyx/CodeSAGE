#ifndef VAR1
int FUN1(int VAR2);
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 short VAR3 = (short)VAR2;
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
