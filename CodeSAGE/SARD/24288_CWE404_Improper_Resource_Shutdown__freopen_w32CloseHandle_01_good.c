#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN2("","",stdin);
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
