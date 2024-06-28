#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 int *VAR2 = NULL;
 VAR2 = (int *)malloc(sizeof(int));
 *VAR2 = 5;
 FUN3(*VAR2);
 /* FLAW: Check for NULL after dereferencing the pointer. This NULL check is unnecessary. */
 if (VAR2 != NULL)
 {
 *VAR2 = 10;
 }
 FUN3(*VAR2);
 }
 }
}
#endif
