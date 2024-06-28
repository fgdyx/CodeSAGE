#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 long * *VAR3 = &VAR2;
 long * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 long * VAR2 = *VAR3;
 {
 long * VAR5 = (long *)malloc(100*sizeof(long));
 if (VAR5 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR2 = VAR5;
 }
 *VAR3 = VAR2;
 }
 {
 long * VAR2 = *VAR4;
 FUN4(VAR2[0]);
 free(VAR2);
 }
}
void FUN5()
{
 FUN1();
}
#endif
