#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = FUN3("");
 FUN2(VAR3);
 }
 }
}
static void FUN4()
{
 if(VAR4)
 {
 {
 char * VAR3 = FUN3("");
 FUN2(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
