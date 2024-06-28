#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = fopen("", "");
 if(FUN2())
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 }
 else
 {
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
