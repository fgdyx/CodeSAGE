#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 VAR2 = VAR5-5;
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 short VAR6 = (short)VAR2;
 FUN2(VAR6);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
