#ifndef VAR1
static void FUN1()
{
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 if (fputc((int)'', VAR2) == VAR3)
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 if(5==5)
 {
 if (fputc((int)'', VAR2) == VAR3)
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
