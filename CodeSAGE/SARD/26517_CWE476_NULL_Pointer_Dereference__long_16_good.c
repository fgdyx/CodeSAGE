#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 while(1)
 {
 VAR2 = NULL;
 break;
 }
 while(1)
 {
 if (VAR2 != NULL)
 {
 FUN2(*VAR2);
 }
 else
 {
 FUN3("");
 }
 break;
 }
}
static void FUN4()
{
 long * VAR2;
 while(1)
 {
 {
 long VAR3 = 5L;
 VAR2 = &VAR3;
 }
 break;
 }
 while(1)
 {
 FUN2(*VAR2);
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
