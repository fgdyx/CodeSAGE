#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR7)
 {
 FUN3("");
 }
 else
 {
 free(VAR3);
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR4)
 {
 free(VAR3);
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR7)
 {
 FUN3("");
 }
 else
 {
 VAR3 = (VAR2 *)FUN6(100*sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR4)
 {
 ;
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 VAR3 = (VAR2 *)FUN6(100*sizeof(VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2(&VAR3[0]);
 }
 if(VAR4)
 {
 ;
 }
}
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
