#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
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
 VAR6[VAR7] = 5LL;
 }
 }
 VAR5 = VAR6;
 }
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 VAR4.FUN5(VAR5);
 FUN1(VAR4);
}
void FUN6()
{
 FUN2();
}
#endif
