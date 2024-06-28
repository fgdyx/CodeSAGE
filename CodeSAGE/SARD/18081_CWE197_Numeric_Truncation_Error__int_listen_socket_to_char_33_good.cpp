#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = VAR4-5;
 {
 int VAR2 = VAR3;
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
