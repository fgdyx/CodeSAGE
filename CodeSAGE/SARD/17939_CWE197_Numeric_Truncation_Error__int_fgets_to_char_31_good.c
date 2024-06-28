#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = VAR3-5;
 {
 int VAR4 = VAR2;
 int VAR2 = VAR4;
 {
 char VAR5 = (char)VAR2;
 FUN2(VAR5);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
