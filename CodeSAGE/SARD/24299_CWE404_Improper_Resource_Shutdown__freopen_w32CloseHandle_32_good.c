#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 VAR3 = FUN2("","",stdin);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
