#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 char VAR3 = (char)VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = -1;
 VAR2 = VAR6-5;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
