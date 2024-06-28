#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = -1;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3-5;
 }
 {
 char VAR4 = (char)VAR2;
 FUN3(VAR4);
 }
}
static void FUN4()
{
 short VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = VAR3-5;
 }
 {
 char VAR4 = (char)VAR2;
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
