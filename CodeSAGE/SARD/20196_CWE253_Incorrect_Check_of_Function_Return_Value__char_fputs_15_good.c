#ifndef VAR1
static void FUN1()
{
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 if (fputs("", VAR2) == VAR3)
 {
 FUN2("");
 }
 break;
 }
}
static void FUN3()
{
 switch(6)
 {
 case 6:
 if (fputs("", VAR2) == VAR3)
 {
 FUN2("");
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
