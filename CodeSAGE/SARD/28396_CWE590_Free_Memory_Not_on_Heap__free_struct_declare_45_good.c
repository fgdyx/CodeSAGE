#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 FUN2(&VAR3[0]);
 free(VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR5 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR5 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6].VAR7 = 1;
 VAR5[VAR6].VAR8 = 1;
 }
 }
 VAR3 = VAR5;
 }
 VAR4 = VAR3;
 FUN1();
}
void FUN6()
{
 FUN3();
}
#endif
