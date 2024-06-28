#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 if(1)
 {
 free(VAR3);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR3 = new VAR2[100];
 }
 if(1)
 {
 delete [] VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(1)
 {
 VAR3 = new VAR2[100];
 }
 if(1)
 {
 delete [] VAR3;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
