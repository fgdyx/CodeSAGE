#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 int *VAR3 = NULL;
 VAR3 = (int *)malloc(sizeof(int));
 *VAR3 = 5;
 FUN2(*VAR3);
 /* FLAW: Check for NULL after dereferencing the pointer. This NULL check is unnecessary. */
 if (VAR3 != NULL)
 {
 *VAR3 = 10;
 }
 FUN2(*VAR3);
 }
}
#endif
