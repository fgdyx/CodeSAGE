#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 long * VAR3 = (long *)malloc(100*sizeof(long));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN5(VAR2[0]);
 free(VAR2);
}
static void FUN6()
{
 long * VAR2;
 VAR2 = NULL;
 if(FUN7())
 {
 {
 long * VAR3 = (long *)malloc(100*sizeof(long));
 if (VAR3 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 }
 FUN5(VAR2[0]);
 free(VAR2);
}
void FUN8()
{
 FUN1();
 FUN6();
}
#endif
