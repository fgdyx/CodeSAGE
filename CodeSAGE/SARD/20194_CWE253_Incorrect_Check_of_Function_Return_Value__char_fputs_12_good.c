#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 if (fputs("", VAR2) == VAR3)
 {
 FUN3("");
 }
 }
 else
 {
 if (fputs("", VAR2) == VAR3)
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
