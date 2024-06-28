#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN2("","",stdin);
 while(1)
 {
 if (VAR3 != NULL)
 {
 fclose(VAR3);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
