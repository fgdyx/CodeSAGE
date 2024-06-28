#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 short VAR3 = (short)VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = -1;
 VAR2 = VAR6-5;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
