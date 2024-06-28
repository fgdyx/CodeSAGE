#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR4 = (VAR2 *)malloc(100*sizeof(VAR2));
 if (VAR4 == NULL)
 {
 FUN2("");
 FUN3(1);
 }
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5LL;
 }
 }
 VAR3 = VAR4;
 }
 VAR6* VAR7 = new VAR8;
 VAR7->FUN4(VAR3);
 delete VAR7;
}
void FUN5()
{
 FUN1();
}
#endif
