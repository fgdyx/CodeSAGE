#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (fputs("", VAR2) == VAR3)
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 if(FUN5())
 {
 if (fputs("", VAR2) == VAR3)
 {
 FUN3("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
