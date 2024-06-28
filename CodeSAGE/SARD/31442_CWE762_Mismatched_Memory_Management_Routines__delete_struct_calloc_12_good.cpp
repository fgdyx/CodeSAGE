#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 }
 else
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
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
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 }
 else
 {
 VAR3 = new VAR2;
 }
 if(FUN2())
 {
 delete VAR3;
 }
 else
 {
 delete VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
