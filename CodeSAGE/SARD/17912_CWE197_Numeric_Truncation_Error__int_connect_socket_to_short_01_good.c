#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = VAR3-5;
 {
 short VAR4 = (short)VAR2;
 FUN2(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
