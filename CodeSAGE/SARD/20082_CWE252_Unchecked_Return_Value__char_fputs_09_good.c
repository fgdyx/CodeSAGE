#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (fputs("", VAR3) == VAR4)
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 if(VAR5)
 {
 if (fputs("", VAR3) == VAR4)
 {
 FUN2("");
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
