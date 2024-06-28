#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 break;
 }
 FUN3(*VAR2);
 delete VAR2;
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 int * VAR3 = new int;
 *VAR3 = 5;
 VAR2 = VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(*VAR2);
 delete VAR2;
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
