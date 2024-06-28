#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN4(VAR2[0]);
 free(VAR2);
 }
 }
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)realloc(VAR2, 1*sizeof(long));
 if(FUN6())
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN4(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
