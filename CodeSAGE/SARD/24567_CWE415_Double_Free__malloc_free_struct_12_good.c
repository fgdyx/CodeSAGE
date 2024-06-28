#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 free(VAR3);
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 free(VAR3);
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 else
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 }
 if(FUN2())
 {
 free(VAR3);
 }
 else
 {
 free(VAR3);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
