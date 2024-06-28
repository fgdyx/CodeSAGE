#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(1*sizeof(long));
 if(FUN2())
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
 else
 {
 if (VAR2 != NULL)
 {
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
