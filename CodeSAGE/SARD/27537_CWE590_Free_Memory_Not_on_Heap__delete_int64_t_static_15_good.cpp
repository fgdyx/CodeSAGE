#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 break;
 }
 FUN3(*VAR3);
 delete VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 {
 VAR2 * VAR4 = new VAR2;
 *VAR4 = 5LL;
 VAR3 = VAR4;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(*VAR3);
 delete VAR3;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
