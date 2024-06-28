#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = new VAR2;
 break;
 }
 while(1)
 {
 delete VAR3;
 break;
 }
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 break;
 }
 while(1)
 {
 free(VAR3);
 break;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
