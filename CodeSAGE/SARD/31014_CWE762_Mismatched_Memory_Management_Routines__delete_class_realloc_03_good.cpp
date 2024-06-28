#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 }
 if(5!=5)
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
 if(5==5)
 {
 VAR3 = NULL;
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 }
 if(5==5)
 {
 free(VAR3);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR3 = new VAR2;
 }
 if(5==5)
 {
 delete VAR3;
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(5==5)
 {
 VAR3 = new VAR2;
 }
 if(5==5)
 {
 delete VAR3;
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
