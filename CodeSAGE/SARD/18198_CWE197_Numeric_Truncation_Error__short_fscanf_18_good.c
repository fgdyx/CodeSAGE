#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = VAR4-5;
 {
 char VAR5 = (char)VAR2;
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
