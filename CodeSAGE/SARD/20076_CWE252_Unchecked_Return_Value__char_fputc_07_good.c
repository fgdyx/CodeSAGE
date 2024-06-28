#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 if (fputc((int)'', VAR3) == VAR4)
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 if(VAR2==5)
 {
 if (fputc((int)'', VAR3) == VAR4)
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
