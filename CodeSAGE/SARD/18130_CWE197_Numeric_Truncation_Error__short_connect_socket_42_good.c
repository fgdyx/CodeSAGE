#ifndef VAR1
static short FUN1(short VAR2)
{
 VAR2 = VAR3-5;
 return VAR2;
}
static void FUN2()
{
 short VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 char VAR4 = (char)VAR2;
 FUN3(VAR4);
 }
}
void FUN4()
{
 FUN2();
}
#endif
