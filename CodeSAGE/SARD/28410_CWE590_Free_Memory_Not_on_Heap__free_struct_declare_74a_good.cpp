#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 {
 VAR3 * VAR6 = (VAR3 *)malloc(100*sizeof(VAR3));
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
 VAR5 = VAR6;
 }
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
void FUN5()
{
 FUN2();
}
#endif
