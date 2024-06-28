#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 FUN2(&VAR3[0]);
 free(VAR3);
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR4 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5].VAR6 = 1;
 VAR4[VAR5].VAR7 = 1;
 }
 }
 VAR3 = VAR4;
 }
 FUN1(VAR3);
}
void FUN6()
{
 FUN3();
}
#endif
