#ifndef VAR1
void FUN1(short VAR2)
{
 {
 char VAR3 = (char)VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = -1;
 VAR2 = VAR4-5;
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
