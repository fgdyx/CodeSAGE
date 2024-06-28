#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 VAR2 * VAR6 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR6 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 {
 size_t VAR7;
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR6[VAR7].VAR8 = 1;
 VAR6[VAR7].VAR9 = 1;
 }
 }
 VAR3 = VAR6;
 }
 FUN5(VAR3);
}
void FUN6()
{
 FUN2();
}
#endif
