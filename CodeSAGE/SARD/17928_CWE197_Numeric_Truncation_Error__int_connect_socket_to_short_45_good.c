#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 short VAR4 = (short)VAR2;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = VAR5-5;
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
