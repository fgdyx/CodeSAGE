#ifndef VAR1
void FUN1(short &VAR2);
static void FUN2()
{
 short VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 char VAR3 = (char)VAR2;
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN2();
}
#endif
