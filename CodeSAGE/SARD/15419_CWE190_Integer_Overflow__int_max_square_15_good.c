#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN2("");
 break;
 default:
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR3))
 {
 int VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 break;
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR3))
 {
 int VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 else
 {
 FUN2("");
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = 0;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = 2;
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 VAR2 = 2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 break;
 default:
 FUN2("");
 break;
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
