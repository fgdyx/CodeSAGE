#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 long * VAR4 = (long *)malloc(100*sizeof(long));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 }
 FUN4(VAR2[0]);
 free(VAR2);
}
static void FUN5()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 {
 long * VAR4 = (long *)malloc(100*sizeof(long));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR2 = VAR4;
 }
 }
 FUN4(VAR2[0]);
 free(VAR2);
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
