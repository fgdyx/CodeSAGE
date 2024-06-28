#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN2("","",stdin);
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN2("","",stdin);
 if(VAR4==5)
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
