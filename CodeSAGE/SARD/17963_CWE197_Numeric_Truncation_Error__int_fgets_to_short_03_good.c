#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3-5;
 }
 {
 short VAR4 = (short)VAR2;
 FUN3(VAR4);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 VAR2 = VAR3-5;
 }
 {
 short VAR4 = (short)VAR2;
 FUN3(VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
