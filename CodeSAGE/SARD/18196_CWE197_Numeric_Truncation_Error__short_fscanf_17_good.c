#ifndef VAR1
static void FUN1()
{
 int VAR2;
 short VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR4-5;
 }
 {
 char VAR5 = (char)VAR3;
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
