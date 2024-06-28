#ifndef VAR1
static void FUN1()
{
 {
 int *VAR2 = NULL;
 if (VAR2 == NULL)
 {
 FUN2("");
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
